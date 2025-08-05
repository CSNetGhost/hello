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
#pragma execution_character_set("utf-8")
#include "RvPluginQuantumTaskerData.hpp"

#include <QAction>
#include <QMenu>

#include "RvPluginQuantumTaskerDialog.hpp"
#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvQuantumTasker::Plugin, u8"QuantumTasker数据", u8"显示QuantumTasker矩阵.", "mystic")

RvQuantumTasker::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
   , mQuantumTaskerMatrixWidgetPtr(nullptr)
{
   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();
   if (nullptr != mainWindowPtr)
   {
      QMenu* toolsMenu = mainWindowPtr->GetMenuByName(u8"工具");
      if (toolsMenu != nullptr)
      {
         QAction* show = new QAction(u8"显示Quantum Tasker矩阵", toolsMenu);
         toolsMenu->insertAction(*toolsMenu->actions().begin(), show);
         connect(show, &QAction::triggered, this, &RvQuantumTasker::Plugin::ShowMatrixDialog);
      }
   }
}

void RvQuantumTasker::Plugin::ShowMatrixDialog()
{
   if (mQuantumTaskerMatrixWidgetPtr == nullptr)
   {
      mQuantumTaskerMatrixWidgetPtr = new RvQuantumTasker::Dialog(wkfEnv.GetMainWindow());
      mQuantumTaskerMatrixWidgetPtr->show();
   }
   else if (mQuantumTaskerMatrixWidgetPtr->isHidden())
   {
      mQuantumTaskerMatrixWidgetPtr->show();
   }
}


void RvQuantumTasker::Plugin::AdvanceTimeRead(const rv::ResultData& aData)
{
   if (mQuantumTaskerMatrixWidgetPtr)
   {
      mQuantumTaskerMatrixWidgetPtr->UpdateTable(aData);
   }
}
