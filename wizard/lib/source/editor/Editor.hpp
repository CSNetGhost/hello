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

#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <string>

#include <QPlainTextEdit>
#include <QTextEdit>
#include <QTimer>
#include <QWidget>

#include "Signals.hpp"

// 前置声明 Qt 类
class QTextCursor;
class QTextDocument;
class UtTextDocumentRange;
class UtTextRange;

#include "ViExport.hpp"

namespace wizard
{
    // 前向声明相关类
    class Editor;
    class EditorDock;
    class EditorManager;
    class FindTextRequest;
    class Project;
    class ScriptDebugger;
    class TextSource;

    /**
     * @class EditorMargin
     * @brief 编辑器边距类，用于在编辑器旁边显示额外的信息，如行号、折叠标记等。
     */
    class EditorMargin : public QWidget
    {
    public:
        /**
         * @brief 构造函数
         * @param aP 指向父编辑器的指针
         */
        explicit EditorMargin(Editor* aP);

        /**
         * @brief 重写绘制事件，用于自定义绘制边距内容
         * @param event 绘制事件指针
         */
        void paintEvent(QPaintEvent*) override;

        /**
         * @brief 提供边距的建议大小，宽度为30像素，高度为0（可能根据内容动态调整）
         * @return 边距的建议大小
         */
        QSize   sizeHint() const override { return QSize(30, 0); }

        /**
         * @brief 重写鼠标移动事件处理函数
         * @param e 鼠标事件指针
         */
        void    mouseMoveEvent(QMouseEvent* e) override;

        /**
         * @brief 重写鼠标按下事件处理函数
         * @param e 鼠标事件指针
         */
        void    mousePressEvent(QMouseEvent* e) override;

        /**
         * @brief 重写鼠标离开事件处理函数
         */
        void    leaveEvent(QEvent*) override;

        /**
         * @brief 重写上下文菜单事件处理函数
         * @param e 上下文菜单事件指针
         */
        void    contextMenuEvent(QContextMenuEvent*) override;

        /**
         * @brief 指向父编辑器的指针
         */
        Editor* mParent;
    };

    /**
     * @class Editor
     * @brief 编辑器类，继承自 QPlainTextEdit，负责管理文本编辑器的各种功能。
     */
    class VI_EXPORT Editor : public QPlainTextEdit
    {
        friend class EditorMargin; // 声明 EditorMargin 为友元类，允许其访问 Editor 的私有和保护成员

    public:
        /**
         * @brief 构造函数
         * @param aParent 父窗口部件指针
         * @param aProject 所属项目的指针
         * @param aTextSource 文本源的指针
         * @param aManagerPtr 指向 EditorManager 的指针
         */
        Editor(QWidget* aParent, Project* aProject, TextSource* aTextSource, EditorManager* aManagerPtr);

        /**
         * @brief 析构函数
         */
        ~Editor() override;

        /**
         * @brief 初始化编辑器，设置初始状态和 UI 组件
         */
        void Initialize();

        /**
         * @brief 打印当前编辑器中的文件内容
         */
        void PrintFile();

        /**
         * @brief 删除当前光标所在的行
         */
        void DeleteLine();

        /**
         * @brief 重写粘贴操作，可以自定义粘贴行为
         */
        virtual void Paste();

        /**
         * @brief 查找下一个匹配的文本
         */
        void FindNextAction();

        /**
         * @brief 查找上一个匹配的文本
         */
        void FindPreviousAction();

        /**
         * @brief 跳转到指定行
         */
        void GoToLineAction();

        /**
         * @brief 加载编辑器设置，可能包括字体、颜色、快捷键等
         */
        virtual void LoadSettings();

        /**
         * @brief 替换当前找到的文本
         * @return 是否成功替换
         */
        bool ReplaceFoundText();

        /**
         * @brief 在指定的文本范围内替换为新的文本内容
         * @param aRange 替换范围的引用
         * @param aText 新的文本内容
         */
        void Replace(const UtTextRange& aRange, const std::string aText);

