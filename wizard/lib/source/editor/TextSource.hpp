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

#include <algorithm>     // ������׼�㷨�⣬�� std::find, std::sort ��
#include <deque>         // ����˫�˶������������ڴ洢��Ӧ�õĸ���
#include <string>        // �����ַ����࣬���ڴ����ı�����
#include <vector>        // ������̬�������������ڴ洢���Ԫ��

#include <QVector>       // ���� Qt �Ķ�̬���������������� Qt �������

// ������Ŀ�Զ����ͷ�ļ�
#include "FileSignature.hpp"      // �����ļ�ǩ����ص����ṹ��
#include "TextSourceChange.hpp"   // �����ı�Դ������ص����ṹ��
#include "UtCallback.hpp"         // �����ص�������صĶ���
#include "UtPath.hpp"             // ����·��������صĶ���
#include "UtTextDocument.hpp"     // ���������ı��ĵ���Ķ���
#include "ViExport.hpp"           // ���������꣬���ڿ��Ʒ��ŵĿɼ���

// ǰ������ Qt �࣬���ٱ�������
class QDataStream;      // Qt ���������࣬�������л��ͷ����л�����
class QWidget;          // Qt �Ĵ��ڲ�������
class UtTextRange;      // �Զ�����ı���Χ�࣬�������ڱ�ʾ�ı���ѡ��Χ
class WsfParseNode;     // ������������ڵ���ص���
class QTextCursor;      // Qt ���ı�����࣬�������ı��ж�λ�Ͳ���
class QTextDocument;    // Qt ���ı��ĵ��࣬���ڴ������ʾ�ı�

namespace wizard
{
    class Editor;               // ǰ������ Editor �࣬������ TextSource �б�����
    class Project;              // ǰ������ Project �࣬��ʾ��Ŀ
    class ProjectWorkspace;     // ǰ������ ProjectWorkspace �࣬��ʾ��Ŀ�����ռ�
    class TextSourceView;       // ǰ������ TextSourceView �࣬��ʾ�ı�Դ����ͼ

    /**
     * @class TextSource
     * @brief ��ʾ��Ŀ���õ��ļ������ļ������Ѽ��ص��ڴ��У�Ҳ����δ���ء�
     *
     * `TextSource` ��̳��� `UtTextDocument`�����ڹ�����Ŀ�е��ı��ļ���
     * ���ڶ��߳̽����Ĵ��ڣ��������ı��༭����ά��һ���������ı�������
     * ���ĵ������ĸ��Ļᱻ�Ŷӣ������ڽ�����ֹͣ��Ӧ�á�
     *
     * ע�⣺��Ȼ `TextSource` �̳��� `UtTextDocument`����ֱ��ʹ�� `UtTextDocument` ���޸�����mutators���������顣
     */
    class VI_EXPORT TextSource : public UtTextDocument
    {
    public:
        /**
         * @brief �������� `TextSource` ���ַ���ɾ��ʱ���õĻص���
         *
         * �˻ص�����֪ͨ����������� `TextSource` �е��ַ���ɾ��ʱ���¼���
         * �ص�����ǩ����`void(TextSource*, size_t, int)`
         * - ��һ���������������ĵ� `TextSource` ����ָ��
         * - �ڶ����������ı����ĵ�λ��
         * - ���������������ı���ɾ�����ַ�����
         */
        static UtCallbackListN<void(TextSource*, size_t, int)> TextSourceCharDeleted;

        /**
         * @enum Flags
         * @brief ���� `TextSource` �ı�־λ�����ڱ�ʶ�ļ���״̬�����ԡ�
         */
        enum Flags
        {
            cINCLUDED = 1,       ///< �ļ��ѱ��������������뱣�����ڴ���
            cCRITICAL = 2,       ///< �ļ���ĳЩ�����ǹؼ��ģ����뱣�����ڴ���

            cCRITICAL_MASK = cCRITICAL | cINCLUDED ///< �ؼ��Ͱ���������
        };

        // ������Ԫ�࣬������Щ����� `TextSource` ��˽�кͱ�����Ա
        friend class wizard::Project;
        friend class wizard::ProjectWorkspace;

        /**
         * @brief ���캯��
         * @param aProjectManagerPtr ָ����Ŀ��������ָ�룬���ڹ�����Ŀ�����ռ�
         * @param aSourcePath �ļ���·��������Ϊ `UtPath`
         */
        TextSource(ProjectWorkspace* aProjectManagerPtr, const UtPath& aSourcePath);

