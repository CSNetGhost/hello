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

// 前置声明 Qt 类
class QLabel;
class QStatusBar;
class QTabBar;

namespace wizard
{
    class Editor;
    class TextSource;

    /**
     * @class EditorDock
     * @brief 一个包含 wizard::Editor 的 wkf::DockWidget。
     *
     * EditorDock 类继承自 wkf::DockWidget，用于在主窗口中作为一个可停靠的窗口部件，
     * 包含一个编辑器实例，并提供与编辑器相关的功能，如状态栏更新、调试模式切换等。
     */
    class EditorDock : public wkf::DockWidget
    {
        Q_OBJECT // 启用 Qt 的元对象系统，支持信号与槽机制

    public:
        /**
         * @brief 构造函数
         * @param aMainWindow 指向主窗口的指针
         * @param aEditor 指向要包含在停靠窗口中的编辑器实例的指针
         */
        EditorDock(QMainWindow* aMainWindow, Editor* aEditor);

        /**
         * @brief 析构函数
         */
        ~EditorDock() override;

        /**
         * @brief 重写覆盖标题栏的方法，允许自定义标题栏的显示
         * @param aWidget 指向用于覆盖标题栏的自定义部件的指针
         */
        void OverrideTitleBar(QWidget* aWidget) override;

        /**
         * @brief 当停靠窗口的可见性发生变化时调用
         * @param aVisible 当前是否可见
         */
        void VisibilityChanged(bool aVisible);

        /**
         * @brief 当关联的文本源发生修改时调用
         * @param aSourcePtr 指向发生修改的文本源的指针
         */
        void ModificationChanged(wizard::TextSource* aSourcePtr);

        /**
         * @brief 重写上下文菜单事件处理函数，用于自定义右键菜单行为
         * @param aEvent 上下文菜单事件指针
         */
        void contextMenuEvent(QContextMenuEvent* aEvent) override;

        /**
         * @brief 重写关闭事件处理函数，用于在停靠窗口关闭时执行特定的操作
         * @param event 关闭事件指针
         */
        void closeEvent(QCloseEvent* event) override;

        /**
         * @brief 当标签页关闭请求时调用，参数为被请求关闭的标签页索引
         * @param aTabIndex 被请求关闭的标签页索引
         */
        void TabCloseRequested(int aTabIndex);

        /**
         * @brief 当编辑器光标位置发生变化时调用
         */
        void CursorPositionChanged();

        /**
         * @brief 获取包含在此 EditorDock 中的 wizard::Editor 实例
         * @return 指向包含的 wizard::Editor 的指针
         */
        Editor* GetEditor() { return mEditor; }

        /**
         * @brief 获取与此 EditorDock 关联的 QMainWindow 实例（常量版本）
         * @return 指向关联的 QMainWindow 的常量指针
         */
        const QMainWindow* GetMainWindow() const noexcept;

        /**
         * @brief 获取与此 EditorDock 关联的 QMainWindow 实例（非常量版本）
         * @return 指向关联的 QMainWindow 的指针
         */
        QMainWindow* GetMainWindow() noexcept;

        /**
         * @brief 当调试状态发生变化时调用
         * @param aIsActive 是否处于调试活动状态
         */
        void OnChangeDebug(bool aIsActive);

        /**
         * @brief 禁用全屏模式
         */
        void DisableFullscreen();

        /**
         * @brief 启用全屏模式
         */
        void EnableFullscreen();

    protected:
        /**
         * @brief 重写绘制事件处理函数，用于自定义停靠窗口的绘制行为
         * @param aEventPtr 绘制事件指针
         */
        void paintEvent(QPaintEvent* aEventPtr) override;

        /**
         * @brief UtCallbackHolder 实例，用于管理回调函数
         */
        UtCallbackHolder mCallbackHolder;

    private:
        /**
         * @brief 初始化 EditorDock 的内部状态和 UI 组件
         */
        void Initialize();

        /**
         * @brief 修改标签栏的设置，可能包括添加、移除或配置标签栏
         */
        void ModifyTabBars();

        /**
         * @brief 构建状态栏，设置状态栏中的各个标签
         */
        void BuildStatusBar();

        /**
         * @brief 更新状态栏的显示内容，可能包括光标位置、编辑状态等
         */
        void StatusUpdate();

        /**
         * @brief 更新与指定标签栏的连接，可能涉及信号与槽的连接
         * @param aTabBarPtr 指向要更新的标签栏的指针
         */
        void UpdateConnections(QTabBar* aTabBarPtr);

        /**
         * @brief 更新停靠窗口的标题
         * @param aOptions 包含停靠窗口标题的 QStyleOptionDockWidget 引用
         */
        void UpdateDockTitle(QStyleOptionDockWidget& aOptions) noexcept;

        // 成员变量

        /**
         * @brief 指向包含在此 EditorDock 中的 wizard::Editor 实例的指针
         */
        Editor* mEditor;

        /**
         * @brief 定时器，用于定期更新状态栏的显示内容
         */
        QTimer      mStatusUpdateTimer;

        /**
         * @brief 指向状态栏的指针，用于显示编辑器的状态信息
         */
        QStatusBar* mStatusBar;

        /**
         * @brief 指向显示当前行号的标签指针
         */
        QLabel* mLineLabelPtr;

        /**
         * @brief 指向显示当前列号的标签指针
         */
        QLabel* mColumnLabelPtr;

        /**
         * @brief 指向显示其他状态信息（如调试状态）的标签指针
         */
        QLabel* mStatusLabelPtr;

        /**
         * @brief 表示是否处于调试活动状态
         */
        bool        mDebugActive;

        /**
         * @brief 与标签栏关闭信号连接的 QMetaObject::Connection 对象，
         *        用于管理信号与槽的连接，确保在不需要时可以断开连接
         */
        QMetaObject::Connection mTabCloseConnection;
    };
} // namespace wizard

#endif // EDITORDOCK_HPP