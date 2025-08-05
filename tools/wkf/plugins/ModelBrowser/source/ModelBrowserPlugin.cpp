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
#include "ModelBrowserPlugin.hpp"

#include <QMenu>
#include <QString>
#include <osg/Node>

#include "ModelBrowserWidget.hpp"
#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"
#include "WkfVtkEnvironment.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(
   ModelBrowser::Plugin,
   u8"模型浏览器",
   u8"模型浏览器”插件在“工具”菜单中添加了一个选项，可打开一个可折叠窗口以查看和修改模型.",
   "all")

ModelBrowser::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wkf::Plugin(aPluginName, aUniqueId)
   , mDockWidget(nullptr)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();

   QMenu* toolsMenuPtr = mainWindowPtr->GetMenuByName(u8"工具");
   if (toolsMenuPtr)
   {
      wkf::Action* dlgActionPtr = new wkf::Action(QIcon::fromTheme("airplane"), u8"模型查看器...", mainWindowPtr);
      connect(dlgActionPtr, &QAction::triggered, this, &Plugin::Launch);
      toolsMenuPtr->addAction(dlgActionPtr);
   }
   QMenu* devMenuPtr = mainWindowPtr->GetMenuByName("Developer");
   if (devMenuPtr)
   {
      wkf::Action* reload = new wkf::Action(QIcon::fromTheme(""), "Reload Model Database", mainWindowPtr);
      connect(reload, &QAction::triggered, this, &Plugin::Reload);
      devMenuPtr->addAction(reload);
   }
}

QList<wkf::Tip> ModelBrowser::Plugin::GetTips() const
{
   QList<wkf::Tip> tips;
   tips.append(wkf::Tip(u8"模型查看器",
                        u8"您可以查看现有的平台模型，并使用“模型”功能加载其他平台模型"
                        u8"浏览器位于“工具”菜单中.",
                        "wkf_plugin/" + wkfEnv.GetApplicationPrefix() + "_model_viewer.html",
                        u8"模型查看器"));
   return tips;
}

void ModelBrowser::Plugin::Launch()
{
   if (!mDockWidget)
   {
      mDockWidget = new wkf::DockWidget("model viewer", wkfEnv.GetMainWindow()->centralWidget(), Qt::WindowFlags());
      mDockWidget->setWidget(new Widget(mDockWidget));
      mDockWidget->setWindowTitle(u8"模型查看器");
   }
   mDockWidget->show();
}

void ModelBrowser::Plugin::Reload()
{
   vaEnv.GetModelDatabase()->Reset();
   wkfEnv.LoadModelDatabase();
}
