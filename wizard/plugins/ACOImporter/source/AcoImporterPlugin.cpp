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

#include "AcoImporterPlugin.hpp"

#include <QMenu>

#include "ImporterDialog.hpp"
#include "WkfAction.hpp"
#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(
   AcoImporter::Plugin,
   u8"ACO/ATO 导入器",
   u8"ACO/ATO 导入器插件会在“工具”菜单下创建一个对话框，该对话框可实现“ACO/ATO 消息”的导入操作。",
   "wizard")

AcoImporter::Plugin::Plugin(const QString& aPluginName, const size_t aId)
   : wizard::Plugin(aPluginName, aId)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   mDialog                        = new Dialog(mainWindowPtr);

   // toolbar code
   QMenu* toolsMenu     = mainWindowPtr->GetMenuByName(u8"工具");
   QMenu* importersMenu = new QMenu(u8"导入器", toolsMenu);
   if (toolsMenu)
   {
      QMenu* iMenu = toolsMenu->findChild<QMenu*>(u8"导入器");
      if (!iMenu)
      {
         importersMenu->setObjectName(u8"导入器");
         toolsMenu->addMenu(importersMenu);
      }
      else
      {
         importersMenu = iMenu;
      }
   }

   if (importersMenu)
   {
      wkf::Action* dlgActionAcoPtr = new wkf::Action(u8"ACO 导入器 ...", mainWindowPtr);
      wkf::Action* dlgActionAtoPtr = new wkf::Action(u8"ATO 导入器 ...", mainWindowPtr);

      connect(dlgActionAcoPtr,
              &QAction::triggered,
              mDialog.data(),
              [this](void) -> void
              {
                 this->mDialog.data()->UnregisterAtoRequirements();
                 this->mDialog.data()->RegisterAcoRequirements();
                 this->mDialog.data()->show();
              });
      connect(dlgActionAtoPtr,
              &QAction::triggered,
              mDialog.data(),
              [this](void) -> void
              {
                 this->mDialog.data()->UnregisterAcoRequirements();
                 this->mDialog.data()->RegisterAtoRequirements();
                 this->mDialog.data()->show();
              });
      importersMenu->addAction(dlgActionAcoPtr);
      importersMenu->addAction(dlgActionAtoPtr);
   }
}
