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

#include "CrdImporterPlugin.hpp"

#include <QMenu>

#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(
   CrdImporter::Plugin,
   u8"CRD 导入器",
   u8"允许用户读取通用路线定义（CRD）文件，并将其转换为 AFSIM 输入格式.",
   "wizard")

CrdImporter::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wizard::Plugin(aPluginName, aUniqueId)
   , mDialogPtr(new Dialog(wkfEnv.GetMainWindow()))
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   QMenu*           toolsMenu     = mainWindowPtr->GetMenuByName(u8"工具");  // "Tools" -> "工具"
   QMenu*           importersMenu = new QMenu(u8"导入工具", toolsMenu);  // "Importers" -> "导入工具"

   if (toolsMenu)
   {
      QMenu* iMenu = toolsMenu->findChild<QMenu*>(u8"导入工具");  // 保持对象名与显示文本一致
      if (!iMenu)
      {
         importersMenu->setObjectName(u8"导入工具");
         toolsMenu->addMenu(importersMenu);
      }
      else
      {
         importersMenu = iMenu;
      }
   }
   // TODO: Get an icon to represent the plugin on the tools menu
   if (importersMenu)
   {
      wkf::Action* startAction = new wkf::Action(QIcon::fromTheme("crd_importer"), u8"CRD导入器...", mainWindowPtr);
      connect(startAction, &QAction::triggered, [this]() { mDialogPtr->show(); });

      importersMenu->addAction(startAction);
   }
}
