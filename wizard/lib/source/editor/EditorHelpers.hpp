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

#include <sstream>        // �����ַ�������ص��࣬�����ַ����ĸ�ʽ�������

#include <QString>        // Qt ���ַ����࣬���ڴ��� Unicode �ַ���
#include <QStringList>    // Qt ���ַ����б��࣬���ڴ洢����ַ���
#include <QTextCursor>    // Qt ���ı�����࣬���ڲ����ı����ݵĹ��λ��

// Util Includes
#include "UtCompilerAttributes.hpp"  // ���ܰ�����������ص����Ի�궨��
class UtTextDocumentRange;           // ǰ����������ʾ�ı��ĵ��ķ�Χ

// WKF Includes
#include "WkfEnvironment.hpp"        // ���ܰ���������ܵĻ������û�ȫ������
#include "WkfUnitsObject.hpp"        // ���ܰ����뵥λ��صĶ������

// WSF Includes
#include "WsfPProxyNode.hpp"         // ǰ�����������ܱ�ʾĳ�ִ���ڵ�

// Wizard Includes
#include "Editor.hpp"                // �����༭����Ķ���
#include "ViExport.hpp"              // ���ܰ��������꣬���ڿ��Ʒ��ŵĿɼ���

namespace vespa
{
    class VaPosition;                // ǰ����������ʾλ����ص���
}

namespace wizard
{
    class Editor;                    // ǰ���������༭����

    namespace EditorHelpers
    {
        /**
         * @brief �滻�������Ե�ֵ���ڸ�����Χ�ڲ��������ԣ�ͬʱ����ע�͡�
         *
         * �˺���������ָ�����ı���Χ���滻�ض����Ե�ֵ���������Բ�����ʱ���������ԡ�
         * ���ᱣ��ԭ�е�ע�ͣ�ȷ���ĵ��Ľṹ��ע�Ͳ����ƻ���
         *
         * @param aEntryRange Ҫ�޸ĵ��ı���Χ
         * @param aAttributeName Ҫ�޸Ļ�������������
         * @param aInsert Ҫ������ı����µ�����ֵ��
         * @return �޸ĺ���ı���Χ�ַ���
         */
        QString VI_EXPORT GetInsertWithComments(const UtTextDocumentRange& aEntryRange,
            const QString& aAttributeName,
            const QString& aInsert);

        /**
         * @brief �ڸ�����Χ���滻ָ�����Ե�ֵ���Ƴ������ԡ�
         *
         * �˺���������ָ�����ı���Χ���滻�ض����Ե�ֵ��������Բ���������ܲ��������ԡ�
         * ��Ҫ�ڵ��ô˺���֮ǰ�������߱����Ѿ�ͨ�� `wizEnv.BeginUndoCapture()` ��ʼ��һ����������
         * ��ȷ���������Ա�������
         *
         * @param aEntryRange Ҫ�޸ĵ��ı���Χ
         * @param aAttributeName Ҫ�޸Ļ�������������
         * @param aInsert Ҫ������ı����µ�����ֵ��
         * @pre ���ô˺���֮ǰ�������߱����Ѿ������� `wizEnv.BeginUndoCapture()`
         * @return �ı��滻�Ƿ�ɹ�
         */
        CPP17_NODISCARD bool VI_EXPORT ReplaceTextInEditor(const UtTextDocumentRange& aEntryRange,
            const QString& aAttributeName,
            const QString& aInsert);

        /**
         * @brief ��ȡָ������ʼλ�õ��ı���ꡣ
         *
         * �˺��������ڸ����Ĵ���ڵ����ҵ��������ʼλ�ã�������һ��ָ���λ�õĹ�ꡣ
         *
         * @param aNode ��������Ĵ���ڵ�
         * @return ָ������ʼλ�õ��ı����
         */
        QTextCursor VI_EXPORT FindStartCursor(const WsfPProxyNode& aNode) noexcept;

