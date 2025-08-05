// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2019 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef EDITOR_HELPERS_HPP
#define EDITOR_HELPERS_HPP

#include <sstream>        // 包含字符串流相关的类，用于字符串的格式化与解析

#include <QString>        // Qt 的字符串类，用于处理 Unicode 字符串
#include <QStringList>    // Qt 的字符串列表类，用于存储多个字符串
#include <QTextCursor>    // Qt 的文本光标类，用于操作文本内容的光标位置

// Util Includes
#include "UtCompilerAttributes.hpp"  // 可能包含编译器相关的属性或宏定义
class UtTextDocumentRange;           // 前向声明，表示文本文档的范围

// WKF Includes
#include "WkfEnvironment.hpp"        // 可能包含工作框架的环境配置或全局设置
#include "WkfUnitsObject.hpp"        // 可能包含与单位相关的对象或功能

// WSF Includes
#include "WsfPProxyNode.hpp"         // 前向声明，可能表示某种代理节点

// Wizard Includes
#include "Editor.hpp"                // 包含编辑器类的定义
#include "ViExport.hpp"              // 可能包含导出宏，用于控制符号的可见性

namespace vespa
{
    class VaPosition;                // 前向声明，表示位置相关的类
}

namespace wizard
{
    class Editor;                    // 前向声明，编辑器类

    namespace EditorHelpers
    {
        /**
         * @brief 替换给定属性的值或在给定范围内插入新属性，同时保留注释。
         *
         * 此函数用于在指定的文本范围内替换特定属性的值，或在属性不存在时插入新属性。
         * 它会保留原有的注释，确保文档的结构和注释不被破坏。
         *
         * @param aEntryRange 要修改的文本范围
         * @param aAttributeName 要修改或插入的属性名称
         * @param aInsert 要插入的文本（新的属性值）
         * @return 修改后的文本范围字符串
         */
        QString VI_EXPORT GetInsertWithComments(const UtTextDocumentRange& aEntryRange,
            const QString& aAttributeName,
            const QString& aInsert);

        /**
         * @brief 在给定范围内替换指定属性的值或移除该属性。
         *
         * 此函数用于在指定的文本范围内替换特定属性的值，如果属性不存在则可能插入新属性。
         * 需要在调用此函数之前，调用者必须已经通过 `wizEnv.BeginUndoCapture()` 开始了一个撤销捕获，
         * 以确保操作可以被撤销。
         *
         * @param aEntryRange 要修改的文本范围
         * @param aAttributeName 要修改或插入的属性名称
         * @param aInsert 要插入的文本（新的属性值）
         * @pre 调用此函数之前，调用者必须已经调用了 `wizEnv.BeginUndoCapture()`
         * @return 文本替换是否成功
         */
        CPP17_NODISCARD bool VI_EXPORT ReplaceTextInEditor(const UtTextDocumentRange& aEntryRange,
            const QString& aAttributeName,
            const QString& aInsert);

        /**
         * @brief 获取指向定义起始位置的文本光标。
         *
         * 此函数用于在给定的代理节点中找到定义的起始位置，并返回一个指向该位置的光标。
         *
         * @param aNode 包含定义的代理节点
         * @return 指向定义起始位置的文本光标
         */
        QTextCursor VI_EXPORT FindStartCursor(const WsfPProxyNode& aNode) noexcept;

        /**
         * @brief 获取指向定义结束位置的文本光标。
         *
         * 此函数用于在给定的代理节点中找到定义的结束位置，并返回一个指向该位置的光标。
         *
         * @param aNode 包含定义的代理节点
         * @return 指向定义结束位置的文本光标
         */
        QTextCursor VI_EXPORT FindEndCursor(const WsfPProxyNode& aNode) noexcept;

        /**
         * @brief 获取给定行的缩进级别。
         *
         * 此函数用于计算并返回给定文本行的缩进级别。缩进级别通常通过计算行首的空格或制表符数量来确定。
         * 如果行完全由空白字符组成，则返回 -1。
         *
         * @param aLine 要计算缩进级别的文本行
         * @return 缩进级别（空格或制表符的数量），如果行完全为空白则返回 -1
         */
        int VI_EXPORT GetIndentLevel(const QString& aLine) noexcept;

        /**
         * @brief 构造要追加到指定 AFSIM 输入块的新文本。
         *
         * 此函数用于根据给定的光标范围、属性名称和数据值，构造要追加到 AFSIM 输入块中的新文本。
         *
         * @param aStartCursor 指向 AFSIM 输入块起始位置的文本光标
         * @param aEndCursor 指向 AFSIM 输入块结束位置的文本光标
         * @param aAttributeName 要追加的属性名称
         * @param aDataValue 要追加的属性值
         * @return 构造好的新文本字符串
         */
        QString VI_EXPORT ConstructTextToAppendToBlock(const QTextCursor& aStartCursor,
            const QTextCursor& aEndCursor,
            const QString& aAttributeName,
            const QString& aDataValue) noexcept;