        /**
         * @brief 获取当前选中的文本内容
         * @return 选中文本的字符串
         */
        std::string GetSelectedText();

        /**
         * @brief 在文档中查找下一个匹配的文本，支持指定光标位置和范围限制
         * @param aFindRequest 查找请求对象，包含查找条件
         * @param aCursorPtr 指向 QTextCursor 的指针，用于接收查找结果的光标位置
         * @return 是否找到匹配的文本
         */
        bool SearchNext(const FindTextRequest& aFindRequest, QTextCursor* aCursorPtr = nullptr);

        /**
         * @brief 在文档中查找下一个匹配的文本，不支持循环查找）
         * @param aFindRequest 查找请求对象，包含查找条件
         * @param aCursorPtr 指向 QTextCursor 的指针，用于接收查找结果的光标位置
         * @param aLowerBound 查找范围的下界
         * @param aUpperBound 查找范围的上界
         * @return 是否找到匹配的文本
         */
        bool SearchNextNoWrap(const FindTextRequest& aFindRequest,
            QTextCursor* aCursorPtr = nullptr,
            int                    aLowerBound = -1,
            int                    aUpperBound = -1);

        /**
         * @brief 在文档中查找上一个匹配的文本
         * @param aFindRequest 查找请求对象，包含查找条件
         * @return 是否找到匹配的文本
         */
        bool SearchPrevious(const FindTextRequest& aFindRequest);

        /**
         * @brief 获取当前选中文本的范围
         * @param aRange 用于存储选中范围的 UtTextDocumentRange 对象的引用
         * @return 是否成功获取选中范围
         */
        bool GetSelectionRange(UtTextDocumentRange& aRange);

        /**
         * @brief 设置当前选中文本的范围
         * @param aRange 要设置的选中范围
         */
        void SetSelection(const UtTextRange& aRange);

        /**
         * @brief 获取当前光标的位置，包括偏移量、行号和列号
         * @param aOffset 偏移量的引用
         * @param aLine 行号的引用
         * @param aColumn 列号的引用
         */
        void GetCurrentPosition(size_t& aOffset, size_t& aLine, size_t& aColumn);

        /**
         * @brief 获取指定行的文本内容
         * @param aLine 行号
         * @return 指定行的文本内容
         */
        std::string GetLineText(const size_t& aLine);

        /**
         * @brief 判断当前是否有文本被选中
         * @return 是否有选中文本
         */
        bool TextIsSelected();

        /**
         * @brief 根据偏移量获取对应的行号和列号
         * @param aOffset 偏移量
         * @param aLine 行号的引用
         * @param aColumn 列号的引用
         */
        void GetLineColumn(const size_t& aOffset, size_t& aLine, size_t& aColumn);

        /**
         * @brief 根据偏移量获取对应的屏幕坐标点
         * @param aOffset 偏移量
         * @return 屏幕坐标点
         */
        QPoint GetPoint(const size_t aOffset);

        /**
         * @brief 根据行号和列号获取对应的文档偏移量
         * @param aLine 行号
         * @param aColumn 列号
         * @return 文档偏移量
         */
        size_t GetOffset(const size_t aLine, const size_t aColumn);

        /**
         * @brief 获取指定行的高度
         * @param aLine 行号
         * @return 行的高度
         */
        int GetLineHeight(const int aLine);

        /**
         * @brief 获取文本源的指针
         * @return 指向 TextSource 的指针
         */
        TextSource* GetSource() { return mSourcePtr; }

        /**
         * @brief 获取所属项目的指针
         * @return 指向 Project 的指针
         */
        Project* GetProject() { return mProjectPtr; }

        /**
         * @brief 根据行号和列号获取对应的文档偏移量
         * @param aLine 行号
         * @param aColumn 列号
         * @return 文档偏移量
         */
        size_t GetPosition(size_t aLine, size_t aColumn);

        /**
         * @brief 根据屏幕坐标点获取对应的文档偏移量
         * @param aPoint 屏幕坐标点
         * @return 文档偏移量
         */
        size_t GetPosition(const QPoint& aPoint);