        /**
         * @brief ��ȡָ�������λ�õ��ı���ꡣ
         *
         * �˺��������ڸ����Ĵ���ڵ����ҵ�����Ľ���λ�ã�������һ��ָ���λ�õĹ�ꡣ
         *
         * @param aNode ��������Ĵ���ڵ�
         * @return ָ�������λ�õ��ı����
         */
        QTextCursor VI_EXPORT FindEndCursor(const WsfPProxyNode& aNode) noexcept;

        /**
         * @brief ��ȡ�����е���������
         *
         * �˺������ڼ��㲢���ظ����ı��е�����������������ͨ��ͨ���������׵Ŀո���Ʊ��������ȷ����
         * �������ȫ�ɿհ��ַ���ɣ��򷵻� -1��
         *
         * @param aLine Ҫ��������������ı���
         * @return �������𣨿ո���Ʊ�������������������ȫΪ�հ��򷵻� -1
         */
        int VI_EXPORT GetIndentLevel(const QString& aLine) noexcept;

        /**
         * @brief ����Ҫ׷�ӵ�ָ�� AFSIM ���������ı���
         *
         * �˺������ڸ��ݸ����Ĺ�귶Χ���������ƺ�����ֵ������Ҫ׷�ӵ� AFSIM ������е����ı���
         *
         * @param aStartCursor ָ�� AFSIM �������ʼλ�õ��ı����
         * @param aEndCursor ָ�� AFSIM ��������λ�õ��ı����
         * @param aAttributeName Ҫ׷�ӵ���������
         * @param aDataValue Ҫ׷�ӵ�����ֵ
         * @return ����õ����ı��ַ���
         */
        QString VI_EXPORT ConstructTextToAppendToBlock(const QTextCursor& aStartCursor,
            const QTextCursor& aEndCursor,
            const QString& aAttributeName,
            const QString& aDataValue) noexcept;

        /**
         * @brief ���ı������һ���µ����ԡ�
         *
         * �˺��������ڸ����Ĵ���ڵ������������һ���µ����ԣ������������ƺͶ�Ӧ��ֵ��
         *
         * @param aProxyNode ���������������ĵĴ���ڵ�
         * @param aAttributeName Ҫ��ӵ���������
         * @param aDataValue Ҫ��ӵ�����ֵ
         */
        void VI_EXPORT AddNewAttributeInText(const WsfPProxyNode& aProxyNode,
            const QString& aAttributeName,
            const QString& aDataValue) noexcept;

        /**
         * @brief ���ı�����ƶ���ǰһ���ǿհױ�ǵ���ʼλ�á�
         *
         * �˺������ڽ��������ı�����ƶ���ǰһ���ǿհױ�ǣ���ؼ��֡���ʶ���ȣ�����ʼλ�á�
         * ����ָ���ƶ�ģʽ�����ƶ����򱣳�ê�㣩�Լ��ƶ������Ĵ�����
         *
         * @param aCursor Ҫ�ƶ����ı���꣨��Ϊ����ֵ������
         * @param aMoveMode �ƶ�ģʽ���ƶ����򱣳�ê�㣩
         * @param aOperationCount �ƶ������Ĵ�����Ĭ��Ϊ1
         * @return �ƶ������Ƿ�ɹ���ģ�� `QTextCursor::movePosition` ����Ϊ��
         */
        bool VI_EXPORT MoveToPreviousNonWhitespaceToken(QTextCursor& aCursor,
            QTextCursor::MoveMode aMoveMode,
            int                   aOperationCount = 1) noexcept;

        /**
         * @brief �жϸ������ַ����Ƿ���ɿհ��ַ���ɡ�
         *
         * �˺������ڼ��������ַ����Ƿ�ȫ���ɿհ��ַ�����ո��Ʊ�������з��ȣ���ɡ�
         *
         * @param aText Ҫ���������ı�
         * @return ����ַ������ɿհ��ַ���ɣ��򷵻� `true`�����򷵻� `false`
         */
        bool VI_EXPORT IsWhitespaceString(const QString& aText) noexcept;

