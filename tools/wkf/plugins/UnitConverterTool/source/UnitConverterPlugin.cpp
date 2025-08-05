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

#include "UnitConverterPlugin.hpp"

#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"


WKF_PLUGIN_DEFINE_SYMBOLS(UnitConverter::Plugin,
                          u8"单位转换工具",
                          u8"该单位转换器提供了一个可通过“工具”菜单访问的对话框，用于进行转换操作。 "
                          u8"在常见的度量单位之间.",
                          "all")

UnitConverter::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wkf::Plugin(aPluginName, aUniqueId)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   mDialog                        = new Dialog(mainWindowPtr);

   QMenu* toolsMenuPtr = mainWindowPtr->GetMenuByName(u8"工具");
   if (toolsMenuPtr)
   {
      wkf::Action* unitActionPtr = new wkf::Action(QIcon::fromTheme("switch"), u8"单位转换器工具...", mainWindowPtr);
      connect(unitActionPtr, &QAction::triggered, mDialog.data(), &QDialog::show);
      toolsMenuPtr->addAction(unitActionPtr);
   }
}
