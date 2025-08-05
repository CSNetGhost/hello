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

#ifndef EDITORPREFWIDGET_HPP
#define EDITORPREFWIDGET_HPP

#include <QTextCharFormat>  // ���� Qt ���ı��ַ���ʽ�࣬���ڶ����ı�����ʽ�������塢��ɫ��

#include "EditorPrefObject.hpp"  // �����༭��ƫ�����ö���Ķ���
#include "WkfPrefWidget.hpp"     // ��������ƫ�����ô��ڲ����Ķ���
#include "ui_EditorPrefWidget.h" // ������ Qt Designer ���ɵ� UI ����ͷ�ļ�

// ǰ������ Qt ��
class QListWidgetItem;  // ǰ������ QListWidgetItem�����ٱ�������

namespace wizard
{
    /**
     * @class EditorPrefWidget
     * @brief �༭��ƫ�����ô��ڲ����࣬�̳��� wkf::PrefWidgetT<EditorPrefObject>��
     *
     * ���������ṩһ���û����棬ʹ�û����Բ鿴���޸ı༭����ƫ�����á�
     * ���̳���һ��ģ�廯��ƫ�����ô��ڲ������࣬�� `EditorPrefObject` ���ʹ�ã�
     * ʵ��ƫ�����õĶ�ȡ����ʾ��Ӧ�ù��ܡ�
     */
    class EditorPrefWidget : public wkf::PrefWidgetT<EditorPrefObject>
    {
    public:
        /**
         * @brief ���캯��
         * @param parent ָ�� QWidget ��ָ�룬���ڶ���������
         */
        EditorPrefWidget(QWidget* parent = nullptr);

        /**
         * @brief ��������
         */
        ~EditorPrefWidget() override = default;

        /**
         * @brief ��ȡ��ǰ������ʾ��Ϣ��
         * @return �����ʾ�ַ��������ﷵ�� "Editor"
         */
        QString GetCategoryHint() const override { return "Editor"; }

        /**
         * @brief ��ȡ��ǰ�����ʾ�����ȼ���
         * @return �Ƿ�������ȼ������ﷵ�� `true`
         */
        bool    GetCategoryHintPriority() const override { return true; }

    private:
        /**
         * @brief ��д��ʾ�¼��������������ڲ�����ʾʱ���á�
         * @param aEvent ��ʾ�¼�ָ��
         */
        void showEvent(QShowEvent* aEvent) override;

        /**
         * @brief �Ӹ�����ƫ�����������ж�ȡ������ UI ���档
         * @param aPrefData ����ƫ���������ݵ� `EditorPrefData` �ṹ��
         */
        void ReadPreferenceData(const EditorPrefData& aPrefData) override;

        /**
         * @brief ����ǰ UI �����е�ƫ������д�뵽������ `EditorPrefData` �ṹ���С�
         * @param aPrefData ����ƫ���������ݵ� `EditorPrefData` �ṹ�壨��Ϊ����ֵ������
         */
        void WritePreferenceData(EditorPrefData& aPrefData) override;

        /**
         * @brief ����Ԥ�������Է�ӳ��ǰ����ʽ���á�
         */
        void            UpdatePreview();

        /**
         * @brief ���ݸ����� `TextStyle` ����������һ�� `QTextCharFormat` ����
         * @param aStyle Ҫת��Ϊ `QTextCharFormat` �� `TextStyle` �ṹ��
         * @return ��Ӧ�� `QTextCharFormat` ����
         */
        QTextCharFormat MakeFormat(const TextStyle& aStyle) const;

        /**
         * @brief ������ʽ���ã����ܰ���ˢ�� UI �е���ʽ�б��Ӧ���µ���ʽ��
         */
        void            UpdateStyle();

        /**
         * @brief ���û������ʽ�б��е�ĳ����ʱ���á�
         * @param aItem ָ�򱻵���� `QListWidgetItem` ��ָ��
         */
        void            StyleClicked(QListWidgetItem* aItem);

        // ��Ա����

        Ui::EditorPrefWidget   mUi;                  ///< Qt Designer ���ɵ� UI ����������ڷ��ʺ͹��� UI ���
        std::map<int, QString> mStyleNames;           ///< ӳ����ʽ��������ʽ���ƣ������� UI ����ʾ��ʽ����
        bool                   mDarkThemed;           ///< ��ʾ��ǰ�Ƿ�ʹ����ɫ���⣬���ھ���Ӧ��������ɫ����
    };
} // namespace wizard

#endif // EDITORPREFWIDGET_HPP