        /**
         * @brief 获取指定范围内的文本内容
         * @param aStart 起始偏移量
         * @param aEnd 结束偏移量
         * @return 指定范围内的文本内容
         */
        std::string RangeText(size_t aStart, size_t aEnd);

        /**
         * @brief 请求关闭编辑器的操作，可能涉及保存更改、用户确认等
         */
        void RequestCloseAction();

        /**
         * @brief 开始一个非用户触发的操作，增加非用户操作计数器
         */
        virtual void BeginNonUserAction() { ++mNonUserAction; }

        /**
         * @brief 结束一个非用户触发的操作，减少非用户操作计数器
         */
        virtual void EndNonUserAction() { --mNonUserAction; }

        /**
         * @brief 判断当前是否正在执行非用户触发的操作
         * @return 是否在非用户操作期间
         */
        virtual bool ExecutingNonUserAction() { return 0 != mNonUserAction; }

        /**
         * @brief 重新加载完成后的操作，可以用于更新界面或恢复状态
         */
        virtual void ReloadComplete() {}

        /**
         * @brief 记录当前编辑器的位置（如光标位置、滚动位置等），支持强制创建新的历史记录条目
         * @param aForceNewEntry 是否强制创建新的历史记录条目
         */
        void RecordCurrentLocation(bool aForceNewEntry = true);

        /**
         * @brief 跳转到指定行
         * @param aLine 行号
         */
        void GoToLine(size_t aLine);

        /**
         * @brief 跳转到指定范围
         * @param aRange 要跳转的范围
         */
        void GoToRange(const UtTextRange& aRange);

        /**
         * @brief 复制当前光标所在的行
         */
        void CopyLine();

        /**
         * @brief 剪切当前光标所在的行
         */
        void CutLine();

        /**
         * @brief 将编辑器内容转换为纯文本格式的 QString
         * @return 纯文本内容
         */
        QString ToPlainText();

        /**
         * @brief 静态方法，将 QString 转换为 ASCII 字符串
         * @param aText 要转换的 QString
         * @return ASCII 字符串
         */
        static std::string ToAscii(const QString& aText);

        /**
         * @brief 重写更新样式的方法，可以在派生类中自定义样式更新逻辑
         */
        virtual void UpdateStyle() {}

        /**
         * @brief 静态方法，根据格式变化数组更新指定文本块的字符格式
         * @param aFormatChanges 格式变化数组
         * @param firstBlk 第一个文本块
         * @param aLastBlockNumber 最后一个文本块的编号
         * @param startPos 开始位置
         * @param endPos 结束位置
         */
        static void UpdateStyleFromArray(const QVector<QTextCharFormat>& aFormatChanges,
            const QTextBlock& firstBlk,
            int                             aLastBlockNumber,
            int                             startPos,
            int                             endPos);

        /**
         * @brief 设置全局只读状态，影响用户的编辑权限
         * @param aIsGlobalReadOnly 是否全局只读
         */
        void SetGlobalReadOnly(bool aIsGlobalReadOnly);

        /**
         * @brief 取消当前行的缩进
         */
        void Unindent();

        /**
         * @brief 增加当前行的缩进
         */
        void Indent();

        /**
         * @brief 设置编辑器管理器的指针，用于与编辑器管理器通信
         * @param aManagerPtr 指向 EditorManager 的指针
         */
        void SetManager(EditorManager* aManagerPtr);

        /**
         * @brief 重写获取边距宽度的方法，可以在派生类中自定义边距宽度
         * @return 边距的宽度
         */
        virtual int MarginWidth();

        /**
         * @brief 获取行号区域的宽度
         * @return 行号区域的宽度
         */
        int LineNumberWidth();

        /**
         * @brief 构建标题栏菜单，添加编辑器相关的操作项
         * @param aMenu 要添加菜单项的 QMenu 对象
         */
        void BuildTitleBarMenu(QMenu& aMenu);

        /**
         * @brief 判断当前编辑器是否可以关闭，可能涉及检查未保存的更改等
         * @return 是否允许关闭
         */
        bool AcceptsClose();

