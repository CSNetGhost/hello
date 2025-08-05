// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2003-2015 The Boeing Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef TEXTSOURCE_HPP
#define TEXTSOURCE_HPP

#include <algorithm>     // 包含标准算法库，如 std::find, std::sort 等
#include <deque>         // 包含双端队列容器，用于存储已应用的更改
#include <string>        // 包含字符串类，用于处理文本数据
#include <vector>        // 包含动态数组容器，用于存储多个元素

#include <QVector>       // 包含 Qt 的动态数组容器，用于与 Qt 组件交互

// 包含项目自定义的头文件
#include "FileSignature.hpp"      // 定义文件签名相关的类或结构体
#include "TextSourceChange.hpp"   // 定义文本源更改相关的类或结构体
#include "UtCallback.hpp"         // 包含回调机制相关的定义
#include "UtPath.hpp"             // 包含路径处理相关的定义
#include "UtTextDocument.hpp"     // 包含基础文本文档类的定义
#include "ViExport.hpp"           // 包含导出宏，用于控制符号的可见性

// 前向声明 Qt 类，减少编译依赖
class QDataStream;      // Qt 的数据流类，用于序列化和反序列化数据
class QWidget;          // Qt 的窗口部件基类
class UtTextRange;      // 自定义的文本范围类，可能用于表示文本的选择范围
class WsfParseNode;     // 可能与解析树节点相关的类
class QTextCursor;      // Qt 的文本光标类，用于在文本中定位和操作
class QTextDocument;    // Qt 的文本文档类，用于处理和显示文本

namespace wizard
{
    class Editor;               // 前向声明 Editor 类，可能在 TextSource 中被引用
    class Project;              // 前向声明 Project 类，表示项目
    class ProjectWorkspace;     // 前向声明 ProjectWorkspace 类，表示项目工作空间
    class TextSourceView;       // 前向声明 TextSourceView 类，表示文本源的视图

    /**
     * @class TextSource
     * @brief 表示项目引用的文件。该文件可能已加载到内存中，也可能未加载。
     *
     * `TextSource` 类继承自 `UtTextDocument`，用于管理项目中的文本文件。
     * 由于多线程解析的存在，此类在文本编辑器中维护一个独立的文本副本。
     * 对文档所做的更改会被排队，并仅在解析器停止后应用。
     *
     * 注意：虽然 `TextSource` 继承自 `UtTextDocument`，但直接使用 `UtTextDocument` 的修改器（mutators）不被建议。
     */
    class VI_EXPORT TextSource : public UtTextDocument
    {
    public:
        /**
         * @brief 当给定的 `TextSource` 有字符被删除时调用的回调。
         *
         * 此回调用于通知其他组件，当 `TextSource` 中的字符被删除时的事件。
         * 回调函数签名：`void(TextSource*, size_t, int)`
         * - 第一个参数：发生更改的 `TextSource` 对象指针
         * - 第二个参数：文本更改的位置
         * - 第三个参数：从文本中删除的字符数量
         */
        static UtCallbackListN<void(TextSource*, size_t, int)> TextSourceCharDeleted;

        /**
         * @enum Flags
         * @brief 定义 `TextSource` 的标志位，用于标识文件的状态或属性。
         */
        enum Flags
        {
            cINCLUDED = 1,       ///< 文件已被场景包含，必须保留在内存中
            cCRITICAL = 2,       ///< 文件在某些方面是关键的，必须保留在内存中

            cCRITICAL_MASK = cCRITICAL | cINCLUDED ///< 关键和包含的掩码
        };

        // 声明友元类，允许这些类访问 `TextSource` 的私有和保护成员
        friend class wizard::Project;
        friend class wizard::ProjectWorkspace;

        /**
         * @brief 构造函数
         * @param aProjectManagerPtr 指向项目管理器的指针，用于管理项目工作空间
         * @param aSourcePath 文件的路径，类型为 `UtPath`
         */
        TextSource(ProjectWorkspace* aProjectManagerPtr, const UtPath& aSourcePath);

        /**
         * @brief 析构函数
         */
        virtual ~TextSource();

        /**
         * @brief 将 `TextSource` 添加到工作空间。
         *
         * 此函数用于将当前的 `TextSource` 对象注册到项目工作空间中，可能涉及初始化或关联操作。
         */
        void AddedToWorkspace();

        /**
         * @brief 将文件加载到内存中（如果尚未加载）。
         * @return 是否成功加载文件
         */
        bool Load();

        /**
         * @brief 获取 `TextSource` 的源文档。
         * @return 指向 `UtTextDocument` 的指针，表示源文档
         */
        UtTextDocument* GetSource();

        /**
         * @brief 检查文件是否已被删除。
         * @return 如果文件已被删除，返回 `true`；否则，返回 `false`
         */
        bool                                IsDeleted() const { return mDeleted; }