        /**
         * @brief 在文本中添加一个新的属性。
         *
         * 此函数用于在给定的代理节点上下文中添加一个新的属性，包括属性名称和对应的值。
         *
         * @param aProxyNode 包含新属性上下文的代理节点
         * @param aAttributeName 要添加的属性名称
         * @param aDataValue 要添加的属性值
         */
        void VI_EXPORT AddNewAttributeInText(const WsfPProxyNode& aProxyNode,
            const QString& aAttributeName,
            const QString& aDataValue) noexcept;

        /**
         * @brief 将文本光标移动到前一个非空白标记的起始位置。
         *
         * 此函数用于将给定的文本光标移动到前一个非空白标记（如关键字、标识符等）的起始位置。
         * 可以指定移动模式（如移动光标或保持锚点）以及移动操作的次数。
         *
         * @param aCursor 要移动的文本光标（作为返回值参数）
         * @param aMoveMode 移动模式（移动光标或保持锚点）
         * @param aOperationCount 移动操作的次数，默认为1
         * @return 移动操作是否成功（模仿 `QTextCursor::movePosition` 的行为）
         */
        bool VI_EXPORT MoveToPreviousNonWhitespaceToken(QTextCursor& aCursor,
            QTextCursor::MoveMode aMoveMode,
            int                   aOperationCount = 1) noexcept;

        /**
         * @brief 判断给定的字符串是否仅由空白字符组成。
         *
         * 此函数用于检查输入的字符串是否全部由空白字符（如空格、制表符、换行符等）组成。
         *
         * @param aText 要检查的输入文本
         * @return 如果字符串仅由空白字符组成，则返回 `true`，否则返回 `false`
         */
        bool VI_EXPORT IsWhitespaceString(const QString& aText) noexcept;

        /**
         * @brief 将指定位置文本中的旧纬度和经度文本替换为新的纬度和经度文本。
         *
         * 此函数用于在给定的位置标记（如 "position" 或类似命令）的文本标记列表中，
         * 替换旧的纬度和经度文本为新的纬度和经度文本。
         *
         * @param aPositionTokens 来自 "position"（或类似）`UtTextDocumentRange` 的标记列表
         * @param aCommandIndex 在 `aPositionTokens` 中 "position"（或类似）命令的索引
         * @param aNewPosition 包含新纬度和经度信息的 `vespa::VaPosition` 对象
         * @return 替换操作是否成功
         */
        bool VI_EXPORT ReplacePositionText(QStringList& aPositionTokens,
            int                      aCommandIndex,
            const vespa::VaPosition& aNewPosition) noexcept;

        /**
         * @brief 将旧的 MGRS 坐标文本替换为新的 MGRS 坐标文本。
         *
         * 此函数用于在给定的 MGRS 坐标标记（如 "mgrs_coordinate" 或类似命令）的文本标记列表中，
         * 替换旧的 MGRS 坐标文本为新的 MGRS 坐标文本。
         *
         * @param aMGRS_Tokens 来自 "mgrs_coordinate"（或类似）`UtTextDocumentRange` 的标记列表
         * @param aCommandIndex 在 `aMGRS_Tokens` 中 "mgrs_coordinate"（或类似）命令的索引
         * @param aNewPosition 包含新 MGRS 坐标信息的 `vespa::VaPosition` 对象
         * @return 替换操作是否成功
         */
        bool VI_EXPORT ReplaceMGRS_Text(QStringList& aMGRS_Tokens, int aCommandIndex, const vespa::VaPosition& aNewPosition) noexcept;

