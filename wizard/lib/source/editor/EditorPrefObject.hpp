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

#include "UiResources.hpp"        // 包含 UI 资源相关的定义，如字体等
#include "UtCast.hpp"             // 包含类型转换相关的工具或宏
#include "ViExport.hpp"           // 包含导出宏，用于控制符号的可见性
#include "WkfPrefObject.hpp"      // 包含基础偏好设置对象的定义

namespace wizard
{
    /**
     * @enum TextType
     * @brief 定义编辑器中不同文本类型的枚举。
     *
     * 此枚举用于标识编辑器中不同类型的文本，以便为每种类型应用不同的样式（如颜色、字体样式等）。
     * 包括普通样式和脚本样式两大类。
     */
    enum class TextType : size_t
    {
        // Normal styles（普通样式）

        // Text not parsed（未解析的文本）
        None = 0,

        // Text token matches keyword in grammar（与语法中的关键字匹配的文本标记）
        Keyword = 1,

        // Keyword marking the start or end of a block（标记块开始或结束的关键字）
        Block_Keyword = 2,

        // Keyword marking the start of a command（标记命令开始的关键字）
        Command = 3,

        // A user-defined input value (number, string, etc...)（用户定义的输入值，如数字、字符串等）
        User_Input = 4,

        // A WSF type (WSF_PLATFORM ...)（WSF 类型，如 WSF_PLATFORM 等）
        Type = 5,

        // A new user type (MY_PLATFORM)（用户自定义的新类型，如 MY_PLATFORM）
        Name = 6,

        // include line（包含指令行，如 #include）
        Include = 7,

        // Comment  # or //（注释，使用 # 或 //）
        Comment = 8,

        // Quoted string（引号字符串，当前未使用）
        Quoted = 9,

        // Unmatched_Block（未匹配的块）
        Unmatched_Block = 10,

        // Include_Error（包含错误）
        Include_Error = 11,

        // Syntax_Tip（语法提示）
        Syntax_Tip = 12,

        // Syntax_Tip_Bold（加粗的语法提示）
        Syntax_Tip_Bold = 13,

        // Preprocessor（预处理器指令）
        Preprocessor = 14,

        // Script styles（脚本样式）

        Script_Keyword = 15,         // 脚本关键字
        Script_Operator,             // 脚本操作符
        Script_Quoted,               // 脚本引号字符串
        Script_Comment,              // 脚本注释
        Script_Type,                 // 脚本类型
        Script_Number,               // 脚本数字
        Script_Static_Method,        // 脚本静态方法
        Script_Method,               // 脚本方法
        Script_Local_Method,         // 脚本局部方法
        Script_Local_Variable,       // 脚本局部变量
        Script_Parameter,            // 脚本参数
        Script_None,                 // 脚本无类型
        Script_End,                  // 脚本结束

        Margin_None                  // 边距无类型（可能用于边距样式）
    };

    /**
     * @struct TextStyle
     * @brief 定义文本样式的结构体。
     *
     * 此结构体用于存储文本的样式属性，包括颜色、粗体、斜体和下划线等。
     */
    struct TextStyle
    {
        /**
         * @brief 默认构造函数，初始化默认样式。
         */
        TextStyle() = default;

        /**
         * @brief 参数化构造函数，初始化指定的样式属性。
         * @param aColor 文本颜色
         * @param aBold 是否粗体
         * @param aItalic 是否斜体
         * @param aUnderline 是否下划线
         */
        TextStyle(const QColor& aColor, bool aBold, bool aItalic, bool aUnderline)
            : mColor(aColor)
            , mBold(aBold)
            , mItalic(aItalic)
            , mUnderline(aUnderline)
        {
        }

        QColor mColor{ Qt::red };      ///< 文本颜色，默认为红色
        bool   mBold{ false };         ///< 是否粗体，默认为 false
        bool   mItalic{ false };       ///< 是否斜体，默认为 false
        bool   mUnderline{ false };    ///< 是否下划线，默认为 false
    };

    /**
     * @struct EditorPrefData
     * @brief 定义编辑器偏好设置的数据结构。
     *
     * 此结构体用于存储编辑器的各种偏好设置，包括是否显示行号、语法提示、自动补全、撤销弹出、制表符空格数、文本折叠、字体类型与大小，以及不同文本类型的样式等。
     */
    struct EditorPrefData
    {
        /**
         * @brief 默认构造函数，初始化默认偏好设置。
         */
        EditorPrefData();