        /**
         * @brief 设置文件是否被删除。
         * @param aIsDeleted 是否删除文件的标志
         */
        void                                SetDeleted(bool aIsDeleted);

        /**
         * @brief 检查文件是否有修改（与磁盘上的版本相比）。
         * @param aAlwaysFullyReload 是否始终完全重新加载文件
         * @return 是否检测到文件修改
         */
        bool                                CheckForFileModifications(bool aAlwaysFullyReload);

        /**
         * @brief 处理在指定位置插入文本的操作。
         * @param aPosition 插入位置
         * @param aLength 插入文本的长度
         * @param aText 指向插入文本的指针
         */
        void                                HandleInsert(int aPosition, int aLength, const char* aText);

        /**
         * @brief 处理在指定位置删除文本的操作。
         * @param aPosition 删除位置
         * @param aLength 删除文本的长度
         */
        void                                HandleDelete(int aPosition, int aLength);

        /**
         * @brief 为指定的项目创建一个新的视图。
         * @param aProjectPtr 指向项目的指针
         * @return 指向新创建的 `TextSourceView` 的指针
         */
        TextSourceView* NewView(Project* aProjectPtr);

        /**
         * @brief 获取与指定父项目关联的视图。
         * @param aParentPtr 指向父项目的指针
         * @return 指向 `TextSourceView` 的指针
         */
        TextSourceView* GetView(Project* aParentPtr);

        /**
         * @brief 获取所有与 `TextSource` 关联的视图。
         * @return 指向 `TextSourceView` 指针的常量引用向量
         */
        const std::vector<TextSourceView*>& GetViews() const { return mViews; }

        /**
         * @brief 当编辑器关闭时调用，通知 `TextSource` 该编辑器已关闭。
         * @param aEditorPtr 指向关闭的 `Editor` 的指针
         */
        void                                EditorClosed(Editor* aEditorPtr);

        /**
         * @brief 获取与 `TextSource` 关联的 Qt 文档的不透明指针。
         * @return 指向 Qt 文档的 `void*` 指针
         */
        void* GetQtDocument() const { return mDocumentPtr; }

        /**
         * @brief 获取与 `TextSource` 关联的 Qt 文档作为 `QTextDocument` 指针。
         * @return 指向 `QTextDocument` 的指针
         */
        QTextDocument* GetDocumentAsQTextDocument() const { return static_cast<QTextDocument*>(mDocumentPtr); }

        // /**
        //  * @brief 更新文档的样式。
        //  * 
        //  * 此函数可能用于根据当前的样式设置更新文档的显示样式。
        //  * 目前被注释掉，可能尚未实现或暂时不需要。
        //  */
        // void UpdateStyling();

        /**
         * @brief 项目解析更新时调用，可能涉及重新解析或更新文档内容。
         */
        void ProjectParseUpdated();

        /**
         * @brief 保存 `TextSource` 的内容。
         * @return 是否成功保存
         */
        bool Save();

        /**
         * @brief 保存 `TextSource` 的内容，并发送相关通知。
         */
        void SaveWithNotifications();

        /**
         * @brief 将 `TextSource` 另存为新的文件。
         */
        void SaveAs();

        /**
         * @brief 获取文件名。
         * @return 文件名的 `std::string` 表示
         */
        std::string GetFileName();

        /**
         * @brief 获取文件在系统中的路径。
         * @return 文件系统路径的 `std::string` 表示
         */
        std::string GetSystemPath() const { return mFilePath.GetSystemPath(); }

        /**
         * @brief 在指定的文本范围内替换文本。
         * @param aReplaceRange 要替换的文本范围，类型为 `UtTextRange`
         * @param aText 要插入的新文本，类型为 `std::string`
         */
        void Replace(const UtTextRange& aReplaceRange, const std::string& aText);

        /**
         * @brief 在文档末尾追加文本。
         * @param aText 要追加的文本，类型为 `std::string`
         */
        void Append(const std::string& aText);

        /**
         * @brief 获取所有待处理的更改。
         * @return 常量引用到 `TextSourceChange` 向量，表示待处理的更改列表
         */
        const std::vector<TextSourceChange>& GetPendingChanges() const { return mPendingChanges; }

        /**
         * @brief 当文件的修改状态发生变化时调用的回调。
         *
         * 此回调用于通知其他组件，当 `TextSource` 的文件修改状态发生变化时的事件。
         */
        UtCallbackListN<void(TextSource&)> FileModifiedChange;

        /**
         * @brief 检查 `TextSource` 是否已被修改（与上次保存相比）。
         * @return 如果文件已被修改，返回 `true`；否则，返回 `false`
         */
        bool IsModified() const { return mModified; }

        /**
         * @brief 标记保存点已达到，可能用于撤销/重做管理。
         */
        void SavePointReached();

