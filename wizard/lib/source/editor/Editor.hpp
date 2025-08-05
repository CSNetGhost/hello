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

// ǰ������ Qt ��
class QTextCursor;
class QTextDocument;
class UtTextDocumentRange;
class UtTextRange;

#include "ViExport.hpp"

namespace wizard
{
    // ǰ�����������
    class Editor;
    class EditorDock;
    class EditorManager;
    class FindTextRequest;
    class Project;
    class ScriptDebugger;
    class TextSource;

    /**
     * @class EditorMargin
     * @brief �༭���߾��࣬�����ڱ༭���Ա���ʾ�������Ϣ�����кš��۵���ǵȡ�
     */
    class EditorMargin : public QWidget
    {
    public:
        /**
         * @brief ���캯��
         * @param aP ָ�򸸱༭����ָ��
         */
        explicit EditorMargin(Editor* aP);

        /**
         * @brief ��д�����¼��������Զ�����Ʊ߾�����
         * @param event �����¼�ָ��
         */
        void paintEvent(QPaintEvent*) override;

        /**
         * @brief �ṩ�߾�Ľ����С�����Ϊ30���أ��߶�Ϊ0�����ܸ������ݶ�̬������
         * @return �߾�Ľ����С
         */
        QSize   sizeHint() const override { return QSize(30, 0); }

        /**
         * @brief ��д����ƶ��¼�������
         * @param e ����¼�ָ��
         */
        void    mouseMoveEvent(QMouseEvent* e) override;

        /**
         * @brief ��д��갴���¼�������
         * @param e ����¼�ָ��
         */
        void    mousePressEvent(QMouseEvent* e) override;

        /**
         * @brief ��д����뿪�¼�������
         */
        void    leaveEvent(QEvent*) override;

        /**
         * @brief ��д�����Ĳ˵��¼�������
         * @param e �����Ĳ˵��¼�ָ��
         */
        void    contextMenuEvent(QContextMenuEvent*) override;

        /**
         * @brief ָ�򸸱༭����ָ��
         */
        Editor* mParent;
    };

    /**
     * @class Editor
     * @brief �༭���࣬�̳��� QPlainTextEdit����������ı��༭���ĸ��ֹ��ܡ�
     */
    class VI_EXPORT Editor : public QPlainTextEdit
    {
        friend class EditorMargin; // ���� EditorMargin Ϊ��Ԫ�࣬��������� Editor ��˽�кͱ�����Ա

    public:
        /**
         * @brief ���캯��
         * @param aParent �����ڲ���ָ��
         * @param aProject ������Ŀ��ָ��
         * @param aTextSource �ı�Դ��ָ��
         * @param aManagerPtr ָ�� EditorManager ��ָ��
         */
        Editor(QWidget* aParent, Project* aProject, TextSource* aTextSource, EditorManager* aManagerPtr);

        /**
         * @brief ��������
         */
        ~Editor() override;

        /**
         * @brief ��ʼ���༭�������ó�ʼ״̬�� UI ���
         */
        void Initialize();

        /**
         * @brief ��ӡ��ǰ�༭���е��ļ�����
         */
        void PrintFile();

        /**
         * @brief ɾ����ǰ������ڵ���
         */
        void DeleteLine();

        /**
         * @brief ��дճ�������������Զ���ճ����Ϊ
         */
        virtual void Paste();

        /**
         * @brief ������һ��ƥ����ı�
         */
        void FindNextAction();

        /**
         * @brief ������һ��ƥ����ı�
         */
        void FindPreviousAction();

        /**
         * @brief ��ת��ָ����
         */
        void GoToLineAction();

        /**
         * @brief ���ر༭�����ã����ܰ������塢��ɫ����ݼ���
         */
        virtual void LoadSettings();

        /**
         * @brief �滻��ǰ�ҵ����ı�
         * @return �Ƿ�ɹ��滻
         */
        bool ReplaceFoundText();

        /**
         * @brief ��ָ�����ı���Χ���滻Ϊ�µ��ı�����
         * @param aRange �滻��Χ������
         * @param aText �µ��ı�����
         */
        void Replace(const UtTextRange& aRange, const std::string aText);

        /**
         * @brief ��ȡ��ǰѡ�е��ı�����
         * @return ѡ���ı����ַ���
         */
        std::string GetSelectedText();

