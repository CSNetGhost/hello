// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2016 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************
#include "PerformancePlugin.hpp"

#include <QMenu>

#include "PerformanceDialog.hpp"
#include "WkfAction.hpp"
#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(Performance::Plugin,
                          u8"性能",
                          u8"性能插件提供了一个对话框，可通过“开发人员”菜单访问该对话框，它能够进行记录操作 "
                          u8"应用程序的内存使用情况信息.",
                          "all")

Performance::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wkf::Plugin(aPluginName, aUniqueId)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   mDialog                        = new Dialog(mainWindowPtr);

   QMenu* devMenuPtr = mainWindowPtr->GetMenuByName("Developer");
   if (devMenuPtr)
   {
      wkf::Action* dlgActionPtr =
         new wkf::Action(QIcon::fromTheme("performance"), "Performance Analyzer...", mainWindowPtr);
      connect(dlgActionPtr, &QAction::triggered, mDialog.data(), &QDialog::show);
      devMenuPtr->addAction(dlgActionPtr);
   }
}

void Performance::Plugin::GuiUpdate()
{
   mDialog->Update();
}
