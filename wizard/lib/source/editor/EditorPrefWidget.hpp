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

#include <QTextCharFormat>  // 包含 Qt 的文本字符格式类，用于定义文本的样式，如字体、颜色等

#include "EditorPrefObject.hpp"  // 包含编辑器偏好设置对象的定义
#include "WkfPrefWidget.hpp"     // 包含基础偏好设置窗口部件的定义
#include "ui_EditorPrefWidget.h" // 包含由 Qt Designer 生成的 UI 界面头文件

// 前向声明 Qt 类
class QListWidgetItem;  // 前向声明 QListWidgetItem，减少编译依赖

namespace wizard
{
    /**
     * @class EditorPrefWidget
     * @brief 编辑器偏好设置窗口部件类，继承自 wkf::PrefWidgetT<EditorPrefObject>。
     *
     * 此类用于提供一个用户界面，使用户可以查看和修改编辑器的偏好设置。
     * 它继承自一个模板化的偏好设置窗口部件基类，与 `EditorPrefObject` 配合使用，
     * 实现偏好设置的读取、显示和应用功能。
     */
    class EditorPrefWidget : public wkf::PrefWidgetT<EditorPrefObject>
    {
    public:
        /**
         * @brief 构造函数
         * @param parent 指向父 QWidget 的指针，用于对象树管理
         */
        EditorPrefWidget(QWidget* parent = nullptr);

        /**
         * @brief 析构函数
         */
        ~EditorPrefWidget() override = default;

        /**
         * @brief 获取当前类别的提示信息。
         * @return 类别提示字符串，这里返回 "Editor"
         */
        QString GetCategoryHint() const override { return "Editor"; }

        /**
         * @brief 获取当前类别提示的优先级。
         * @return 是否具有优先级，这里返回 `true`
         */
        bool    GetCategoryHintPriority() const override { return true; }

    private:
        /**
         * @brief 重写显示事件处理函数，当窗口部件显示时调用。
         * @param aEvent 显示事件指针
         */
        void showEvent(QShowEvent* aEvent) override;

        /**
         * @brief 从给定的偏好设置数据中读取并更新 UI 界面。
         * @param aPrefData 包含偏好设置数据的 `EditorPrefData` 结构体
         */
        void ReadPreferenceData(const EditorPrefData& aPrefData) override;

        /**
         * @brief 将当前 UI 界面中的偏好设置写入到给定的 `EditorPrefData` 结构体中。
         * @param aPrefData 包含偏好设置数据的 `EditorPrefData` 结构体（作为返回值参数）
         */
        void WritePreferenceData(EditorPrefData& aPrefData) override;

        /**
         * @brief 更新预览区域，以反映当前的样式设置。
         */
        void            UpdatePreview();

        /**
         * @brief 根据给定的 `TextStyle` 创建并返回一个 `QTextCharFormat` 对象。
         * @param aStyle 要转换为 `QTextCharFormat` 的 `TextStyle` 结构体
         * @return 对应的 `QTextCharFormat` 对象
         */
        QTextCharFormat MakeFormat(const TextStyle& aStyle) const;

        /**
         * @brief 更新样式设置，可能包括刷新 UI 中的样式列表或应用新的样式。
         */
        void            UpdateStyle();

        /**
         * @brief 当用户点击样式列表中的某个项时调用。
         * @param aItem 指向被点击的 `QListWidgetItem` 的指针
         */
        void            StyleClicked(QListWidgetItem* aItem);

        // 成员变量

        Ui::EditorPrefWidget   mUi;                  ///< Qt Designer 生成的 UI 界面对象，用于访问和管理 UI 组件
        std::map<int, QString> mStyleNames;           ///< 映射样式索引到样式名称，用于在 UI 中显示样式名称
        bool                   mDarkThemed;           ///< 表示当前是否使用深色主题，用于决定应用哪种颜色方案
    };
} // namespace wizard

#endif // EDITORPREFWIDGET_HPP