        /**
         * @brief ���ĵ��в�����һ��ƥ����ı���֧��ָ�����λ�úͷ�Χ����
         * @param aFindRequest ����������󣬰�����������
         * @param aCursorPtr ָ�� QTextCursor ��ָ�룬���ڽ��ղ��ҽ���Ĺ��λ��
         * @return �Ƿ��ҵ�ƥ����ı�
         */
        bool SearchNext(const FindTextRequest& aFindRequest, QTextCursor* aCursorPtr = nullptr);

        /**
         * @brief ���ĵ��в�����һ��ƥ����ı�����֧��ѭ�����ң�
         * @param aFindRequest ����������󣬰�����������
         * @param aCursorPtr ָ�� QTextCursor ��ָ�룬���ڽ��ղ��ҽ���Ĺ��λ��
         * @param aLowerBound ���ҷ�Χ���½�
         * @param aUpperBound ���ҷ�Χ���Ͻ�
         * @return �Ƿ��ҵ�ƥ����ı�
         */
        bool SearchNextNoWrap(const FindTextRequest& aFindRequest,
            QTextCursor* aCursorPtr = nullptr,
            int                    aLowerBound = -1,
            int                    aUpperBound = -1);

        /**
         * @brief ���ĵ��в�����һ��ƥ����ı�
         * @param aFindRequest ����������󣬰�����������
         * @return �Ƿ��ҵ�ƥ����ı�
         */
        bool SearchPrevious(const FindTextRequest& aFindRequest);

        /**
         * @brief ��ȡ��ǰѡ���ı��ķ�Χ
         * @param aRange ���ڴ洢ѡ�з�Χ�� UtTextDocumentRange ���������
         * @return �Ƿ�ɹ���ȡѡ�з�Χ
         */
        bool GetSelectionRange(UtTextDocumentRange& aRange);

        /**
         * @brief ���õ�ǰѡ���ı��ķ�Χ
         * @param aRange Ҫ���õ�ѡ�з�Χ
         */
        void SetSelection(const UtTextRange& aRange);

        /**
         * @brief ��ȡ��ǰ����λ�ã�����ƫ�������кź��к�
         * @param aOffset ƫ����������
         * @param aLine �кŵ�����
         * @param aColumn �кŵ�����
         */
        void GetCurrentPosition(size_t& aOffset, size_t& aLine, size_t& aColumn);

        /**
         * @brief ��ȡָ���е��ı�����
         * @param aLine �к�
         * @return ָ���е��ı�����
         */
        std::string GetLineText(const size_t& aLine);

        /**
         * @brief �жϵ�ǰ�Ƿ����ı���ѡ��
         * @return �Ƿ���ѡ���ı�
         */
        bool TextIsSelected();

        /**
         * @brief ����ƫ������ȡ��Ӧ���кź��к�
         * @param aOffset ƫ����
         * @param aLine �кŵ�����
         * @param aColumn �кŵ�����
         */
        void GetLineColumn(const size_t& aOffset, size_t& aLine, size_t& aColumn);

        /**
         * @brief ����ƫ������ȡ��Ӧ����Ļ�����
         * @param aOffset ƫ����
         * @return ��Ļ�����
         */
        QPoint GetPoint(const size_t aOffset);

        /**
         * @brief �����кź��кŻ�ȡ��Ӧ���ĵ�ƫ����
         * @param aLine �к�
         * @param aColumn �к�
         * @return �ĵ�ƫ����
         */
        size_t GetOffset(const size_t aLine, const size_t aColumn);

        /**
         * @brief ��ȡָ���еĸ߶�
         * @param aLine �к�
         * @return �еĸ߶�
         */
        int GetLineHeight(const int aLine);

        /**
         * @brief ��ȡ�ı�Դ��ָ��
         * @return ָ�� TextSource ��ָ��
         */
        TextSource* GetSource() { return mSourcePtr; }

        /**
         * @brief ��ȡ������Ŀ��ָ��
         * @return ָ�� Project ��ָ��
         */
        Project* GetProject() { return mProjectPtr; }

        /**
         * @brief �����кź��кŻ�ȡ��Ӧ���ĵ�ƫ����
         * @param aLine �к�
         * @param aColumn �к�
         * @return �ĵ�ƫ����
         */
        size_t GetPosition(size_t aLine, size_t aColumn);

        /**
         * @brief ������Ļ������ȡ��Ӧ���ĵ�ƫ����
         * @param aPoint ��Ļ�����
         * @return �ĵ�ƫ����
         */
        size_t GetPosition(const QPoint& aPoint);