        /**
         * @brief ��ָ��λ���ı��еľ�γ�Ⱥ;����ı��滻Ϊ�µ�γ�Ⱥ;����ı���
         *
         * �˺��������ڸ�����λ�ñ�ǣ��� "position" ������������ı�����б��У�
         * �滻�ɵ�γ�Ⱥ;����ı�Ϊ�µ�γ�Ⱥ;����ı���
         *
         * @param aPositionTokens ���� "position"�������ƣ�`UtTextDocumentRange` �ı���б�
         * @param aCommandIndex �� `aPositionTokens` �� "position"�������ƣ����������
         * @param aNewPosition ������γ�Ⱥ;�����Ϣ�� `vespa::VaPosition` ����
         * @return �滻�����Ƿ�ɹ�
         */
        bool VI_EXPORT ReplacePositionText(QStringList& aPositionTokens,
            int                      aCommandIndex,
            const vespa::VaPosition& aNewPosition) noexcept;

        /**
         * @brief ���ɵ� MGRS �����ı��滻Ϊ�µ� MGRS �����ı���
         *
         * �˺��������ڸ����� MGRS �����ǣ��� "mgrs_coordinate" ������������ı�����б��У�
         * �滻�ɵ� MGRS �����ı�Ϊ�µ� MGRS �����ı���
         *
         * @param aMGRS_Tokens ���� "mgrs_coordinate"�������ƣ�`UtTextDocumentRange` �ı���б�
         * @param aCommandIndex �� `aMGRS_Tokens` �� "mgrs_coordinate"�������ƣ����������
         * @param aNewPosition ������ MGRS ������Ϣ�� `vespa::VaPosition` ����
         * @return �滻�����Ƿ�ɹ�
         */
        bool VI_EXPORT ReplaceMGRS_Text(QStringList& aMGRS_Tokens, int aCommandIndex, const vespa::VaPosition& aNewPosition) noexcept;

        /**
         * @brief ���ɵĵ�Ԫ�����ı��滻Ϊ�µĵ�Ԫ�����ı���
         *
         * �˺��������ڸ����ĵ�Ԫ���Ա�ǵ��ı�����б��У�
         * �滻�ɵĵ�Ԫ�����ı�Ϊ�µĵ�Ԫ�����ı���
         *
         * @tparam UNITARY_PROPERTY ��Ԫ���Ե����ͣ����������� `UtUnitaryValue`
         * @param aUnitaryTokens ���Ե�Ԫ���� `UtTextDocumentRange` �ı���б�
         * @param aCommandIndex �� `aUnitaryTokens` �е�Ԫ�������������
         * @param aNewUnitary �����µ�Ԫ������Ϣ�Ķ���
         * @return �滻�����Ƿ�ɹ�
         */
        template<typename UNITARY_PROPERTY>
        bool ReplaceUnitaryText(QStringList& aUnitaryTokens, int aCommandIndex, UNITARY_PROPERTY& aNewUnitary) noexcept
        {
            // ��̬���ԣ�ȷ�� UNITARY_PROPERTY ���������� UtUnitaryValue
            static_assert(std::is_base_of<UtUnitaryValue<typename UNITARY_PROPERTY::UnitType>, UNITARY_PROPERTY>::value,
                "UNITARY_PROPERTY must derive from UtUnitaryValue");

            // ��ȡ��Ԫ���Ե�ֵ����
            int valueIndex{ wizard::Editor::FindNextValidToken(aUnitaryTokens, aCommandIndex + 1) };
            if (valueIndex >= 0)
            {
                // ��ȡ��Ԫ���Եĵ�λ����
                int unitIndex{ wizard::Editor::FindNextValidToken(aUnitaryTokens, valueIndex + 1) };
                if (unitIndex >= 0)
                {
                    // �༭��Ԫ����
                    QString     unitaryValueStr;
                    std::string unitaryUnitStr{ aUnitaryTokens[unitIndex].toStdString() };
                    if (UtUnitAngle::IsUnitValid(unitaryUnitStr))
                    {
                        // ����Ԫ����ת��Ϊ��ѡ��λ
                        if (aNewUnitary.ConvertToUnit(unitaryUnitStr))
                        {
                            // ����Ԫ����ת��Ϊ�ַ���
                            std::ostringstream oss;
                            oss << aNewUnitary;
                            unitaryValueStr = QString::fromStdString(oss.str());
                            // �ָԪ����ֵ�͵�λ
                            QStringList unitaryValueStrSplit{ unitaryValueStr.split(' ') };
                            if (unitaryValueStrSplit.size() == 2)
                            {
                                // �洢��Ԫ���Ե�ֵ���֣�ȥ����λ��
                                unitaryValueStr = unitaryValueStrSplit[0];
                            }
                        }
                    }

                    // ���ɵĵ�Ԫ�����滻Ϊ�µĵ�Ԫ����ֵ
                    aUnitaryTokens[valueIndex] = unitaryValueStr;
                    // �滻�ɹ�
                    return true;
                }
            }
            // �滻ʧ��
            return false;
        }