        /**
         * @brief ��������
         */
        virtual ~TextSource();

        /**
         * @brief �� `TextSource` ��ӵ������ռ䡣
         *
         * �˺������ڽ���ǰ�� `TextSource` ����ע�ᵽ��Ŀ�����ռ��У������漰��ʼ�������������
         */
        void AddedToWorkspace();

        /**
         * @brief ���ļ����ص��ڴ��У������δ���أ���
         * @return �Ƿ�ɹ������ļ�
         */
        bool Load();

        /**
         * @brief ��ȡ `TextSource` ��Դ�ĵ���
         * @return ָ�� `UtTextDocument` ��ָ�룬��ʾԴ�ĵ�
         */
        UtTextDocument* GetSource();

        /**
         * @brief ����ļ��Ƿ��ѱ�ɾ����
         * @return ����ļ��ѱ�ɾ�������� `true`�����򣬷��� `false`
         */
        bool                                IsDeleted() const { return mDeleted; }

        /**
         * @brief �����ļ��Ƿ�ɾ����
         * @param aIsDeleted �Ƿ�ɾ���ļ��ı�־
         */
        void                                SetDeleted(bool aIsDeleted);

        /**
         * @brief ����ļ��Ƿ����޸ģ�������ϵİ汾��ȣ���
         * @param aAlwaysFullyReload �Ƿ�ʼ����ȫ���¼����ļ�
         * @return �Ƿ��⵽�ļ��޸�
         */
        bool                                CheckForFileModifications(bool aAlwaysFullyReload);

        /**
         * @brief ������ָ��λ�ò����ı��Ĳ�����
         * @param aPosition ����λ��
         * @param aLength �����ı��ĳ���
         * @param aText ָ������ı���ָ��
         */
        void                                HandleInsert(int aPosition, int aLength, const char* aText);

        /**
         * @brief ������ָ��λ��ɾ���ı��Ĳ�����
         * @param aPosition ɾ��λ��
         * @param aLength ɾ���ı��ĳ���
         */
        void                                HandleDelete(int aPosition, int aLength);

        /**
         * @brief Ϊָ������Ŀ����һ���µ���ͼ��
         * @param aProjectPtr ָ����Ŀ��ָ��
         * @return ָ���´����� `TextSourceView` ��ָ��
         */
        TextSourceView* NewView(Project* aProjectPtr);

        /**
         * @brief ��ȡ��ָ������Ŀ��������ͼ��
         * @param aParentPtr ָ����Ŀ��ָ��
         * @return ָ�� `TextSourceView` ��ָ��
         */
        TextSourceView* GetView(Project* aParentPtr);

        /**
         * @brief ��ȡ������ `TextSource` ��������ͼ��
         * @return ָ�� `TextSourceView` ָ��ĳ�����������
         */
        const std::vector<TextSourceView*>& GetViews() const { return mViews; }

        /**
         * @brief ���༭���ر�ʱ���ã�֪ͨ `TextSource` �ñ༭���ѹرա�
         * @param aEditorPtr ָ��رյ� `Editor` ��ָ��
         */
        void                                EditorClosed(Editor* aEditorPtr);

        /**
         * @brief ��ȡ�� `TextSource` ������ Qt �ĵ��Ĳ�͸��ָ�롣
         * @return ָ�� Qt �ĵ��� `void*` ָ��
         */
        void* GetQtDocument() const { return mDocumentPtr; }

        /**
         * @brief ��ȡ�� `TextSource` ������ Qt �ĵ���Ϊ `QTextDocument` ָ�롣
         * @return ָ�� `QTextDocument` ��ָ��
         */
        QTextDocument* GetDocumentAsQTextDocument() const { return static_cast<QTextDocument*>(mDocumentPtr); }

        // /**
        //  * @brief �����ĵ�����ʽ��
        //  * 
        //  * �˺����������ڸ��ݵ�ǰ����ʽ���ø����ĵ�����ʾ��ʽ��
        //  * Ŀǰ��ע�͵���������δʵ�ֻ���ʱ����Ҫ��
        //  */
        // void UpdateStyling();

        /**
         * @brief ��Ŀ��������ʱ���ã������漰���½���������ĵ����ݡ�
         */
        void ProjectParseUpdated();

        /**
         * @brief ���� `TextSource` �����ݡ�
         * @return �Ƿ�ɹ�����
         */
        bool Save();

