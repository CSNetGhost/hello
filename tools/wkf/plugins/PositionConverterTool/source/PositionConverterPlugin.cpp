// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2020 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "PositionConverterPlugin.hpp"

#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(PositionConverter::Plugin,
                          u8"位置转换器",
                          u8"位置转换器用于将位置数据从“LL”表示法转换为“MGRS”表示.",
                          "all")

PositionConverter::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wkf::Plugin(aPluginName, aUniqueId)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   mDialog                        = new Dialog(mainWindowPtr);

   QMenu* toolsMenuPtr = mainWindowPtr->GetMenuByName(u8"工具");
   if (toolsMenuPtr)
   {
      wkf::Action* dlgActionPtr =
         new wkf::Action(QIcon::fromTheme("location"), u8"坐标转换工具...", mainWindowPtr);
      connect(dlgActionPtr, &QAction::triggered, mDialog.data(), &QDialog::show);
      toolsMenuPtr->addAction(dlgActionPtr);
   }
}