        /**
         * @brief �ڸ����ı༭���в���ָ�����ı��������ı�������õ������ʼλ�á�
         *
         * �˺���������ָ���ı༭���У��ڸ������ı����λ�ò����ı���
         * ��������λ�����õ������ı����ڿ����ʼλ�á�
         *
         * @param aEditorPtr ָ��Ҫ�����ı��� `wizard::Editor` ʵ����ָ��
         * @param aCursor ָ�����λ�õ� `QTextCursor`
         * @param aTextToInsert Ҫ������ı�
         */
        void VI_EXPORT InsertTextAndResetCursor(wizard::Editor* aEditorPtr, QTextCursor& aCursor, const QString& aTextToInsert) noexcept;

        /**
         * @brief �� `vespa::VaPosition` ����ת��Ϊ `QString` �ַ�����
         *
         * �˺������ڽ�λ�ö���ת��Ϊ�ַ�����ʾ��ʽ��
         * �ַ����ĸ�ʽ���û�ƫ�����þ�����ͨ������γ�Ⱥ;��ȡ�
         *
         * @param aPosition Ҫת���� `vespa::VaPosition` ����
         * @return ��ʾλ�õ� `QString` �ַ���
         *
         * @note �û�ƫ�����þ�����λ�õ�γ�Ⱥ;��ȵĸ�ʽ
         */
        QString VI_EXPORT GetPositionString(const vespa::VaPosition& aPosition) noexcept;

        /**
         * @brief �� `UtUnitaryValue` ����ת��Ϊ `QString` �ַ�����
         *
         * �˺������ڽ���Ԫ���Զ���ת��Ϊ�ַ�����ʾ��ʽ��
         * �ַ����ĸ�ʽ���û�ƫ�����þ�����ͨ������ֵ�͵�λ��
         *
         * @tparam UNITARY_TYPE ��Ԫ���Ե�ֵ������
         * @tparam UNITARY_PROPERTY ��Ԫ���Ե�����
         * @param aUnitary Ҫת���� `UtUnitaryValue` ����
         * @return ��ʾ��Ԫ���Ե� `QString` �ַ���
         *
         * @note �û�ƫ�����þ����˵�Ԫ���Եĵ�λ
         */
        template<wkf::ValueType UNITARY_TYPE, typename UNITARY_PROPERTY>
        QString GetUnitaryString(UNITARY_PROPERTY& aUnitary) noexcept
        {
            // ��̬���ԣ�ȷ�� UNITARY_PROPERTY ���������� UtUnitaryValue
            static_assert(std::is_base_of<UtUnitaryValue<typename UNITARY_PROPERTY::UnitType>, UNITARY_PROPERTY>::value,
                "UNITARY_PROPERTY must derive from UtUnitaryValue");

            // ��ȡ��Ԫ���Եĵ�λƫ������
            int unitaryUnit{ wkfEnv.GetPreferenceObject<wkf::UnitsObject>()->GetUnit(UNITARY_TYPE) };
            // ����Ԫ����ת��Ϊ��ѡ��λ
            aUnitary.ConvertToUnit(unitaryUnit);
            // ����Ԫ����ת��Ϊ�ַ���
            std::ostringstream oss;
            oss << aUnitary;
            // ��Ԫ�����ַ�������ֵ�͵�λ���ɵ����ո��ַ��ָ�
            return QString::fromStdString(oss.str());
        }

    } // namespace EditorHelpers
} // namespace wizard

#endif // EDITOR_HELPERS_HPP