        /**
         * @brief 读取源文件内容，可能根据参数决定是否完全重新加载。
         * @param aAlwaysFullyReload 是否始终完全重新加载文件
         * @return 是否成功读取源文件
         */
        bool ReadSource(bool aAlwaysFullyReload = false);

        /**
         * @brief 获取与 `TextSource` 关联的项目工作空间。
         * @return 指向 `ProjectWorkspace` 的指针
         */
        ProjectWorkspace* GetWorkspace() const { return mProjectWorkspacePtr; }

        /**
         * @brief 获取与 `TextSource` 关联的项目。
         * @return 指向 `Project` 的指针
         */
        Project* GetProject();

        /**
         * @brief 等待源文件的修改完成，可能涉及同步操作。
         */
        void              WaitForSourceModifications();

        /**
         * @brief 获取 `TextSource` 的标志位。
         * @return 标志位的整数值
         */
        int               GetFlags() const { return mFlags; }

        /**
         * @brief 设置 `TextSource` 的标志位。
         * @param aFlags 新的标志位整数值
         */
        void              SetFlags(int aFlags) { mFlags = aFlags; }

        /**
         * @brief 检查 `TextSource` 是否为关键文件（即是否具有 `cCRITICAL` 或 `cINCLUDED` 标志）。
         * @return 如果文件是关键的，返回 `true`；否则，返回 `false`
         */
        bool              IsCritical() const { return (cCRITICAL_MASK & mFlags) != 0; }

        /**
         * @brief 检查 `TextSource` 是否已加载到内存中。
         * @return 如果文件已加载，返回 `true`；否则，返回 `false`
         */
        bool              IsLoaded() const { return mLoaded; }

        /**
         * @brief 卸载 `TextSource`，可能涉及释放内存等操作。
         */
        void              Unload();

        /**
         * @brief 将修改应用到指定的文本范围和文档中。
         * @param aRange 要应用修改的文本范围，类型为 `UtTextRange`
         * @param aStartSequenceNumber 开始的序列号，用于标识更改的顺序
         */
        void ApplyModifications(UtTextRange& aRange, long long aStartSequenceNumber) const;

        /**
         * @brief 在指定位置应用修改，可能涉及序列号的管理。
         * @param aPos 应用修改的位置
         * @param aStartSequenceNumber 开始的序列号，用于标识更改的顺序
         * @return 应用修改后的新位置
         */
        size_t ApplyModifications(size_t aPos, long long aStartSequenceNumber) const;

        /**
         * @brief 将待处理的修改应用到指定的文档中。
         * @param aRange 要应用修改的文本范围，类型为 `UtTextRange`
         * @param aDocument 目标文档，类型为 `UtTextDocument`
         */
        void ApplyPendingModifications(UtTextRange& aRange, UtTextDocument& aDocument) const;

        /**
         * @brief 检查是否已应用具有指定序列号的更改。
         * @param aSequenceNumber 要检查的序列号
         * @return 如果已应用该序列号的更改，返回 `true`；否则，返回 `false`
         */
        bool HasAppliedChanges(long long aSequenceNumber) const;

        /**
         * @brief 检查是否存在待处理的更改。
         * @return 如果存在待处理的更改，返回 `true`；否则，返回 `false`
         */
        bool HasPendingChanges() const { return !mPendingChanges.empty(); }

        /**
         * @brief 获取下一个序列号，用于标识新的更改。
         * @return 下一个序列号的 `long long` 值
         */
        static long long GetNextSequenceNumber() { return sNextSequenceNumber; }

        /**
         * @brief 设置过时的序列号，用于标识哪些更改可以被丢弃。
         * @param aNumber 新的过时序列号
         */
        static void      SetObsoleteSequenceNumber(long long aNumber) { sObsoleteSequenceNumber = aNumber; }

        /**
         * @brief 获取文件在加载时的签名。
         * @return 文件签名，类型为 `FileSignature`
         */
        FileSignature FileSignatureAtLoad() const { return mFileSignature; }

        /**
         * @brief 重新加载所有与 `TextSource` 关联的视图。
         */
        void ReloadViews();

        /**
         * @brief 比较两个文档之间的差异，并将差异记录为 `TextSourceChange` 列表。
         * @param aOld 旧文档的内容，类型为 `const char*`
         * @param aNew 新文档的内容，类型为 `const char*`
         * @param aChanges 用于存储差异的 `QVector<TextSourceChange>` 引用
         */
        static void DiffDocuments(const char* aOld, const char* aNew, QVector<TextSourceChange>& aChanges);

        /**
         * @brief 查找包含指令的位置，可能用于预处理指令的分析。
         */
        void FindIncludeLocations();

        /**
         * @brief 浏览包含当前文件的文件夹，可能用于在文件系统中定位文件。
         */
        void BrowseContainingFolder();

