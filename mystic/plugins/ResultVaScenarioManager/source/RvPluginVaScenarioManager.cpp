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
#include "RvPluginVaScenarioManager.hpp"

#include "RvEnvironment.hpp"
#include "RvVaScenarioManagerInterface.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvVaScenarioManager::Plugin, u8"想定管理器", u8"更新VaScenario中的实体", "mystic")

RvVaScenarioManager::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
   , mInterfacePtr(new Interface(this))
{
}

void RvVaScenarioManager::Plugin::RegularRead(const rv::ResultData& aData)
{
   mInterfacePtr->AdvanceTimeRead(aData);
}

void RvVaScenarioManager::Plugin::AdvanceTimeRead(const rv::ResultData& aData)
{
   mInterfacePtr->AdvanceTimeRead(aData);
}

void RvVaScenarioManager::Plugin::PlatformAddedRead(double aSimTime, rv::ResultDb& aData, const rv::MsgPlatformInfo& aPlatform)
{
   mInterfacePtr->PlatformAdded(aData, aPlatform);
}

void RvVaScenarioManager::Plugin::GuiUpdate()
{
   mInterfacePtr->GuiUpdate();
}

void RvVaScenarioManager::Plugin::ClearScenario(bool aFullReset)
{
   mInterfacePtr->ClearScenario(aFullReset);
}
