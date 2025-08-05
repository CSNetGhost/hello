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

#ifndef EDITORPREFOBJECT_HPP
#define EDITORPREFOBJECT_HPP

#include "UiResources.hpp"        // ���� UI ��Դ��صĶ��壬�������
#include "UtCast.hpp"             // ��������ת����صĹ��߻��
#include "ViExport.hpp"           // ���������꣬���ڿ��Ʒ��ŵĿɼ���
#include "WkfPrefObject.hpp"      // ��������ƫ�����ö���Ķ���

namespace wizard
{
    /**
     * @enum TextType
     * @brief ����༭���в�ͬ�ı����͵�ö�١�
     *
     * ��ö�����ڱ�ʶ�༭���в�ͬ���͵��ı����Ա�Ϊÿ������Ӧ�ò�ͬ����ʽ������ɫ��������ʽ�ȣ���
     * ������ͨ��ʽ�ͽű���ʽ�����ࡣ
     */
    enum class TextType : size_t
    {
        // Normal styles����ͨ��ʽ��

        // Text not parsed��δ�������ı���
        None = 0,

        // Text token matches keyword in grammar�����﷨�еĹؼ���ƥ����ı���ǣ�
        Keyword = 1,

        // Keyword marking the start or end of a block����ǿ鿪ʼ������Ĺؼ��֣�
        Block_Keyword = 2,

        // Keyword marking the start of a command��������ʼ�Ĺؼ��֣�
        Command = 3,

        // A user-defined input value (number, string, etc...)���û����������ֵ�������֡��ַ����ȣ�
        User_Input = 4,

        // A WSF type (WSF_PLATFORM ...)��WSF ���ͣ��� WSF_PLATFORM �ȣ�
        Type = 5,

        // A new user type (MY_PLATFORM)���û��Զ���������ͣ��� MY_PLATFORM��
        Name = 6,

        // include line������ָ���У��� #include��
        Include = 7,

        // Comment  # or //��ע�ͣ�ʹ�� # �� //��
        Comment = 8,

        // Quoted string�������ַ�������ǰδʹ�ã�
        Quoted = 9,

        // Unmatched_Block��δƥ��Ŀ飩
        Unmatched_Block = 10,

        // Include_Error����������
        Include_Error = 11,

        // Syntax_Tip���﷨��ʾ��
        Syntax_Tip = 12,

        // Syntax_Tip_Bold���Ӵֵ��﷨��ʾ��
        Syntax_Tip_Bold = 13,

        // Preprocessor��Ԥ������ָ�
        Preprocessor = 14,

        // Script styles���ű���ʽ��

        Script_Keyword = 15,         // �ű��ؼ���
        Script_Operator,             // �ű�������
        Script_Quoted,               // �ű������ַ���
        Script_Comment,              // �ű�ע��
        Script_Type,                 // �ű�����
        Script_Number,               // �ű�����
        Script_Static_Method,        // �ű���̬����
        Script_Method,               // �ű�����
        Script_Local_Method,         // �ű��ֲ�����
        Script_Local_Variable,       // �ű��ֲ�����
        Script_Parameter,            // �ű�����
        Script_None,                 // �ű�������
        Script_End,                  // �ű�����

        Margin_None                  // �߾������ͣ��������ڱ߾���ʽ��
    };

    /**
     * @struct TextStyle
     * @brief �����ı���ʽ�Ľṹ�塣
     *
     * �˽ṹ�����ڴ洢�ı�����ʽ���ԣ�������ɫ�����塢б����»��ߵȡ�
     */
    struct TextStyle
    {
        /**
         * @brief Ĭ�Ϲ��캯������ʼ��Ĭ����ʽ��
         */
        TextStyle() = default;

        /**
         * @brief ���������캯������ʼ��ָ������ʽ���ԡ�
         * @param aColor �ı���ɫ
         * @param aBold �Ƿ����
         * @param aItalic �Ƿ�б��
         * @param aUnderline �Ƿ��»���
         */
        TextStyle(const QColor& aColor, bool aBold, bool aItalic, bool aUnderline)
            : mColor(aColor)
            , mBold(aBold)
            , mItalic(aItalic)
            , mUnderline(aUnderline)
        {
        }