        /**
         * @brief 将当前文件的路径复制到剪贴板，方便用户进行其他操作。
         */
        void CopyPathToClipboard();

    private:
        /**
         * @brief 保存并存储 `TextSource` 的内容，可能涉及文件写入和状态更新。
         */
        void SaveAndStore();

        /**
         * @brief 将更改应用到 Qt 的文档中，针对特定的编辑器。
         * @param aChange 要应用的更改，类型为 `TextSourceChange`
         * @param aEditor 指向相关 `Editor` 的引用
         */
        void ApplyChangeToQt(const TextSourceChange& aChange, Editor& aEditor);

        /**
         * @brief 将更改应用到 Qt 的文档中，针对特定的文本光标。
         * @param aChange 要应用的更改，类型为 `TextSourceChange`
         * @param aCursor 指向相关 `QTextCursor` 的引用
         */
        void ApplyChangeToQt(const TextSourceChange& aChange, QTextCursor& aCursor);

        /**
         * @brief 获取下一个已应用的更改的序列号。
         * @param aSequenceNumber 当前的序列号
         * @return 下一个已应用的更改的序列号
         */
        int  GetNextAppliedChange(long long aSequenceNumber) const;

        /**
         * @brief 在指定位置插入文本。
         * @param aPosition 插入位置
         * @param aLength 插入文本的长度
         * @param aText 指向插入文本的指针
         */
        void InsertText(size_t aPosition, size_t aLength, const char* aText);

        /**
         * @brief 在指定位置删除文本。
         * @param aPosition 删除位置
         * @param aLength 删除文本的长度
         */
        void DeleteText(size_t aPosition, size_t aLength);

        /**
         * @brief 重新加载编辑器，可能涉及刷新视图或同步更改。
         * @param aEditor 指向相关 `Editor` 的引用
         * @param aInitialLoad 是否为初始加载
         * @param aForceUnmodified 是否强制标记为未修改
         * @param aForceReload 是否强制重新加载
         */
        void ReloadEditor(Editor& aEditor, bool aInitialLoad, bool aForceUnmodified = false, bool aForceReload = false);

        /**
         * @brief 设置 `TextSource` 的修改状态，并根据需要通知 Qt。
         * @param aModified 新的修改状态
         * @param aTellQt 是否通知 Qt 关于修改状态的变化
         */
        void SetModified(bool aModified, bool aTellQt = true)
        {
            if (mModified != aModified)
            {
                SetModifiedUpdate(aModified, aTellQt);
            }
        }

        /**
         * @brief 更新 `TextSource` 的修改状态，并根据需要通知 Qt。
         * @param aModified 新的修改状态
         * @param aTellQt 是否通知 Qt 关于修改状态的变化
         */
        void SetModifiedUpdate(bool aModified, bool aTellQt);

        /**
         * @brief 通知项目关于 `TextSource` 的更改。
         */
        void NotifyProjectOfChange();

        /**
         * @brief 处理文档内容的变化，包括位置、删除和添加的字符数。
         * @param aPos 变化的位置
         * @param aRemovedChars 删除的字符数
         * @param aAddChars 添加的字符数
         */
        void HandleChangeContents(int aPos, int aRemovedChars, int aAddChars);

        /**
         * @brief 将更改同步到源文档，可能涉及更新内部状态或文件。
         */
        void SyncChangesToSource();

        // 成员变量

        int mFlags;                                ///< 标志位，用于标识文件的状态或属性

        ProjectWorkspace* mProjectWorkspacePtr;    ///< 指向项目管理器的指针，用于管理项目工作空间

        bool mLoaded;                              ///< 文件是否已被读取至少一次
        bool mDeleted;                             ///< 文件是否已被删除
        bool mModified;                            ///< 文件是否在保存后被修改

        std::vector<TextSourceChange> mPendingChanges; ///< 待处理的更改列表，存储在解析过程中进行的更改
        std::deque<TextSourceChange> mAppliedChanges;  ///< 已应用的更改队列，用于辅助完成代码（如自动补全）在新的解析完成前需要运行的代码
        int           mAppliedChangesBytes;          ///< 已应用更改所占用的字节数

        FileSignature mFileSignature;                ///< 文件在加载时的签名，用于标识文件的唯一性或版本

        std::vector<TextSourceView*> mViews;         ///< 所有与 `TextSource` 关联的视图列表

        void* mDocumentPtr;                        ///< 指向 Qt 文档的不透明指针，用于同步多个编辑器到同一个文档

        static long long sNextSequenceNumber;        ///< 静态变量，用于生成下一个更改的序列号
        static long long sObsoleteSequenceNumber;    ///< 静态变量，用于标识过时的序列号，超过此序列号的更改可以被丢弃
    };
} // namespace wizard

#endif // TEXTSOURCE_HPP