        /**
         * @brief ���� `TextSource` �����ݣ����������֪ͨ��
         */
        void SaveWithNotifications();

        /**
         * @brief �� `TextSource` ���Ϊ�µ��ļ���
         */
        void SaveAs();

        /**
         * @brief ��ȡ�ļ�����
         * @return �ļ����� `std::string` ��ʾ
         */
        std::string GetFileName();

        /**
         * @brief ��ȡ�ļ���ϵͳ�е�·����
         * @return �ļ�ϵͳ·���� `std::string` ��ʾ
         */
        std::string GetSystemPath() const { return mFilePath.GetSystemPath(); }

        /**
         * @brief ��ָ�����ı���Χ���滻�ı���
         * @param aReplaceRange Ҫ�滻���ı���Χ������Ϊ `UtTextRange`
         * @param aText Ҫ��������ı�������Ϊ `std::string`
         */
        void Replace(const UtTextRange& aReplaceRange, const std::string& aText);

        /**
         * @brief ���ĵ�ĩβ׷���ı���
         * @param aText Ҫ׷�ӵ��ı�������Ϊ `std::string`
         */
        void Append(const std::string& aText);

        /**
         * @brief ��ȡ���д�����ĸ��ġ�
         * @return �������õ� `TextSourceChange` ��������ʾ������ĸ����б�
         */
        const std::vector<TextSourceChange>& GetPendingChanges() const { return mPendingChanges; }

        /**
         * @brief ���ļ����޸�״̬�����仯ʱ���õĻص���
         *
         * �˻ص�����֪ͨ����������� `TextSource` ���ļ��޸�״̬�����仯ʱ���¼���
         */
        UtCallbackListN<void(TextSource&)> FileModifiedChange;

        /**
         * @brief ��� `TextSource` �Ƿ��ѱ��޸ģ����ϴα�����ȣ���
         * @return ����ļ��ѱ��޸ģ����� `true`�����򣬷��� `false`
         */
        bool IsModified() const { return mModified; }

        /**
         * @brief ��Ǳ�����Ѵﵽ���������ڳ���/��������
         */
        void SavePointReached();

        /**
         * @brief ��ȡԴ�ļ����ݣ����ܸ��ݲ��������Ƿ���ȫ���¼��ء�
         * @param aAlwaysFullyReload �Ƿ�ʼ����ȫ���¼����ļ�
         * @return �Ƿ�ɹ���ȡԴ�ļ�
         */
        bool ReadSource(bool aAlwaysFullyReload = false);

        /**
         * @brief ��ȡ�� `TextSource` ��������Ŀ�����ռ䡣
         * @return ָ�� `ProjectWorkspace` ��ָ��
         */
        ProjectWorkspace* GetWorkspace() const { return mProjectWorkspacePtr; }

        /**
         * @brief ��ȡ�� `TextSource` ��������Ŀ��
         * @return ָ�� `Project` ��ָ��
         */
        Project* GetProject();

        /**
         * @brief �ȴ�Դ�ļ����޸���ɣ������漰ͬ��������
         */
        void              WaitForSourceModifications();

        /**
         * @brief ��ȡ `TextSource` �ı�־λ��
         * @return ��־λ������ֵ
         */
        int               GetFlags() const { return mFlags; }

        /**
         * @brief ���� `TextSource` �ı�־λ��
         * @param aFlags �µı�־λ����ֵ
         */
        void              SetFlags(int aFlags) { mFlags = aFlags; }

        /**
         * @brief ��� `TextSource` �Ƿ�Ϊ�ؼ��ļ������Ƿ���� `cCRITICAL` �� `cINCLUDED` ��־����
         * @return ����ļ��ǹؼ��ģ����� `true`�����򣬷��� `false`
         */
        bool              IsCritical() const { return (cCRITICAL_MASK & mFlags) != 0; }

        /**
         * @brief ��� `TextSource` �Ƿ��Ѽ��ص��ڴ��С�
         * @return ����ļ��Ѽ��أ����� `true`�����򣬷��� `false`
         */
        bool              IsLoaded() const { return mLoaded; }

        /**
         * @brief ж�� `TextSource`�������漰�ͷ��ڴ�Ȳ�����
         */
        void              Unload();

        /**
         * @brief ���޸�Ӧ�õ�ָ�����ı���Χ���ĵ��С�
         * @param aRange ҪӦ���޸ĵ��ı���Χ������Ϊ `UtTextRange`
         * @param aStartSequenceNumber ��ʼ�����кţ����ڱ�ʶ���ĵ�˳��
         */
        void ApplyModifications(UtTextRange& aRange, long long aStartSequenceNumber) const;