        /**
         * @brief ��ȡָ����Χ�ڵ��ı�����
         * @param aStart ��ʼƫ����
         * @param aEnd ����ƫ����
         * @return ָ����Χ�ڵ��ı�����
         */
        std::string RangeText(size_t aStart, size_t aEnd);

        /**
         * @brief ����رձ༭���Ĳ����������漰������ġ��û�ȷ�ϵ�
         */
        void RequestCloseAction();

        /**
         * @brief ��ʼһ�����û������Ĳ��������ӷ��û�����������
         */
        virtual void BeginNonUserAction() { ++mNonUserAction; }

        /**
         * @brief ����һ�����û������Ĳ��������ٷ��û�����������
         */
        virtual void EndNonUserAction() { --mNonUserAction; }

        /**
         * @brief �жϵ�ǰ�Ƿ�����ִ�з��û������Ĳ���
         * @return �Ƿ��ڷ��û������ڼ�
         */
        virtual bool ExecutingNonUserAction() { return 0 != mNonUserAction; }

        /**
         * @brief ���¼�����ɺ�Ĳ������������ڸ��½����ָ�״̬
         */
        virtual void ReloadComplete() {}

        /**
         * @brief ��¼��ǰ�༭����λ�ã�����λ�á�����λ�õȣ���֧��ǿ�ƴ����µ���ʷ��¼��Ŀ
         * @param aForceNewEntry �Ƿ�ǿ�ƴ����µ���ʷ��¼��Ŀ
         */
        void RecordCurrentLocation(bool aForceNewEntry = true);

        /**
         * @brief ��ת��ָ����
         * @param aLine �к�
         */
        void GoToLine(size_t aLine);

        /**
         * @brief ��ת��ָ����Χ
         * @param aRange Ҫ��ת�ķ�Χ
         */
        void GoToRange(const UtTextRange& aRange);

        /**
         * @brief ���Ƶ�ǰ������ڵ���
         */
        void CopyLine();

        /**
         * @brief ���е�ǰ������ڵ���
         */
        void CutLine();

        /**
         * @brief ���༭������ת��Ϊ���ı���ʽ�� QString
         * @return ���ı�����
         */
        QString ToPlainText();

        /**
         * @brief ��̬�������� QString ת��Ϊ ASCII �ַ���
         * @param aText Ҫת���� QString
         * @return ASCII �ַ���
         */
        static std::string ToAscii(const QString& aText);

        /**
         * @brief ��д������ʽ�ķ��������������������Զ�����ʽ�����߼�
         */
        virtual void UpdateStyle() {}

        /**
         * @brief ��̬���������ݸ�ʽ�仯�������ָ���ı�����ַ���ʽ
         * @param aFormatChanges ��ʽ�仯����
         * @param firstBlk ��һ���ı���
         * @param aLastBlockNumber ���һ���ı���ı��
         * @param startPos ��ʼλ��
         * @param endPos ����λ��
         */
        static void UpdateStyleFromArray(const QVector<QTextCharFormat>& aFormatChanges,
            const QTextBlock& firstBlk,
            int                             aLastBlockNumber,
            int                             startPos,
            int                             endPos);

        /**
         * @brief ����ȫ��ֻ��״̬��Ӱ���û��ı༭Ȩ��
         * @param aIsGlobalReadOnly �Ƿ�ȫ��ֻ��
         */
        void SetGlobalReadOnly(bool aIsGlobalReadOnly);

        /**
         * @brief ȡ����ǰ�е�����
         */
        void Unindent();

        /**
         * @brief ���ӵ�ǰ�е�����
         */
        void Indent();

        /**
         * @brief ���ñ༭����������ָ�룬������༭��������ͨ��
         * @param aManagerPtr ָ�� EditorManager ��ָ��
         */
        void SetManager(EditorManager* aManagerPtr);

        /**
         * @brief ��д��ȡ�߾��ȵķ��������������������Զ���߾���
         * @return �߾�Ŀ��
         */
        virtual int MarginWidth();

        /**
         * @brief ��ȡ�к�����Ŀ��
         * @return �к�����Ŀ��
         */
        int LineNumberWidth();

        /**
         * @brief �����������˵�����ӱ༭����صĲ�����
         * @param aMenu Ҫ��Ӳ˵���� QMenu ����
         */
        void BuildTitleBarMenu(QMenu& aMenu);

