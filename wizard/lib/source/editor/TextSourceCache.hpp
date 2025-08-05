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

#ifndef TEXTSOURCECACHE_HPP
#define TEXTSOURCECACHE_HPP

#include <map>      // ������׼ӳ�����������ڴ洢��ֵ��
#include <set>      // ������׼�������������ڴ洢ΨһԪ��
#include <string>   // �����ַ����࣬���ڴ����ı�����

// ������Ŀ�Զ����ͷ�ļ�
#include "UtPath.hpp"             // ����·��������صĶ���
#include "Util.hpp"               // ����ͨ�ù��ߺ�������
#include "WsfParseSourceProvider.hpp" // ��������Դ�ṩ����صĶ���

// ǰ������ Qt �࣬���ٱ�������
class QsciDocument;               // Qt �� Scintilla �ĵ��࣬���������﷨�����ͱ༭
class UtTextDocument;             // �Զ���Ļ����ı��ĵ���
class WsfParseNode;               // ������������ڵ���ص���

namespace wizard
{
    class ProjectWorkspace;       // ǰ������ ProjectWorkspace �࣬��ʾ��Ŀ�����ռ�
    class TextSource;             // ǰ������ TextSource �࣬��ʾ��Ŀ�е��ı�Դ�ļ�

    /**
     * @class TextSourceCache
     * @brief Դ�����࣬�ṩ����Ŀ�����������ļ����ڴ���ʡ�
     *
     * `TextSourceCache` ���������ڴ��л�����Ŀ�����õ������ļ���������˷����ٶȣ�
     * �����������豣�浽�ļ�������¶��ļ����ݽ��и��ĺ���Ӧ��
     */
    class VI_EXPORT TextSourceCache
    {
    public:
        /**
         * @brief ���캯��
         * @param aWorkspacePtr ָ����Ŀ�����ռ��ָ�룬���ڹ�����Ŀ��ص���Դ
         */
        explicit TextSourceCache(wizard::ProjectWorkspace* aWorkspacePtr);

        /**
         * @brief ��������
         */
        ~TextSourceCache();

        /**
         * @brief ��ȡָ��·���� `TextSource` ����
         *
         * ���ָ����·����Ӧ�� `TextSource` ��δ���أ�����ݲ��� `aRead` �����Ƿ��ȡ�ļ����ݡ�
         *
         * @param aPath �ļ�·��������Ϊ `UtPath`
         * @param aRead �Ƿ��ڻ�ȡʱ��ȡ�ļ����ݣ�Ĭ��Ϊ `true`
         * @return ָ�� `TextSource` ��ָ�룬���δ�ҵ��򷵻� `nullptr`
         */
        TextSource* GetSource(const UtPath& aPath, bool aRead = true);

        /**
         * @brief ����ָ��·���� `TextSource` ���󣬲��Զ���ȡ�ļ����ݡ�
         *
         * ����ҵ���Ӧ�� `TextSource`���򷵻���ָ�룻���򷵻� `nullptr`��
         *
         * @param aPath �ļ�·��������Ϊ `UtPath`
         * @param aRead �Ƿ��ڲ���ʱ��ȡ�ļ����ݣ�Ĭ��Ϊ `true`�����˲����ڴ˺����п��ܱ����ԣ�
         * @return ָ�� `TextSource` ��ָ�룬���δ�ҵ��򷵻� `nullptr`
         */
        TextSource* FindSource(const UtPath& aPath, bool aRead = true);

        /**
         * @brief ����ָ���ļ�·���ַ����� `TextSource` ���󣬲��Զ���ȡ�ļ����ݡ�
         *
         * ����ҵ���Ӧ�� `TextSource`���򷵻���ָ�룻���򷵻� `nullptr`��
         *
         * @param aPath �ļ�·���ַ���
         * @param aRead �Ƿ��ڲ���ʱ��ȡ�ļ����ݣ�Ĭ��Ϊ `true`�����˲����ڴ˺����п��ܱ����ԣ�
         * @return ָ�� `TextSource` ��ָ�룬���δ�ҵ��򷵻� `nullptr`
         */
        TextSource* FindSource(const std::string& aPath, bool aRead = true);

        /**
         * @brief ������ָ�� `UtTextDocument` ָ������� `TextSource` ����
         *
         * ����ҵ���Ӧ�� `TextSource`���򷵻���ָ�룻���򷵻� `nullptr`��
         *
         * @param aParseSourcePtr ָ�� `UtTextDocument` ��ָ��
         * @return ָ�� `TextSource` ��ָ�룬���δ�ҵ��򷵻� `nullptr`
         */
        TextSource* FindSource(UtTextDocument* aParseSourcePtr);