        /**
         * @brief 获取编辑器的简短名称，用于显示在标签页或窗口标题中
         * @param aTrim 是否修剪名称中的多余空白字符
         * @return 编辑器的简短名称
         */
        QString GetShortName(bool aTrim = true) const;

        /**
         * @brief 将字符串分割成一个字符串列表，保留空白字符、分离注释块、标识可执行 token 等
         * @param aStr 要分割的字符串
         * @return 分割后的字符串列表
         */
        static QStringList Split(const QString& aStr);

        /**
         * @brief 在由 Split 方法生成的字符串列表中，从指定的起始位置开始查找下一个有效的 token
         * @param aList 字符串列表
         * @param aStart 起始位置
         * @return 下一个有效 token 的索引
         */
        static int FindNextValidToken(const QStringList& aList, int aStart);

        /**
         * @brief 重写鼠标按下事件处理函数，用于实现自定义的鼠标交互逻辑
         * @param aEvent 鼠标事件指针
         */
        void mousePressEvent(QMouseEvent* aEvent) override;

        /**
         * @brief 获取包含此编辑器的 EditorDock 对象（常量版本）
         * @return 指向包含此编辑器的 EditorDock 的常量指针
         */
        const EditorDock* GetDock() const noexcept;

        /**
         * @brief 获取包含此编辑器的 EditorDock 对象（非常量版本）
         * @return 指向包含此编辑器的 EditorDock 的指针
         */
        EditorDock* GetDock() noexcept;

    public slots:
        /**
         * @brief 槽函数，响应调试器运行状态的变化，如开始运行、停止运行等
         * @param aDebuggerPtr 指向 ScriptDebugger 的指针
         * @param aIsRunning 是否正在运行
         */
        void DebugRunStateChange(wizard::ScriptDebugger* aDebuggerPtr, bool aIsRunning);

        /**
         * @brief 槽函数，响应编辑器内容的变化，可能用于更新撤销/重做栈、记录修改历史等
         */
        void TextModified();

    protected:
        /**
         * @brief 重写键盘按下事件处理函数，用于实现自定义的键盘交互逻辑，如快捷键处理、命令执行等
         * @param e 键盘事件指针
         */
        void keyPressEvent(QKeyEvent* e) override;

        /**
         * @brief 获取指向 EditorManager 的指针
         * @return 指向 EditorManager 的指针
         */
        EditorManager* Manager() { return mManagerPtr; }

        /**
         * @brief 判断是否启用代码折叠功能
         * @return 是否启用折叠
         */
        bool FoldingEnabled() { return mFoldingEnabled; }

        /**
         * @brief 重绘边距区域，可能用于更新行号、折叠标记等显示内容
         */
        void RedrawMargin();

        /**
         * @brief 获取延迟更新选择区域的定时器引用，用于优化性能，避免频繁的重绘或更新操作
         * @return 延迟更新选择区域的定时器引用
         */
        QTimer& DeferUpdateTimer() { return mDeferredUpdateSelectionsTimer; }

        /**
         * @brief 获取指向 EditorMargin 的指针，用于与 margin 组件交互
         * @return 指向 EditorMargin 的指针
         */
        EditorMargin* Margin() { return mMarginWidget; }

        /**
         * @brief 重写绘制边距的虚函数，用于自定义绘制边距内容
         * @param event 绘制事件指针
         */
        virtual void PaintMargin(QPaintEvent* event);

        /**
         * @brief 当光标位置发生变化时调用的虚函数，可能用于更新状态栏、记录位置历史等
         */
        virtual void OnCursorPositionChanged();

        /**
         * @brief 获取光标的屏幕坐标点和行高
         * @param aX 屏幕 X 坐标的引用
         * @param aY 屏幕 Y 坐标的引用
         * @param aLineHeight 行高的引用
         */
        virtual void GetCursorPoint(int& aX, int& aY, int& aLineHeight);