        QColor mColor{ Qt::red };      ///< �ı���ɫ��Ĭ��Ϊ��ɫ
        bool   mBold{ false };         ///< �Ƿ���壬Ĭ��Ϊ false
        bool   mItalic{ false };       ///< �Ƿ�б�壬Ĭ��Ϊ false
        bool   mUnderline{ false };    ///< �Ƿ��»��ߣ�Ĭ��Ϊ false
    };

    /**
     * @struct EditorPrefData
     * @brief ����༭��ƫ�����õ����ݽṹ��
     *
     * �˽ṹ�����ڴ洢�༭���ĸ���ƫ�����ã������Ƿ���ʾ�кš��﷨��ʾ���Զ���ȫ�������������Ʊ���ո������ı��۵��������������С���Լ���ͬ�ı����͵���ʽ�ȡ�
     */
    struct EditorPrefData
    {
        /**
         * @brief Ĭ�Ϲ��캯������ʼ��Ĭ��ƫ�����á�
         */
        EditorPrefData();

        bool                          mShowLineNumbers{ true };               ///< �Ƿ���ʾ�кţ�Ĭ��Ϊ true
        bool                          mShowSyntaxTips{ true };                ///< �Ƿ���ʾ�﷨��ʾ��Ĭ��Ϊ true
        bool                          mAutocompleteAfterPeriod{ true };       ///< �Ƿ�����������Զ���ȫ��Ĭ��Ϊ true
        bool                          mEnableUndoPopups{ false };             ///< �Ƿ����ó���������ʾ��Ĭ��Ϊ false
        unsigned int                  mTabSpace{ 3 };                       ///< �Ʊ����Ӧ�Ŀո�����Ĭ��Ϊ 3
        bool                          mFoldText{ true };                    ///< �Ƿ������ı��۵���Ĭ��Ϊ true
        std::map<QString, QColor>     mDarkEditorColor;                   ///< ��ɫ�༭����ɫӳ�䣬��Ϊ��ʽ���ƣ�ֵΪ��ɫ
        std::map<QString, QColor>     mLightEditorColor;                  ///< ǳɫ�༭����ɫӳ�䣬��Ϊ��ʽ���ƣ�ֵΪ��ɫ
        std::map<TextType, TextStyle> mDarkStyle;                         ///< ��ɫ�༭���²�ͬ�ı����͵���ʽӳ��
        std::map<TextType, TextStyle> mLightStyle;                        ///< ǳɫ�༭���²�ͬ�ı����͵���ʽӳ��
        QString                       mFontType{ UiResources::GetInstance().GetFont().family() }; ///< �������ͣ�Ĭ��Ϊ UI ��Դ�е��������
        unsigned int mFontSize{ ut::safe_cast<unsigned int>(UiResources::GetInstance().GetFont().pointSize()) }; ///< �����С��Ĭ��Ϊ UI ��Դ�е�������С
        std::map<QString, std::pair<size_t, size_t>> mFilePositions;      ///< �ļ�λ��ӳ�䣬��Ϊ�ļ�·����ֵΪ���λ�ã��кţ��кţ�
    };

    /**
     * @class EditorPrefObject
     * @brief �༭��ƫ�����ö����࣬�̳��� wkf::PrefObjectT<EditorPrefData>��
     *
     * �������ڹ����Ӧ�ñ༭����ƫ�����á����̳���һ��ģ�廯��ƫ�����û��࣬�ṩ��ȡ�������Ӧ��ƫ�����õĹ��ܡ�
     * ͬʱ������������ص��źźͲۣ��Ա���ƫ�����ø���ʱ֪ͨ���������
     */
    class VI_EXPORT EditorPrefObject : public wkf::PrefObjectT<EditorPrefData>
    {
        Q_OBJECT // ���� Qt ��Ԫ����ϵͳ��֧���ź���ۻ���

    public:
        /**
         * @brief ��̬�����ַ�������ʾƫ�����ö�������ơ�
         */
        static constexpr const char* cNAME = "EditorOptions";

        /**
         * @brief ���캯��
         * @param parent ָ�� QObject ��ָ�룬���ڶ���������
         */
        EditorPrefObject(QObject* parent = nullptr);

