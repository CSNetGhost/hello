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

#ifndef EDITORDOCK_HPP
#define EDITORDOCK_HPP

#include <QTimer>

#include "ScriptDebugger.hpp"
#include "UtCallbackHolder.hpp"
#include "WkfDockWidget.hpp"

// ǰ������ Qt ��
class QLabel;
class QStatusBar;
class QTabBar;

namespace wizard
{
    class Editor;
    class TextSource;

    /**
     * @class EditorDock
     * @brief һ������ wizard::Editor �� wkf::DockWidget��
     *
     * EditorDock ��̳��� wkf::DockWidget������������������Ϊһ����ͣ���Ĵ��ڲ�����
     * ����һ���༭��ʵ�������ṩ��༭����صĹ��ܣ���״̬�����¡�����ģʽ�л��ȡ�
     */
    class EditorDock : public wkf::DockWidget
    {
        Q_OBJECT // ���� Qt ��Ԫ����ϵͳ��֧���ź���ۻ���

    public:
        /**
         * @brief ���캯��
         * @param aMainWindow ָ�������ڵ�ָ��
         * @param aEditor ָ��Ҫ������ͣ�������еı༭��ʵ����ָ��
         */
        EditorDock(QMainWindow* aMainWindow, Editor* aEditor);

        /**
         * @brief ��������
         */
        ~EditorDock() override;

        /**
         * @brief ��д���Ǳ������ķ����������Զ������������ʾ
         * @param aWidget ָ�����ڸ��Ǳ��������Զ��岿����ָ��
         */
        void OverrideTitleBar(QWidget* aWidget) override;

        /**
         * @brief ��ͣ�����ڵĿɼ��Է����仯ʱ����
         * @param aVisible ��ǰ�Ƿ�ɼ�
         */
        void VisibilityChanged(bool aVisible);

        /**
         * @brief ���������ı�Դ�����޸�ʱ����
         * @param aSourcePtr ָ�����޸ĵ��ı�Դ��ָ��
         */
        void ModificationChanged(wizard::TextSource* aSourcePtr);

        /**
         * @brief ��д�����Ĳ˵��¼��������������Զ����Ҽ��˵���Ϊ
         * @param aEvent �����Ĳ˵��¼�ָ��
         */
        void contextMenuEvent(QContextMenuEvent* aEvent) override;

        /**
         * @brief ��д�ر��¼���������������ͣ�����ڹر�ʱִ���ض��Ĳ���
         * @param event �ر��¼�ָ��
         */
        void closeEvent(QCloseEvent* event) override;

        /**
         * @brief ����ǩҳ�ر�����ʱ���ã�����Ϊ������رյı�ǩҳ����
         * @param aTabIndex ������رյı�ǩҳ����
         */
        void TabCloseRequested(int aTabIndex);

        /**
         * @brief ���༭�����λ�÷����仯ʱ����
         */
        void CursorPositionChanged();

        /**
         * @brief ��ȡ�����ڴ� EditorDock �е� wizard::Editor ʵ��
         * @return ָ������� wizard::Editor ��ָ��
         */
        Editor* GetEditor() { return mEditor; }

        /**
         * @brief ��ȡ��� EditorDock ������ QMainWindow ʵ���������汾��
         * @return ָ������� QMainWindow �ĳ���ָ��
         */
        const QMainWindow* GetMainWindow() const noexcept;

        /**
         * @brief ��ȡ��� EditorDock ������ QMainWindow ʵ�����ǳ����汾��
         * @return ָ������� QMainWindow ��ָ��
         */
        QMainWindow* GetMainWindow() noexcept;

        /**
         * @brief ������״̬�����仯ʱ����
         * @param aIsActive �Ƿ��ڵ��Ի״̬
         */
        void OnChangeDebug(bool aIsActive);

        /**
         * @brief ����ȫ��ģʽ
         */
        void DisableFullscreen();

        /**
         * @brief ����ȫ��ģʽ
         */
        void EnableFullscreen();

    protected:
        /**
         * @brief ��д�����¼��������������Զ���ͣ�����ڵĻ�����Ϊ
         * @param aEventPtr �����¼�ָ��
         */
        void paintEvent(QPaintEvent* aEventPtr) override;

        /**
         * @brief UtCallbackHolder ʵ�������ڹ���ص�����
         */
        UtCallbackHolder mCallbackHolder;

    private:
        /**
         * @brief ��ʼ�� EditorDock ���ڲ�״̬�� UI ���
         */
        void Initialize();

        /**
         * @brief �޸ı�ǩ�������ã����ܰ�����ӡ��Ƴ������ñ�ǩ��
         */
        void ModifyTabBars();

        /**
         * @brief ����״̬��������״̬���еĸ�����ǩ
         */
        void BuildStatusBar();

        /**
         * @brief ����״̬������ʾ���ݣ����ܰ������λ�á��༭״̬��
         */
        void StatusUpdate();

        /**
         * @brief ������ָ����ǩ�������ӣ������漰�ź���۵�����
         * @param aTabBarPtr ָ��Ҫ���µı�ǩ����ָ��
         */
        void UpdateConnections(QTabBar* aTabBarPtr);

        /**
         * @brief ����ͣ�����ڵı���
         * @param aOptions ����ͣ�����ڱ���� QStyleOptionDockWidget ����
         */
        void UpdateDockTitle(QStyleOptionDockWidget& aOptions) noexcept;

        // ��Ա����

        /**
         * @brief ָ������ڴ� EditorDock �е� wizard::Editor ʵ����ָ��
         */
        Editor* mEditor;

        /**
         * @brief ��ʱ�������ڶ��ڸ���״̬������ʾ����
         */
        QTimer      mStatusUpdateTimer;

        /**
         * @brief ָ��״̬����ָ�룬������ʾ�༭����״̬��Ϣ
         */
        QStatusBar* mStatusBar;

        /**
         * @brief ָ����ʾ��ǰ�кŵı�ǩָ��
         */
        QLabel* mLineLabelPtr;

        /**
         * @brief ָ����ʾ��ǰ�кŵı�ǩָ��
         */
        QLabel* mColumnLabelPtr;

        /**
         * @brief ָ����ʾ����״̬��Ϣ�������״̬���ı�ǩָ��
         */
        QLabel* mStatusLabelPtr;

        /**
         * @brief ��ʾ�Ƿ��ڵ��Ի״̬
         */
        bool        mDebugActive;

        /**
         * @brief ���ǩ���ر��ź����ӵ� QMetaObject::Connection ����
         *        ���ڹ����ź���۵����ӣ�ȷ���ڲ���Ҫʱ���ԶϿ�����
         */
        QMetaObject::Connection mTabCloseConnection;
    };
} // namespace wizard

#endif // EDITORDOCK_HPP