        /**
         * @brief 当有更新请求时调用的虚函数，可能用于局部重绘或更新特定区域
         * @param rect 更新区域的矩形
         * @param dy 垂直滚动的距离
         */
        virtual void OnUpdateRequest(const QRect&, int);

        /**
         * @brief 当文档内容发生变化时调用的虚函数，可能用于更新撤销/重做栈、记录修改历史、通知其他组件等
         * @param aFrom 变化的起始位置
         * @param aCharsRemoves 移除的字符数
         * @param aCharsAdded 添加的字符数
         */
        virtual void DocContentsChange(int aFrom, int aCharsRemoves, int aCharsAdded);

        /**
         * @brief 将当前行的选择区域添加到指定的 ExtraSelections 列表中，可能用于高亮当前行或实现特定的选择效果
         * @param aSelections 要添加选择区域的 QList<QTextEdit::ExtraSelection> 引用
         */
        void AddCurrentLineSelection(QList<QTextEdit::ExtraSelection>& aSelections);

        /**
         * @brief 重写事件处理函数，用于拦截和处理特定类型的事件，实现自定义的事件过滤逻辑
         * @param e 事件指针
         * @return 是否已处理该事件
         */
        bool event(QEvent* e) override;

        /**
         * @brief 更新边距的几何布局，可能用于调整 margin 的大小或位置，以适应编辑器内容的变化
         */
        void UpdateMarginGeometry();

        /**
         * @brief 定义常量，符号边距的宽度为16像素
         */
        static const int cSYMBOL_MARGIN_WIDTH = 16;

        /**
         * @brief 重写焦点进入事件处理函数，用于在编辑器获得焦点时执行特定的操作，如更新 UI 状态、记录当前编辑器等
         * @param e 焦点事件指针
         */
        void focusInEvent(QFocusEvent* e) override;

    private:
        /**
         * @brief 重写更新自动完成功能的虚函数，可以在派生类中自定义自动完成逻辑
         */
        virtual void UpdateAutoComplete() {}

        /**
         * @brief 确保当前行在视图中可见，可能涉及滚动视图以确保当前行不被遮挡
         */
        void EnsureCurrentLineVisible();

        /**
         * @brief 更新边距的视口，可能用于调整 margin 的显示内容以适应当前文档视图
         */
        void UpdateMarginViewport();

        /**
         * @brief 当撤销操作可用性发生变化时调用的槽函数
         * @param aAvailable 是否可用
         */
        void OnUndoAvailable(bool aAvailable);

        /**
         * @brief 当重做操作可用性发生变化时调用的槽函数
         * @param aAvailable 是否可用
         */
        void OnRedoAvailable(bool aAvailable);

        /**
         * @brief 当文档修改状态发生变化时调用的槽函数
         * @param aIsModified 是否已修改
         */
        void OnModificationChanged(bool aIsModified);

        /**
         * @brief 当编辑器文本内容发生变化时调用的槽函数，可能用于更新撤销/重做栈、记录修改历史等
         */
        void OnTextChanged();

        /**
         * @brief 根据缩进大小计算空白字符的数量
         * @param aIndentSize 缩进大小
         * @return 空白字符的数量
         */
        int SpaceFromIndent(int aIndentSize) const;

        /**
         * @brief 根据缩进大小和行号计算行空间的空白字符数量
         * @param aIndentSize 缩进大小
         * @param aLine 行号
         * @return 行空间的空白字符数量
         */
        int LineSpaceFromIndent(int aIndentSize, size_t aLine) const;

        /**
         * @brief 判断首尾行是否具有相同的空白偏移量，用于代码折叠等功能的判断
         * @param aFirstLine 起始行号
         * @param aLastLine 结束行号
         * @param aIndentSize 缩进大小
         * @return 是否具有相同的空白偏移量
         */
        bool SameWhitespaceOffset(size_t aFirstLine, size_t aLastLine, int aIndentSize) const;

        /**
         * @brief 重写更新额外选择区域的虚函数，可能用于高亮显示、错误标记等
         */
        virtual void UpdateExtraSelections();