        /**
         * @brief 将旧的单元属性文本替换为新的单元属性文本。
         *
         * 此函数用于在给定的单元属性标记的文本标记列表中，
         * 替换旧的单元属性文本为新的单元属性文本。
         *
         * @tparam UNITARY_PROPERTY 单元属性的类型，必须派生自 `UtUnitaryValue`
         * @param aUnitaryTokens 来自单元属性 `UtTextDocumentRange` 的标记列表
         * @param aCommandIndex 在 `aUnitaryTokens` 中单元属性命令的索引
         * @param aNewUnitary 包含新单元属性信息的对象
         * @return 替换操作是否成功
         */
        template<typename UNITARY_PROPERTY>
        bool ReplaceUnitaryText(QStringList& aUnitaryTokens, int aCommandIndex, UNITARY_PROPERTY& aNewUnitary) noexcept
        {
            // 静态断言，确保 UNITARY_PROPERTY 类型派生自 UtUnitaryValue
            static_assert(std::is_base_of<UtUnitaryValue<typename UNITARY_PROPERTY::UnitType>, UNITARY_PROPERTY>::value,
                "UNITARY_PROPERTY must derive from UtUnitaryValue");

            // 读取单元属性的值索引
            int valueIndex{ wizard::Editor::FindNextValidToken(aUnitaryTokens, aCommandIndex + 1) };
            if (valueIndex >= 0)
            {
                // 读取单元属性的单位索引
                int unitIndex{ wizard::Editor::FindNextValidToken(aUnitaryTokens, valueIndex + 1) };
                if (unitIndex >= 0)
                {
                    // 编辑单元属性
                    QString     unitaryValueStr;
                    std::string unitaryUnitStr{ aUnitaryTokens[unitIndex].toStdString() };
                    if (UtUnitAngle::IsUnitValid(unitaryUnitStr))
                    {
                        // 将单元属性转换为首选单位
                        if (aNewUnitary.ConvertToUnit(unitaryUnitStr))
                        {
                            // 将单元属性转换为字符串
                            std::ostringstream oss;
                            oss << aNewUnitary;
                            unitaryValueStr = QString::fromStdString(oss.str());
                            // 分割单元属性值和单位
                            QStringList unitaryValueStrSplit{ unitaryValueStr.split(' ') };
                            if (unitaryValueStrSplit.size() == 2)
                            {
                                // 存储单元属性的值部分（去除单位）
                                unitaryValueStr = unitaryValueStrSplit[0];
                            }
                        }
                    }

                    // 将旧的单元属性替换为新的单元属性值
                    aUnitaryTokens[valueIndex] = unitaryValueStr;
                    // 替换成功
                    return true;
                }
            }
            // 替换失败
            return false;
        }

        /**
         * @brief 在给定的编辑器中插入指定的文本，并将文本光标重置到块的起始位置。
         *
         * 此函数用于在指定的编辑器中，在给定的文本光标位置插入文本，
         * 并将光标的位置重置到插入文本所在块的起始位置。
         *
         * @param aEditorPtr 指向要插入文本的 `wizard::Editor` 实例的指针
         * @param aCursor 指向插入位置的 `QTextCursor`
         * @param aTextToInsert 要插入的文本
         */
        void VI_EXPORT InsertTextAndResetCursor(wizard::Editor* aEditorPtr, QTextCursor& aCursor, const QString& aTextToInsert) noexcept;

        /**
         * @brief 将 `vespa::VaPosition` 对象转换为 `QString` 字符串。
         *
         * 此函数用于将位置对象转换为字符串表示形式，
         * 字符串的格式由用户偏好设置决定，通常包括纬度和经度。
         *
         * @param aPosition 要转换的 `vespa::VaPosition` 对象
         * @return 表示位置的 `QString` 字符串
         *
         * @note 用户偏好设置决定了位置的纬度和经度的格式
         */
        QString VI_EXPORT GetPositionString(const vespa::VaPosition& aPosition) noexcept;

        /**
         * @brief 将 `UtUnitaryValue` 对象转换为 `QString` 字符串。
         *
         * 此函数用于将单元属性对象转换为字符串表示形式，
         * 字符串的格式由用户偏好设置决定，通常包括值和单位。
         *
         * @tparam UNITARY_TYPE 单元属性的值的类型
         * @tparam UNITARY_PROPERTY 单元属性的类型
         * @param aUnitary 要转换的 `UtUnitaryValue` 对象
         * @return 表示单元属性的 `QString` 字符串
         *
         * @note 用户偏好设置决定了单元属性的单位
         */
        template<wkf::ValueType UNITARY_TYPE, typename UNITARY_PROPERTY>
        QString GetUnitaryString(UNITARY_PROPERTY& aUnitary) noexcept
        {
            // 静态断言，确保 UNITARY_PROPERTY 类型派生自 UtUnitaryValue
            static_assert(std::is_base_of<UtUnitaryValue<typename UNITARY_PROPERTY::UnitType>, UNITARY_PROPERTY>::value,
                "UNITARY_PROPERTY must derive from UtUnitaryValue");

            // 获取单元属性的单位偏好设置
            int unitaryUnit{ wkfEnv.GetPreferenceObject<wkf::UnitsObject>()->GetUnit(UNITARY_TYPE) };
            // 将单元属性转换为首选单位
            aUnitary.ConvertToUnit(unitaryUnit);
            // 将单元属性转换为字符串
            std::ostringstream oss;
            oss << aUnitary;
            // 单元属性字符串包含值和单位，由单个空格字符分隔
            return QString::fromStdString(oss.str());
        }

    } // namespace EditorHelpers
} // namespace wizard

#endif // EDITOR_HELPERS_HPP