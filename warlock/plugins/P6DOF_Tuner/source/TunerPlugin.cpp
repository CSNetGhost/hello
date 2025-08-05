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
#include "TunerPlugin.hpp"

#include <QDockWidget>
#include <QMenu>
#include <QMenuBar>

#include "TunerCommandDialog.hpp"
#include "TunerMainWidget.hpp"
#include "TunerPrefWidget.hpp"
#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"
#include "WkfObserver.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(
   WkTuner::Plugin,
               u8"P6DOF 调谐器",
               u8"P6DOF 动作控制器及其插件已被弃用，取而代之的是SixDOF控制器。P6DOF 调谐器插件增加了一个调谐器功能。 "
               u8"位于菜单栏中的菜单，它提供了交互式工具，用于协助对自动驾驶控制中所使用的 PID 参数进行调整 "
               u8"P6DOF平台此插件具有特定的应用场景，因此默认情况下不会被加载。它已被替换为 "
               u8"SixDOF调谐器插件.",
   "warlock",
   false)

WkTuner::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : warlock::PluginT<SimInterface>(aPluginName, aUniqueId)
   , mCommandDialog(nullptr)
   , mTunerDockWidget(nullptr)
   , mTunerMainWidget(nullptr)
   , mPreferencesWidget(new PrefWidget())
{
   mInterfacePtr->SetEnabled(false);

   wkf::MainWindow* mainWindowPtr = wkfEnv.GetMainWindow();

   QMenu*   tunerMenu         = mainWindowPtr->FindOrCreateMenu("P6DOF Tuner");
   QAction* exportAction      = new QAction("Export Settings...", tunerMenu);
   QAction* showTuningAction  = new QAction("Tuning...", tunerMenu);
   QAction* showCommandAction = new QAction("Commands...", tunerMenu);

   connect(mPreferencesWidget->GetPreferenceObject(),
           &WkTuner::PrefObject::MoverCreatorFileSet,
           this,
           [this]()
           {
              // If launched from Mover Creator and the dialogs have been created yet
              if (!mTunerDockWidget && mPreferencesWidget->GetPreferenceObject()->GetLaunchedFromMoverCreatorFile() != "")
              {
                 CreateWidgets();
              }
           });

   connect(exportAction,
           &QAction::triggered,
           this,
           [this]
           {
              if (!mTunerMainWidget)
              {
                 CreateWidgets();
              }
              mTunerMainWidget->Export();
           });

   connect(showTuningAction,
           &QAction::triggered,
           this,
           [this]
           {
              if (!mTunerDockWidget)
              {
                 CreateWidgets();
              }
              mTunerDockWidget->show();
           });

   connect(showCommandAction,
           &QAction::triggered,
           this,
           [this]
           {
              if (!mCommandDialog)
              {
                 CreateWidgets();
              }
              mCommandDialog->show();
           });

   tunerMenu->addAction(showTuningAction);
   tunerMenu->addAction(showCommandAction);
   tunerMenu->addAction(exportAction);
}

QList<wkf::PrefWidget*> WkTuner::Plugin::GetPreferencesWidgets() const
{
   QList<wkf::PrefWidget*> list;
   list.push_back(mPreferencesWidget);
   return list;
}

void WkTuner::Plugin::CreateWidgets()
{
   auto mainWindowPtr = wkfEnv.GetMainWindow();

   // The Sim interface is disabled until needed, now enable it so the Tuner is usable
   mInterfacePtr->SetEnabled(true);

   // Create Command Dialog
   mCommandDialog = new CommandDialog(GetInterface());
   mCommandDialog->hide();

   // Create Tuner Dock Widget
   mTunerDockWidget = new wkf::DockWidget("TunerDockWidget", mainWindowPtr->centralWidget(), Qt::WindowFlags());
   mTunerDockWidget->setWindowTitle("P6Dof Tuner");

   // Create the main Widget to put in the Dock Widget
   mTunerMainWidget = new MainWidget(GetInterface());
   mTunerDockWidget->setWidget(mTunerMainWidget);
   mTunerDockWidget->hide();

   auto file = mPreferencesWidget->GetPreferenceObject()->GetLaunchedFromMoverCreatorFile();
   // If launched from mover creator
   if (file != "")
   {
      // Set the export file
      mTunerMainWidget->SetExportFile(file);

      // Add a callback when platforms are added so that a platform can be selected automatically.
      mCallbacks.Add(wkf::Observer::PlatformsAdded.Connect(&WkTuner::Plugin::PlatformsAddedHandler, this));
   }

   connect(mTunerMainWidget, &MainWidget::InitializeAutoTune, this, &Plugin::InitialAutoTuneSettings);
}

void WkTuner::Plugin::InitialAutoTuneSettings(int aPid)
{
   mInterfacePtr->SetAutoTunePopSize(mPreferencesWidget->GetPopSize((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneMaxGenerations(mPreferencesWidget->GetMaxGenerations((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneCarryOverFrac(mPreferencesWidget->GetCarryOverFrac((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneCrossoverProb(mPreferencesWidget->GetCrossoverProb((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneMutationProb(mPreferencesWidget->GetMutationProb((P6DOF::Pid::Type)aPid));

   double temp1, temp2;
   mPreferencesWidget->GetKpRange((P6DOF::Pid::Type)aPid, temp1, temp2);
   mInterfacePtr->SetAutoTuneKpRange(temp1, temp2);

   mPreferencesWidget->GetKiRange((P6DOF::Pid::Type)aPid, temp1, temp2);
   mInterfacePtr->SetAutoTuneKiRange(temp1, temp2);

   mPreferencesWidget->GetKdRange((P6DOF::Pid::Type)aPid, temp1, temp2);
   mInterfacePtr->SetAutoTuneKdRange(temp1, temp2);

   mInterfacePtr->SetAutoTuneRunTime(mPreferencesWidget->GetRunTime((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneErrorWeight(mPreferencesWidget->GetErrorWeight((P6DOF::Pid::Type)aPid));
   mInterfacePtr->SetAutoTuneOvershootWeight(mPreferencesWidget->GetOvershootWeight((P6DOF::Pid::Type)aPid));

   mInterfacePtr->RunAutoTuneCommand();
}

void WkTuner::Plugin::GuiUpdate()
{
   if (mInterfacePtr->IsEnabled())
   {
      if (mInterfacePtr->GetSimInitializing())
      {
         // If mTunerDockWidget is defined, mTunerMainWidget is too.
         //  mTunerDockWidget is a PluginUiPointer and thus safer to check than mTunerMainWidget
         if (mTunerDockWidget)
         {
            mTunerMainWidget->SimulationInitializing();
         }
      }

      mInterfacePtr->GuiUpdate();
      // If mTunerDockWidget is defined, mTunerMainWidget is too.
      //  mTunerDockWidget is a PluginUiPointer and thus safer to check than mTunerMainWidget
      if (mTunerDockWidget)
      {
         mTunerMainWidget->UpdateData();
      }
   }
}

void WkTuner::Plugin::PlatformsAddedHandler(const wkf::PlatformList& aPlatforms)
{
   if (mInterfacePtr->IsEnabled())
   {
      for (const auto& platform : aPlatforms)
      {
         // This name has to match the default name used by Mover Creator.
         if (platform->GetName() == "p6dof_test_platform")
         {
            wkfEnv.SetPlatformsSelected({platform});
         }
      }
   }
}