        /**
         * @brief ����Դӳ�����ͣ����ڴ洢�ļ�·���ַ����� `TextSource` ָ���ӳ�䡣
         *
         * ʹ���Զ���Ƚ��� `wizard::UtilFileStringCompare` ��·���ַ������������Ƚϡ�
         */
        typedef std::map<std::string, TextSource*, wizard::UtilFileStringCompare> SourceMap;

        /**
         * @brief ��ȡ��ǰ�����е�����Դӳ�䡣
         *
         * @return �������õ� `SourceMap`����ʾ��ǰ�����е����� `TextSource` ����
         */
        const SourceMap& GetSources() const { return mSources; }

        /**
         * @brief ɾ��ָ���� `TextSource` ����ӻ����С�
         *
         * @param aSourcePtr ָ��Ҫɾ���� `TextSource` �����ָ��
         */
        void DeleteSource(TextSource* aSourcePtr);

        /**
         * @brief ��ջ��棬ɾ�����л���� `TextSource` ����
         */
        void Clear();

        /**
         * @brief �洢����ӵ� `TextSource` ����ļ��ϡ�
         *
         * �˼������ڸ��������ӵ������е�Դ���������ں����Ĵ����֪ͨ��
         */
        std::set<TextSource*> mNewSources;

    protected:
        /**
         * @brief ָ����Ŀ�����ռ��ָ�룬���ڹ�����Ŀ��ص���Դ��
         */
        wizard::ProjectWorkspace* mWorkspacePtr;

        /**
         * @brief Դӳ�䣬�洢�ļ�·���ַ����� `TextSource` ָ���ӳ�䡣
         */
        SourceMap mSources;
    };

    /**
     * @class CacheSourceProvider
     * @brief �ṩԴ�� `WsfParser` ���࣬�� `TextSourceCache` �л�ȡԴ������ֱ�Ӵ��ļ���ȡ��
     *
     * `CacheSourceProvider` ��̳��� `WsfParseSourceProvider`����д��Դ�ṩ�ߵĽӿڣ�
     * ʹ�ý��������ڴ��е� `TextSourceCache` ��ȡԴ�ļ����ݣ�������ֱ�ӴӴ����ļ���ȡ��
     * ����������ܣ����������ڴ��ж�Դ�����޸Ķ������������浽�ļ���
     */
    class CacheSourceProvider : public WsfParseSourceProvider
    {
    public:
        /**
         * @brief ���캯��
         * @param aCachePtr ָ�� `TextSourceCache` ��ָ�룬���ڻ�ȡ�͹��� `TextSource` ����
         */
        explicit CacheSourceProvider(TextSourceCache* aCachePtr)
            : mAllowNewSources(true)      // Ĭ���������µ�Դ
            , mCachePtr(aCachePtr)        // ��ʼ������ָ��
        {
        }

        /**
         * @brief �Ƿ��������µ�Դ��
         *
         * ���Ϊ `true`���������Դ������ʱ�����Դ����µ� `TextSource` ����
         * ���Ϊ `false`����������Ѵ��ڵ�Դ���������µġ�
         */
        bool             mAllowNewSources;

        /**
         * @brief ָ�� `TextSourceCache` ��ָ�룬���ڻ�ȡ�͹��� `TextSource` ����
         */
        TextSourceCache* mCachePtr;

        /**
         * @brief ��д����� `FindSource` �������ӻ����в���ָ��·���� `UtTextDocument`��
         *
         * @param aPath �ļ�·��������Ϊ `UtPath`
         * @param aReadAccess �Ƿ���Ҫ��ȡ����Ȩ�ޣ�Ĭ��Ϊ `true`
         * @return ָ���ҵ��� `UtTextDocument` ��ָ�룬���δ�ҵ��򷵻� `nullptr`
         */
        UtTextDocument* FindSource(const UtPath& aPath, bool aReadAccess) override;

        /**
         * @brief ��д����� `CreateSource` �������ӻ����д���ָ��·���� `UtTextDocument`��
         *
         * ��� `mAllowNewSources` Ϊ `true`������ָ����·����Ӧ�� `TextSource` ��δ���ڣ�
         * �򴴽�һ���µ� `TextSource` ������ӵ������С�
         *
         * @param aPath �ļ�·��������Ϊ `UtPath`
         * @return ָ�򴴽����ҵ��� `UtTextDocument` ��ָ�룬����޷������򷵻� `nullptr`
         */
        UtTextDocument* CreateSource(const UtPath& aPath) override;
    };
} // namespace wizard

#endif // TEXTSOURCECACHE_HPP