        bool                          mShowLineNumbers{ true };               ///< 是否显示行号，默认为 true
        bool                          mShowSyntaxTips{ true };                ///< 是否显示语法提示，默认为 true
        bool                          mAutocompleteAfterPeriod{ true };       ///< 是否在输入句点后自动补全，默认为 true
        bool                          mEnableUndoPopups{ false };             ///< 是否启用撤销弹出提示，默认为 false
        unsigned int                  mTabSpace{ 3 };                       ///< 制表符对应的空格数，默认为 3
        bool                          mFoldText{ true };                    ///< 是否启用文本折叠，默认为 true
        std::map<QString, QColor>     mDarkEditorColor;                   ///< 深色编辑器颜色映射，键为样式名称，值为颜色
        std::map<QString, QColor>     mLightEditorColor;                  ///< 浅色编辑器颜色映射，键为样式名称，值为颜色
        std::map<TextType, TextStyle> mDarkStyle;                         ///< 深色编辑器下不同文本类型的样式映射
        std::map<TextType, TextStyle> mLightStyle;                        ///< 浅色编辑器下不同文本类型的样式映射
        QString                       mFontType{ UiResources::GetInstance().GetFont().family() }; ///< 字体类型，默认为 UI 资源中的字体家族
        unsigned int mFontSize{ ut::safe_cast<unsigned int>(UiResources::GetInstance().GetFont().pointSize()) }; ///< 字体大小，默认为 UI 资源中的字体点大小
        std::map<QString, std::pair<size_t, size_t>> mFilePositions;      ///< 文件位置映射，键为文件路径，值为光标位置（行号，列号）
    };

    /**
     * @class EditorPrefObject
     * @brief 编辑器偏好设置对象类，继承自 wkf::PrefObjectT<EditorPrefData>。
     *
     * 此类用于管理和应用编辑器的偏好设置。它继承自一个模板化的偏好设置基类，提供读取、保存和应用偏好设置的功能。
     * 同时，它定义了相关的信号和槽，以便在偏好设置更改时通知其他组件。
     */
    class VI_EXPORT EditorPrefObject : public wkf::PrefObjectT<EditorPrefData>
    {
        Q_OBJECT // 启用 Qt 的元对象系统，支持信号与槽机制

    public:
        /**
         * @brief 静态常量字符串，表示偏好设置对象的名称。
         */
        static constexpr const char* cNAME = "EditorOptions";

        /**
         * @brief 构造函数
         * @param parent 指向父 QObject 的指针，用于对象树管理
         */
        EditorPrefObject(QObject* parent = nullptr);

        /**
         * @brief 析构函数
         */
        ~EditorPrefObject() override = default;

        /**
         * @brief 应用当前的偏好设置。
         *
         * 此函数将当前加载的偏好设置应用到编辑器中，更新编辑器的显示和行为。
         */
        void Apply() override;

        /**
         * @brief 从 QSettings 中读取偏好设置。
         * @param aSettings 指向 QSettings 对象的引用，用于读取设置
         * @return 包含读取到的偏好设置的 EditorPrefData 结构体
         */
        EditorPrefData ReadSettings(QSettings& aSettings) const override;

        /**
         * @brief 将当前的偏好设置保存到 QSettings 中。
         * @param aSettings 指向 QSettings 对象的引用，用于保存设置
         */
        void           SaveSettingsP(QSettings& aSettings) const override;

        /**
         * @brief 获取是否显示行号的偏好设置。
         * @return 是否显示行号
         */
        bool                                 ShowLineNumbers() const;

        /**
         * @brief 获取是否显示语法提示的偏好设置。
         * @return 是否显示语法提示
         */
        bool                                 ShowSyntaxTips() const;

        /**
         * @brief 获取指定样式名称的编辑器颜色。
         * @param aName 样式名称
         * @return 对应的颜色
         */
        const QColor                         EditorColor(const QString& aName) const;

        /**
         * @brief 获取制表符对应的空格数。
         * @return 制表符空格数
         */
        const unsigned int                   TabSpace() const;

        /**
         * @brief 获取是否在输入句点后自动补全的偏好设置。
         * @return 是否自动补全
         */
        bool                                 AutocompleteAfterPeriod() const;

        /**
         * @brief 获取是否启用撤销弹出提示的偏好设置。
         * @return 是否启用撤销弹出提示
         */
        bool                                 UndoPopupsEnabled() const;

        /**
         * @brief 获取当前所有文本类型的样式映射。
         * @return 包含所有文本类型样式的映射
         */
        const std::map<TextType, TextStyle>& GetStyles();

        /**
         * @brief 获取是否启用文本折叠的偏好设置。
         * @return 是否启用文本折叠
         */
        bool                                 FoldText() const;

        /**
         * @brief 获取字体大小。
         * @return 字体大小
         */
        unsigned int                         FontSize() const;

        /**
         * @brief 设置字体大小。
         * @param aSize 新的字体大小
         */
        void                                 SetFontSize(unsigned int aSize);

        /**
         * @brief 获取当前字体类型。
         * @return 字体类型
         */
        QString                              FontType() const;

        /**
         * @brief 记住指定文件的当前光标位置。
         * @param aPath 文件路径
         * @param aLine 当前行号
         * @param aColumn 当前列号
         */
        void                      RememberFilePosition(const QString& aPath, const size_t aLine, const size_t aColumn);

        /**
         * @brief 回忆指定文件的之前记住的光标位置。
         * @param aPath 文件路径
         * @return 光标位置（行号，列号）
         */
        std::pair<size_t, size_t> RecallFilePosition(const QString& aPath);

    signals:
        /**
         * @brief 偏好设置已更改的信号。
         *
         * 当偏好设置被修改并应用后，此信号被发出，通知其他组件更新相应的设置。
         */
        void Changed();
    };

} // namespace wizard

// 声明 EditorPrefData 为 Qt 的元类型，以便在信号与槽中使用
Q_DECLARE_METATYPE(wizard::EditorPrefData)

#endif // EDITORPREFOBJECT_HPP