        /**
         * @brief ��ָ��λ��Ӧ���޸ģ������漰���кŵĹ���
         * @param aPos Ӧ���޸ĵ�λ��
         * @param aStartSequenceNumber ��ʼ�����кţ����ڱ�ʶ���ĵ�˳��
         * @return Ӧ���޸ĺ����λ��
         */
        size_t ApplyModifications(size_t aPos, long long aStartSequenceNumber) const;

        /**
         * @brief ����������޸�Ӧ�õ�ָ�����ĵ��С�
         * @param aRange ҪӦ���޸ĵ��ı���Χ������Ϊ `UtTextRange`
         * @param aDocument Ŀ���ĵ�������Ϊ `UtTextDocument`
         */
        void ApplyPendingModifications(UtTextRange& aRange, UtTextDocument& aDocument) const;

        /**
         * @brief ����Ƿ���Ӧ�þ���ָ�����кŵĸ��ġ�
         * @param aSequenceNumber Ҫ�������к�
         * @return �����Ӧ�ø����кŵĸ��ģ����� `true`�����򣬷��� `false`
         */
        bool HasAppliedChanges(long long aSequenceNumber) const;

        /**
         * @brief ����Ƿ���ڴ�����ĸ��ġ�
         * @return ������ڴ�����ĸ��ģ����� `true`�����򣬷��� `false`
         */
        bool HasPendingChanges() const { return !mPendingChanges.empty(); }

        /**
         * @brief ��ȡ��һ�����кţ����ڱ�ʶ�µĸ��ġ�
         * @return ��һ�����кŵ� `long long` ֵ
         */
        static long long GetNextSequenceNumber() { return sNextSequenceNumber; }

        /**
         * @brief ���ù�ʱ�����кţ����ڱ�ʶ��Щ���Ŀ��Ա�������
         * @param aNumber �µĹ�ʱ���к�
         */
        static void      SetObsoleteSequenceNumber(long long aNumber) { sObsoleteSequenceNumber = aNumber; }

        /**
         * @brief ��ȡ�ļ��ڼ���ʱ��ǩ����
         * @return �ļ�ǩ��������Ϊ `FileSignature`
         */
        FileSignature FileSignatureAtLoad() const { return mFileSignature; }

        /**
         * @brief ���¼��������� `TextSource` ��������ͼ��
         */
        void ReloadViews();

        /**
         * @brief �Ƚ������ĵ�֮��Ĳ��죬���������¼Ϊ `TextSourceChange` �б�
         * @param aOld ���ĵ������ݣ�����Ϊ `const char*`
         * @param aNew ���ĵ������ݣ�����Ϊ `const char*`
         * @param aChanges ���ڴ洢����� `QVector<TextSourceChange>` ����
         */
        static void DiffDocuments(const char* aOld, const char* aNew, QVector<TextSourceChange>& aChanges);

        /**
         * @brief ���Ұ���ָ���λ�ã���������Ԥ����ָ��ķ�����
         */
        void FindIncludeLocations();

        /**
         * @brief ���������ǰ�ļ����ļ��У������������ļ�ϵͳ�ж�λ�ļ���
         */
        void BrowseContainingFolder();

        /**
         * @brief ����ǰ�ļ���·�����Ƶ������壬�����û���������������
         */
        void CopyPathToClipboard();

    private:
        /**
         * @brief ���沢�洢 `TextSource` �����ݣ������漰�ļ�д���״̬���¡�
         */
        void SaveAndStore();

        /**
         * @brief ������Ӧ�õ� Qt ���ĵ��У�����ض��ı༭����
         * @param aChange ҪӦ�õĸ��ģ�����Ϊ `TextSourceChange`
         * @param aEditor ָ����� `Editor` ������
         */
        void ApplyChangeToQt(const TextSourceChange& aChange, Editor& aEditor);

        /**
         * @brief ������Ӧ�õ� Qt ���ĵ��У�����ض����ı���ꡣ
         * @param aChange ҪӦ�õĸ��ģ�����Ϊ `TextSourceChange`
         * @param aCursor ָ����� `QTextCursor` ������
         */
        void ApplyChangeToQt(const TextSourceChange& aChange, QTextCursor& aCursor);