        /**
         * @brief �жϵ�ǰ�༭���Ƿ���Թرգ������漰���δ����ĸ��ĵ�
         * @return �Ƿ�����ر�
         */
        bool AcceptsClose();

        /**
         * @brief ��ȡ�༭���ļ�����ƣ�������ʾ�ڱ�ǩҳ�򴰿ڱ�����
         * @param aTrim �Ƿ��޼������еĶ���հ��ַ�
         * @return �༭���ļ������
         */
        QString GetShortName(bool aTrim = true) const;

        /**
         * @brief ���ַ����ָ��һ���ַ����б������հ��ַ�������ע�Ϳ顢��ʶ��ִ�� token ��
         * @param aStr Ҫ�ָ���ַ���
         * @return �ָ����ַ����б�
         */
        static QStringList Split(const QString& aStr);

        /**
         * @brief ���� Split �������ɵ��ַ����б��У���ָ������ʼλ�ÿ�ʼ������һ����Ч�� token
         * @param aList �ַ����б�
         * @param aStart ��ʼλ��
         * @return ��һ����Ч token ������
         */
        static int FindNextValidToken(const QStringList& aList, int aStart);

        /**
         * @brief ��д��갴���¼�������������ʵ���Զ������꽻���߼�
         * @param aEvent ����¼�ָ��
         */
        void mousePressEvent(QMouseEvent* aEvent) override;

        /**
         * @brief ��ȡ�����˱༭���� EditorDock ���󣨳����汾��
         * @return ָ������˱༭���� EditorDock �ĳ���ָ��
         */
        const EditorDock* GetDock() const noexcept;

        /**
         * @brief ��ȡ�����˱༭���� EditorDock ���󣨷ǳ����汾��
         * @return ָ������˱༭���� EditorDock ��ָ��
         */
        EditorDock* GetDock() noexcept;

    public slots:
        /**
         * @brief �ۺ�������Ӧ����������״̬�ı仯���翪ʼ���С�ֹͣ���е�
         * @param aDebuggerPtr ָ�� ScriptDebugger ��ָ��
         * @param aIsRunning �Ƿ���������
         */
        void DebugRunStateChange(wizard::ScriptDebugger* aDebuggerPtr, bool aIsRunning);

        /**
         * @brief �ۺ�������Ӧ�༭�����ݵı仯���������ڸ��³���/����ջ����¼�޸���ʷ��
         */
        void TextModified();

    protected:
        /**
         * @brief ��д���̰����¼�������������ʵ���Զ���ļ��̽����߼������ݼ���������ִ�е�
         * @param e �����¼�ָ��
         */
        void keyPressEvent(QKeyEvent* e) override;

        /**
         * @brief ��ȡָ�� EditorManager ��ָ��
         * @return ָ�� EditorManager ��ָ��
         */
        EditorManager* Manager() { return mManagerPtr; }

        /**
         * @brief �ж��Ƿ����ô����۵�����
         * @return �Ƿ������۵�
         */
        bool FoldingEnabled() { return mFoldingEnabled; }

        /**
         * @brief �ػ�߾����򣬿������ڸ����кš��۵���ǵ���ʾ����
         */
        void RedrawMargin();

        /**
         * @brief ��ȡ�ӳٸ���ѡ������Ķ�ʱ�����ã������Ż����ܣ�����Ƶ�����ػ����²���
         * @return �ӳٸ���ѡ������Ķ�ʱ������
         */
        QTimer& DeferUpdateTimer() { return mDeferredUpdateSelectionsTimer; }

        /**
         * @brief ��ȡָ�� EditorMargin ��ָ�룬������ margin �������
         * @return ָ�� EditorMargin ��ָ��
         */
        EditorMargin* Margin() { return mMarginWidget; }

        /**
         * @brief ��д���Ʊ߾���麯���������Զ�����Ʊ߾�����
         * @param event �����¼�ָ��
         */
        virtual void PaintMargin(QPaintEvent* event);

        /**
         * @brief �����λ�÷����仯ʱ���õ��麯�����������ڸ���״̬������¼λ����ʷ��
         */
        virtual void OnCursorPositionChanged();

        /**
         * @brief ��ȡ������Ļ�������и�
         * @param aX ��Ļ X ���������
         * @param aY ��Ļ Y ���������
         * @param aLineHeight �иߵ�����
         */
        virtual void GetCursorPoint(int& aX, int& aY, int& aLineHeight);

