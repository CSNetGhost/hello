// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2018 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef EDITORMANAGER_HPP
#define EDITORMANAGER_HPP

#include <memory>       // 提供智能指针支持

#include <QObject>      // Qt 基类，提供信号与槽机制
#include <QTabBar>      // Qt 标签栏控件
#include <QVector>      // Qt 动态数组容器

#include "FindTextRequest.hpp"     // 查找文本请求类
#include "ReplaceTextRequest.hpp"  // 替换文本请求类
#include "Vi.hpp"                  // Vi 编辑器模式相关定义
#include "ViExport.hpp"            // 导出宏，控制符号可见性

// 前置声明 Qt 类
class QKeyEvent;
class QTextBlock;
class QTextCharFormat;
class QToolBar;
class QWidget;
class UtTextDocumentLocation;

namespace wizard
{
    // 前置声明相关类
    class EditModeBanner;
    class Editor;
    class EditorDock;
    class Project;

    // 导出宏，确保 EditorManager 类在动态链接库中可见
    class VI_EXPORT EditorManager : public QObject
    {
        Q_OBJECT  // 启用 Qt 的元对象系统，支持信号与槽

    public:
        // 声明 Editor 类为友元类，允许 Editor 访问 EditorManager 的私有和保护成员
        friend class Editor;

        // 构造函数，初始化 EditorManager 实例
        EditorManager();

        // 析构函数，释放 EditorManager 实例占用的资源
        ~EditorManager() override;

        // 获取当前活动的编辑器实例
        Editor* GetCurrentEditor();

        // 当编辑器的可见性发生变化时调用
        void VisibilityChanged(Editor* aEditor, bool aVisible);

        // 当编辑器被关闭时调用
        void EditorClosed(Editor* aEditor);

        // 添加一个新的编辑器标签到标签栏
        void AddTab(Editor* aEditor);

        // 设置当前活动的编辑器
        void SetCurrent(Editor* aEditor);

        // 当某个编辑器的标签获得焦点时调用
        void TabFocusIn(Editor* aEditor);

        // 记录当前编辑器的位置（如光标位置、滚动位置等）
        void RecordCurrentLocation();

        // 当项目即将关闭时调用，可能用于清理与项目相关的编辑器
        void ProjectClosing(Project* aProject);

        // 设置当前的查找请求
        void SetFindRequest(const FindTextRequest& aRequest);

        // 设置当前的替换请求
        void SetReplaceRequest(const ReplaceTextRequest& aRequest);

        // 获取当前的查找请求（可修改）
        FindTextRequest& GetActiveFindRequest();

        // 获取当前的替换请求（可修改）
        ReplaceTextRequest& GetActiveReplaceRequest();

        // 当某个编辑器的标签失去焦点时调用
        void TabFocusOut(Editor* aEditor);

        // 请求关闭指定的编辑器，可能涉及用户确认或保存更改
        void RequestClose(Editor* aEditor);

        // 判断当前是否处于只读状态
        bool IsReadOnly();

        // 记录文档位置到历史记录中，支持“返回”和“前进”导航功能
        void RecordHistoryLocation(const UtTextDocumentLocation& aLoc, bool aForceNewEntry);

        // 切换到上一个标签页（“后退”功能）
        void TabBack();

        // 切换到下一个标签页（“前进”功能）
        void TabForward();

        // 获取当前所有编辑器的映射表，键为编辑器名称或标识符，值为 Editor 指针
        const std::map<QString, Editor*>& GetEditorMap() const { return mEditorList; }

        // 静态方法，根据格式变化数组更新指定文本块的字符格式
   static void UpdateStyleFromArray(const std::vector<QTextCharFormat>& aFormatChanges,
                                    const QTextBlock&                   aFirstBlk,
                                    int                                 aLastBlockNumber,
                                    size_t                              aStartPos,
                                    size_t                              aEndPos);

   void        CloseAll();
   void        CloseAllButStartup();
   void        CloseAllButIncluded();
   void        CloseAllLeft(Editor* aEditor);
   void        CloseAllRight(Editor* aEditor);
   void        CloseInactive();
   void        CloseAllBut(Editor* aEditorPtr);
   QStringList GetOpenEditorNames() const;

   bool AcceptsClose(TextSource* aSourcePtr);
   void CloseEditor(TextSource* aSourcePtr);

   //! Start capturing many changes to consider as one change
   void BeginUndoCapture() noexcept;
   //! Denotes whether the EditorManager is capturing many changes to consider as one change
   //! @return the status of the undo capture
   bool IsCapturingUndo() const noexcept;
   //! Stop capturing many changes to consider as one change
   void EndUndoCapture() noexcept;
   void ModificationOccured(Editor* aEditorPtr);
   void Undo();
   void Redo();
   void ClearUndoStacks();
   bool eventFilter(QObject* aObjPtr, QEvent* aEventPtr) override;
   void AdjustFontSize(int aValue);

protected:
   void RegisterEditor(Editor* aEditorPtr);
   void DeregisterEditor(Editor* aEditorPtr);

private:
   void ActiveProjectChanged();

   void ClearEditors();
   void EditModeSwitch(Vi::EditMode aEditMode);

   QTabBar*    FindActiveTabBar();
   QTabBar*    FindTabBarWithEditor(Editor* aEditor, int& aIndex);
   EditorDock* GetDockFromEditor(Editor* aEditor);

   bool SetActiveEditorTab(QVariant aEditorPtr);

   bool CheckEditorsInChangeList(const std::vector<Editor*>& aChangeList) const;

   FindTextRequest    mFindRequest;
   ReplaceTextRequest mReplaceRequest;
   Editor*            mCurrent;

   std::map<QString, Editor*>        mEditorList;
   bool                              mIsReadOnly;
   EditModeBanner*                   mEditModeBanner;
   bool                              mUndoAction;
   bool                              mUndoCapture;
   Editor*                           mPreviousUndoEditor;
   std::vector<std::vector<Editor*>> mUndoStack;
   std::vector<std::vector<Editor*>> mRedoStack;
};
} // namespace wizard

#endif // EDITORMANAGER_HPP