        /**
         * @brief ��ȡ��һ����Ӧ�õĸ��ĵ����кš�
         * @param aSequenceNumber ��ǰ�����к�
         * @return ��һ����Ӧ�õĸ��ĵ����к�
         */
        int  GetNextAppliedChange(long long aSequenceNumber) const;

        /**
         * @brief ��ָ��λ�ò����ı���
         * @param aPosition ����λ��
         * @param aLength �����ı��ĳ���
         * @param aText ָ������ı���ָ��
         */
        void InsertText(size_t aPosition, size_t aLength, const char* aText);

        /**
         * @brief ��ָ��λ��ɾ���ı���
         * @param aPosition ɾ��λ��
         * @param aLength ɾ���ı��ĳ���
         */
        void DeleteText(size_t aPosition, size_t aLength);

        /**
         * @brief ���¼��ر༭���������漰ˢ����ͼ��ͬ�����ġ�
         * @param aEditor ָ����� `Editor` ������
         * @param aInitialLoad �Ƿ�Ϊ��ʼ����
         * @param aForceUnmodified �Ƿ�ǿ�Ʊ��Ϊδ�޸�
         * @param aForceReload �Ƿ�ǿ�����¼���
         */
        void ReloadEditor(Editor& aEditor, bool aInitialLoad, bool aForceUnmodified = false, bool aForceReload = false);

        /**
         * @brief ���� `TextSource` ���޸�״̬����������Ҫ֪ͨ Qt��
         * @param aModified �µ��޸�״̬
         * @param aTellQt �Ƿ�֪ͨ Qt �����޸�״̬�ı仯
         */
        void SetModified(bool aModified, bool aTellQt = true)
        {
            if (mModified != aModified)
            {
                SetModifiedUpdate(aModified, aTellQt);
            }
        }

        /**
         * @brief ���� `TextSource` ���޸�״̬����������Ҫ֪ͨ Qt��
         * @param aModified �µ��޸�״̬
         * @param aTellQt �Ƿ�֪ͨ Qt �����޸�״̬�ı仯
         */
        void SetModifiedUpdate(bool aModified, bool aTellQt);

        /**
         * @brief ֪ͨ��Ŀ���� `TextSource` �ĸ��ġ�
         */
        void NotifyProjectOfChange();

        /**
         * @brief �����ĵ����ݵı仯������λ�á�ɾ������ӵ��ַ�����
         * @param aPos �仯��λ��
         * @param aRemovedChars ɾ�����ַ���
         * @param aAddChars ��ӵ��ַ���
         */
        void HandleChangeContents(int aPos, int aRemovedChars, int aAddChars);

        /**
         * @brief ������ͬ����Դ�ĵ��������漰�����ڲ�״̬���ļ���
         */
        void SyncChangesToSource();

        // ��Ա����

        int mFlags;                                ///< ��־λ�����ڱ�ʶ�ļ���״̬������

        ProjectWorkspace* mProjectWorkspacePtr;    ///< ָ����Ŀ��������ָ�룬���ڹ�����Ŀ�����ռ�

        bool mLoaded;                              ///< �ļ��Ƿ��ѱ���ȡ����һ��
        bool mDeleted;                             ///< �ļ��Ƿ��ѱ�ɾ��
        bool mModified;                            ///< �ļ��Ƿ��ڱ�����޸�

        std::vector<TextSourceChange> mPendingChanges; ///< ������ĸ����б��洢�ڽ��������н��еĸ���
        std::deque<TextSourceChange> mAppliedChanges;  ///< ��Ӧ�õĸ��Ķ��У����ڸ�����ɴ��루���Զ���ȫ�����µĽ������ǰ��Ҫ���еĴ���
        int           mAppliedChangesBytes;          ///< ��Ӧ�ø�����ռ�õ��ֽ���

        FileSignature mFileSignature;                ///< �ļ��ڼ���ʱ��ǩ�������ڱ�ʶ�ļ���Ψһ�Ի�汾

        std::vector<TextSourceView*> mViews;         ///< ������ `TextSource` ��������ͼ�б�

        void* mDocumentPtr;                        ///< ָ�� Qt �ĵ��Ĳ�͸��ָ�룬����ͬ������༭����ͬһ���ĵ�

        static long long sNextSequenceNumber;        ///< ��̬����������������һ�����ĵ����к�
        static long long sObsoleteSequenceNumber;    ///< ��̬���������ڱ�ʶ��ʱ�����кţ����������кŵĸ��Ŀ��Ա�����
    };
} // namespace wizard

#endif // TEXTSOURCE_HPP