        /**
         * @brief ���и�������ʱ���õ��麯�����������ھֲ��ػ������ض�����
         * @param rect ��������ľ���
         * @param dy ��ֱ�����ľ���
         */
        virtual void OnUpdateRequest(const QRect&, int);

        /**
         * @brief ���ĵ����ݷ����仯ʱ���õ��麯�����������ڸ��³���/����ջ����¼�޸���ʷ��֪ͨ���������
         * @param aFrom �仯����ʼλ��
         * @param aCharsRemoves �Ƴ����ַ���
         * @param aCharsAdded ��ӵ��ַ���
         */
        virtual void DocContentsChange(int aFrom, int aCharsRemoves, int aCharsAdded);

        /**
         * @brief ����ǰ�е�ѡ��������ӵ�ָ���� ExtraSelections �б��У��������ڸ�����ǰ�л�ʵ���ض���ѡ��Ч��
         * @param aSelections Ҫ���ѡ������� QList<QTextEdit::ExtraSelection> ����
         */
        void AddCurrentLineSelection(QList<QTextEdit::ExtraSelection>& aSelections);

        /**
         * @brief ��д�¼����������������غʹ����ض����͵��¼���ʵ���Զ�����¼������߼�
         * @param e �¼�ָ��
         * @return �Ƿ��Ѵ�����¼�
         */
        bool event(QEvent* e) override;

        /**
         * @brief ���±߾�ļ��β��֣��������ڵ��� margin �Ĵ�С��λ�ã�����Ӧ�༭�����ݵı仯
         */
        void UpdateMarginGeometry();

        /**
         * @brief ���峣�������ű߾�Ŀ��Ϊ16����
         */
        static const int cSYMBOL_MARGIN_WIDTH = 16;

        /**
         * @brief ��д��������¼��������������ڱ༭����ý���ʱִ���ض��Ĳ���������� UI ״̬����¼��ǰ�༭����
         * @param e �����¼�ָ��
         */
        void focusInEvent(QFocusEvent* e) override;

    private:
        /**
         * @brief ��д�����Զ���ɹ��ܵ��麯�������������������Զ����Զ�����߼�
         */
        virtual void UpdateAutoComplete() {}

        /**
         * @brief ȷ����ǰ������ͼ�пɼ��������漰������ͼ��ȷ����ǰ�в����ڵ�
         */
        void EnsureCurrentLineVisible();

        /**
         * @brief ���±߾���ӿڣ��������ڵ��� margin ����ʾ��������Ӧ��ǰ�ĵ���ͼ
         */
        void UpdateMarginViewport();

        /**
         * @brief ���������������Է����仯ʱ���õĲۺ���
         * @param aAvailable �Ƿ����
         */
        void OnUndoAvailable(bool aAvailable);

        /**
         * @brief ���������������Է����仯ʱ���õĲۺ���
         * @param aAvailable �Ƿ����
         */
        void OnRedoAvailable(bool aAvailable);

        /**
         * @brief ���ĵ��޸�״̬�����仯ʱ���õĲۺ���
         * @param aIsModified �Ƿ����޸�
         */
        void OnModificationChanged(bool aIsModified);

        /**
         * @brief ���༭���ı����ݷ����仯ʱ���õĲۺ������������ڸ��³���/����ջ����¼�޸���ʷ��
         */
        void OnTextChanged();

        /**
         * @brief ����������С����հ��ַ�������
         * @param aIndentSize ������С
         * @return �հ��ַ�������
         */
        int SpaceFromIndent(int aIndentSize) const;

        /**
         * @brief ����������С���кż����пռ�Ŀհ��ַ�����
         * @param aIndentSize ������С
         * @param aLine �к�
         * @return �пռ�Ŀհ��ַ�����
         */
        int LineSpaceFromIndent(int aIndentSize, size_t aLine) const;

        /**
         * @brief �ж���β���Ƿ������ͬ�Ŀհ�ƫ���������ڴ����۵��ȹ��ܵ��ж�
         * @param aFirstLine ��ʼ�к�
         * @param aLastLine �����к�
         * @param aIndentSize ������С
         * @return �Ƿ������ͬ�Ŀհ�ƫ����
         */
        bool SameWhitespaceOffset(size_t aFirstLine, size_t aLastLine, int aIndentSize) const;

        /**
         * @brief ��д���¶���ѡ��������麯�����������ڸ�����ʾ�������ǵ�
         */
        virtual void UpdateExtraSelections();

