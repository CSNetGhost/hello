// ****************************************************************************
// CUI//REL TO USA ONLY
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2020 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************
#pragma execution_character_set("utf-8")
#include "SA_DisplayPlugin.hpp"

#include <QString>

WKF_PLUGIN_DEFINE_SYMBOLS(WkSA_Display::Plugin,
                            u8"态势感知显示",
                            u8"SA 显示插件可对 SA 处理器的数据进行自定义显示，其中包括感知数据"
                            u8"包括对资产、不明飞行物、敌机、感知到的编队以及真实情况的感知.",
                          "warlock",
                          false) // Plugin not loaded by default

WkSA_Display::Plugin::Plugin(const QString& aPluginName, size_t aUniqueID)
   : warlock::PluginT<SimInterface, wkf::SA_Display::PluginBase>(aPluginName, aUniqueID, eSECONDARY_VIEWER)
{
   mInterfacePtr->SetEnabled(false);
}

void WkSA_Display::Plugin::GuiUpdate()
{
   mInterfacePtr->ProcessEvents(mDataContainer);

   for (auto& sad : mSA_Displays)
   {
      if (mInterfacePtr->IsConnectionDestroyed(sad.first))
      {
         sad.second->ActivateKillFrame(true);
      }
   }

   PluginBase::GuiUpdate();
}

void WkSA_Display::Plugin::NewDisplay(wkf::Platform* aPlatform)
{
   // The Sim interface is disabled until needed
   mInterfacePtr->SetEnabled(true);
   mInterfacePtr->AddPlatformOfInterest(aPlatform->GetIndex());
}

void WkSA_Display::Plugin::RemoveDisplay(size_t aIndex)
{
   mInterfacePtr->RemovePlatformOfInterest(aIndex);
}

bool WkSA_Display::Plugin::HasSituationAwarenessProcessor(wkf::Platform* aPlatform)
{
   return mInterfacePtr->HasSituationAwarenessProcessor(aPlatform->GetIndex());
}