        /**
         * @brief 重写鼠标滚轮事件处理函数，用于实现自定义的滚轮行为，如缩放字体、滚动视图等
         * @param e 鼠标滚轮事件指针
         */
        void wheelEvent(QWheelEvent* e) override;

        /**
         * @brief 重写窗口大小调整事件处理函数，用于在编辑器大小变化时调整内部布局或重新绘制 margin
         * @param e 窗口大小调整事件指针
         */
        void resizeEvent(QResizeEvent* e) override;

        /**
         * @brief 重写窗口显示事件处理函数，用于在编辑器显示时执行特定的操作，如加载设置、更新界面等
         * @param e 窗口显示事件指针
         */
        void showEvent(QShowEvent* e) override;

        /**
         * @brief 重写窗口关闭事件处理函数，用于在编辑器关闭时执行清理操作，如提示保存更改、注销编辑器等
         * @param e 窗口关闭事件指针
         */
        void closeEvent(QCloseEvent* e) override;

        /**
         * @brief 重写 margin 鼠标移动事件处理函数，可以在派生类中自定义 margin 的鼠标交互逻辑
         * @param e 鼠标事件指针
         */
        virtual void marginMouseMoveEvent(QMouseEvent*) {}

        /**
         * @brief 重写 margin 鼠标离开事件处理函数，可以在派生类中自定义 margin 的鼠标交互逻辑
         * @param e 事件指针
         */
        virtual void marginLeaveEvent(QEvent*) {}

        /**
         * @brief 重写 margin 鼠标按下事件处理函数，可以在派生类中自定义 margin 的鼠标交互逻辑
         * @param e 鼠标事件指针
         */
        virtual void marginMousePressEvent(QMouseEvent* e) {}

        /**
         * @brief 重写 margin 上下文菜单事件处理函数，可以在派生类中自定义 margin 的上下文菜单逻辑
         * @param e 上下文菜单事件指针
         */
        virtual void marginContextMenuEvent(QContextMenuEvent*) {}

        // 成员变量

        /**
         * @brief 指向所属项目的指针，用于关联编辑器与项目资源、配置等
         */
        Project* mProjectPtr;

        /**
         * @brief 指向文本源的指针，可能包含文档内容、位置信息等
         */
        TextSource* mSourcePtr;

        /**
         * @brief 指向 EditorManager 的指针，用于与编辑器管理器通信，如注册/注销编辑器、获取当前编辑器等
         */
        EditorManager* mManagerPtr;

        /**
         * @brief 表示是否启用代码折叠功能，可能用于显示或隐藏代码块
         */
        bool           mFoldingEnabled;

        /**
         * @brief 表示是否启用撤销功能
         */
        bool           mUndoEnabled;

        /**
         * @brief 表示是否启用重做功能
         */
        bool           mRedoEnabled;

        /**
         * @brief 表示编辑器是否处于全局只读状态，可能影响用户的编辑权限
         */
        bool           mGlobalReadOnly;

        /**
         * @brief 表示是否发送修改信号，可能用于通知其他组件编辑器内容已更改
         */
        bool           mSendModified;

        /**
         * @brief 表示编辑器是否已经完成初始化，可能用于确保某些操作在初始化后执行
         */
        bool           mInitalized;

        /**
         * @brief 计数器，用于跟踪非用户触发的操作（如程序自动执行的操作），可能用于避免在自动操作期间触发某些用户相关的事件或信号
         */
        int            mNonUserAction;

        /**
         * @brief 指向 EditorMargin 实例的指针，用于管理编辑器旁边的 margin（如行号、折叠标记等）
         */
        EditorMargin* mMarginWidget;

        /**
         * @brief 定时器，用于延迟更新选择区域，可能用于优化性能，避免频繁的重绘或更新操作
         */
        QTimer mDeferredUpdateSelectionsTimer;

        /**
         * @brief 可能是一个自定义的回调管理器，用于注册和触发特定的回调函数，增强编辑器的扩展性和功能性
         */
        UtCallbackHolder mCallbacks;
    };
} // namespace wizard

#endif // EDITOR_HPP