        /**
         * @brief ��д�������¼�������������ʵ���Զ���Ĺ�����Ϊ�����������塢������ͼ��
         * @param e �������¼�ָ��
         */
        void wheelEvent(QWheelEvent* e) override;

        /**
         * @brief ��д���ڴ�С�����¼��������������ڱ༭����С�仯ʱ�����ڲ����ֻ����»��� margin
         * @param e ���ڴ�С�����¼�ָ��
         */
        void resizeEvent(QResizeEvent* e) override;

        /**
         * @brief ��д������ʾ�¼��������������ڱ༭����ʾʱִ���ض��Ĳ�������������á����½����
         * @param e ������ʾ�¼�ָ��
         */
        void showEvent(QShowEvent* e) override;

        /**
         * @brief ��д���ڹر��¼��������������ڱ༭���ر�ʱִ���������������ʾ������ġ�ע���༭����
         * @param e ���ڹر��¼�ָ��
         */
        void closeEvent(QCloseEvent* e) override;

        /**
         * @brief ��д margin ����ƶ��¼������������������������Զ��� margin ����꽻���߼�
         * @param e ����¼�ָ��
         */
        virtual void marginMouseMoveEvent(QMouseEvent*) {}

        /**
         * @brief ��д margin ����뿪�¼������������������������Զ��� margin ����꽻���߼�
         * @param e �¼�ָ��
         */
        virtual void marginLeaveEvent(QEvent*) {}

        /**
         * @brief ��д margin ��갴���¼������������������������Զ��� margin ����꽻���߼�
         * @param e ����¼�ָ��
         */
        virtual void marginMousePressEvent(QMouseEvent* e) {}

        /**
         * @brief ��д margin �����Ĳ˵��¼������������������������Զ��� margin �������Ĳ˵��߼�
         * @param e �����Ĳ˵��¼�ָ��
         */
        virtual void marginContextMenuEvent(QContextMenuEvent*) {}

        // ��Ա����

        /**
         * @brief ָ��������Ŀ��ָ�룬���ڹ����༭������Ŀ��Դ�����õ�
         */
        Project* mProjectPtr;

        /**
         * @brief ָ���ı�Դ��ָ�룬���ܰ����ĵ����ݡ�λ����Ϣ��
         */
        TextSource* mSourcePtr;

        /**
         * @brief ָ�� EditorManager ��ָ�룬������༭��������ͨ�ţ���ע��/ע���༭������ȡ��ǰ�༭����
         */
        EditorManager* mManagerPtr;

        /**
         * @brief ��ʾ�Ƿ����ô����۵����ܣ�����������ʾ�����ش����
         */
        bool           mFoldingEnabled;

        /**
         * @brief ��ʾ�Ƿ����ó�������
         */
        bool           mUndoEnabled;

        /**
         * @brief ��ʾ�Ƿ�������������
         */
        bool           mRedoEnabled;

        /**
         * @brief ��ʾ�༭���Ƿ���ȫ��ֻ��״̬������Ӱ���û��ı༭Ȩ��
         */
        bool           mGlobalReadOnly;

        /**
         * @brief ��ʾ�Ƿ����޸��źţ���������֪ͨ��������༭�������Ѹ���
         */
        bool           mSendModified;

        /**
         * @brief ��ʾ�༭���Ƿ��Ѿ���ɳ�ʼ������������ȷ��ĳЩ�����ڳ�ʼ����ִ��
         */
        bool           mInitalized;

        /**
         * @brief �����������ڸ��ٷ��û������Ĳ�����������Զ�ִ�еĲ��������������ڱ������Զ������ڼ䴥��ĳЩ�û���ص��¼����ź�
         */
        int            mNonUserAction;

        /**
         * @brief ָ�� EditorMargin ʵ����ָ�룬���ڹ���༭���Աߵ� margin�����кš��۵���ǵȣ�
         */
        EditorMargin* mMarginWidget;

        /**
         * @brief ��ʱ���������ӳٸ���ѡ�����򣬿��������Ż����ܣ�����Ƶ�����ػ����²���
         */
        QTimer mDeferredUpdateSelectionsTimer;

        /**
         * @brief ������һ���Զ���Ļص�������������ע��ʹ����ض��Ļص���������ǿ�༭������չ�Ժ͹�����
         */
        UtCallbackHolder mCallbacks;
    };
} // namespace wizard

#endif // EDITOR_HPP