        /**
         * @brief ��������
         */
        ~EditorPrefObject() override = default;

        /**
         * @brief Ӧ�õ�ǰ��ƫ�����á�
         *
         * �˺�������ǰ���ص�ƫ������Ӧ�õ��༭���У����±༭������ʾ����Ϊ��
         */
        void Apply() override;

        /**
         * @brief �� QSettings �ж�ȡƫ�����á�
         * @param aSettings ָ�� QSettings ��������ã����ڶ�ȡ����
         * @return ������ȡ����ƫ�����õ� EditorPrefData �ṹ��
         */
        EditorPrefData ReadSettings(QSettings& aSettings) const override;

        /**
         * @brief ����ǰ��ƫ�����ñ��浽 QSettings �С�
         * @param aSettings ָ�� QSettings ��������ã����ڱ�������
         */
        void           SaveSettingsP(QSettings& aSettings) const override;

        /**
         * @brief ��ȡ�Ƿ���ʾ�кŵ�ƫ�����á�
         * @return �Ƿ���ʾ�к�
         */
        bool                                 ShowLineNumbers() const;

        /**
         * @brief ��ȡ�Ƿ���ʾ�﷨��ʾ��ƫ�����á�
         * @return �Ƿ���ʾ�﷨��ʾ
         */
        bool                                 ShowSyntaxTips() const;

        /**
         * @brief ��ȡָ����ʽ���Ƶı༭����ɫ��
         * @param aName ��ʽ����
         * @return ��Ӧ����ɫ
         */
        const QColor                         EditorColor(const QString& aName) const;

        /**
         * @brief ��ȡ�Ʊ����Ӧ�Ŀո�����
         * @return �Ʊ���ո���
         */
        const unsigned int                   TabSpace() const;

        /**
         * @brief ��ȡ�Ƿ�����������Զ���ȫ��ƫ�����á�
         * @return �Ƿ��Զ���ȫ
         */
        bool                                 AutocompleteAfterPeriod() const;

        /**
         * @brief ��ȡ�Ƿ����ó���������ʾ��ƫ�����á�
         * @return �Ƿ����ó���������ʾ
         */
        bool                                 UndoPopupsEnabled() const;

        /**
         * @brief ��ȡ��ǰ�����ı����͵���ʽӳ�䡣
         * @return ���������ı�������ʽ��ӳ��
         */
        const std::map<TextType, TextStyle>& GetStyles();

        /**
         * @brief ��ȡ�Ƿ������ı��۵���ƫ�����á�
         * @return �Ƿ������ı��۵�
         */
        bool                                 FoldText() const;

        /**
         * @brief ��ȡ�����С��
         * @return �����С
         */
        unsigned int                         FontSize() const;

        /**
         * @brief ���������С��
         * @param aSize �µ������С
         */
        void                                 SetFontSize(unsigned int aSize);

        /**
         * @brief ��ȡ��ǰ�������͡�
         * @return ��������
         */
        QString                              FontType() const;

        /**
         * @brief ��סָ���ļ��ĵ�ǰ���λ�á�
         * @param aPath �ļ�·��
         * @param aLine ��ǰ�к�
         * @param aColumn ��ǰ�к�
         */
        void                      RememberFilePosition(const QString& aPath, const size_t aLine, const size_t aColumn);

        /**
         * @brief ����ָ���ļ���֮ǰ��ס�Ĺ��λ�á�
         * @param aPath �ļ�·��
         * @return ���λ�ã��кţ��кţ�
         */
        std::pair<size_t, size_t> RecallFilePosition(const QString& aPath);

    signals:
        /**
         * @brief ƫ�������Ѹ��ĵ��źš�
         *
         * ��ƫ�����ñ��޸Ĳ�Ӧ�ú󣬴��źű�������֪ͨ�������������Ӧ�����á�
         */
        void Changed();
    };

} // namespace wizard

// ���� EditorPrefData Ϊ Qt ��Ԫ���ͣ��Ա����ź������ʹ��
Q_DECLARE_METATYPE(wizard::EditorPrefData)

#endif // EDITORPREFOBJECT_HPP