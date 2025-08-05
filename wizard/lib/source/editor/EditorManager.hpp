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

#include <memory>       // �ṩ����ָ��֧��

#include <QObject>      // Qt ���࣬�ṩ�ź���ۻ���
#include <QTabBar>      // Qt ��ǩ���ؼ�
#include <QVector>      // Qt ��̬��������

#include "FindTextRequest.hpp"     // �����ı�������
#include "ReplaceTextRequest.hpp"  // �滻�ı�������
#include "Vi.hpp"                  // Vi �༭��ģʽ��ض���
#include "ViExport.hpp"            // �����꣬���Ʒ��ſɼ���

// ǰ������ Qt ��
class QKeyEvent;
class QTextBlock;
class QTextCharFormat;
class QToolBar;
class QWidget;
class UtTextDocumentLocation;

namespace wizard
{
    // ǰ�����������
    class EditModeBanner;
    class Editor;
    class EditorDock;
    class Project;

    // �����꣬ȷ�� EditorManager ���ڶ�̬���ӿ��пɼ�
    class VI_EXPORT EditorManager : public QObject
    {
        Q_OBJECT  // ���� Qt ��Ԫ����ϵͳ��֧���ź����

    public:
        // ���� Editor ��Ϊ��Ԫ�࣬���� Editor ���� EditorManager ��˽�кͱ�����Ա
        friend class Editor;

        // ���캯������ʼ�� EditorManager ʵ��
        EditorManager();

        // �����������ͷ� EditorManager ʵ��ռ�õ���Դ
        ~EditorManager() override;

        // ��ȡ��ǰ��ı༭��ʵ��
        Editor* GetCurrentEditor();

        // ���༭���Ŀɼ��Է����仯ʱ����
        void VisibilityChanged(Editor* aEditor, bool aVisible);

        // ���༭�����ر�ʱ����
        void EditorClosed(Editor* aEditor);

        // ���һ���µı༭����ǩ����ǩ��
        void AddTab(Editor* aEditor);

        // ���õ�ǰ��ı༭��
        void SetCurrent(Editor* aEditor);

        // ��ĳ���༭���ı�ǩ��ý���ʱ����
        void TabFocusIn(Editor* aEditor);

        // ��¼��ǰ�༭����λ�ã�����λ�á�����λ�õȣ�
        void RecordCurrentLocation();

        // ����Ŀ�����ر�ʱ���ã�����������������Ŀ��صı༭��
        void ProjectClosing(Project* aProject);

        // ���õ�ǰ�Ĳ�������
        void SetFindRequest(const FindTextRequest& aRequest);

        // ���õ�ǰ���滻����
        void SetReplaceRequest(const ReplaceTextRequest& aRequest);

        // ��ȡ��ǰ�Ĳ������󣨿��޸ģ�
        FindTextRequest& GetActiveFindRequest();

        // ��ȡ��ǰ���滻���󣨿��޸ģ�
        ReplaceTextRequest& GetActiveReplaceRequest();

        // ��ĳ���༭���ı�ǩʧȥ����ʱ����
        void TabFocusOut(Editor* aEditor);

        // ����ر�ָ���ı༭���������漰�û�ȷ�ϻ򱣴����
        void RequestClose(Editor* aEditor);

        // �жϵ�ǰ�Ƿ���ֻ��״̬
        bool IsReadOnly();

        // ��¼�ĵ�λ�õ���ʷ��¼�У�֧�֡����ء��͡�ǰ������������
        void RecordHistoryLocation(const UtTextDocumentLocation& aLoc, bool aForceNewEntry);

        // �л�����һ����ǩҳ�������ˡ����ܣ�
        void TabBack();

        // �л�����һ����ǩҳ����ǰ�������ܣ�
        void TabForward();

        // ��ȡ��ǰ���б༭����ӳ�����Ϊ�༭�����ƻ��ʶ����ֵΪ Editor ָ��
        const std::map<QString, Editor*>& GetEditorMap() const { return mEditorList; }

        // ��̬���������ݸ�ʽ�仯�������ָ���ı�����ַ���ʽ
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
