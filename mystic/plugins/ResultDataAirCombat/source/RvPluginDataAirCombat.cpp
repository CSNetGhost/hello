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
#include "RvPluginDataAirCombat.hpp"

#include <memory>

#include "RvAirCombatDataExtension.hpp"
#include "UtMemory.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvDataAirCombat::Plugin,
    u8"空战数据扩展",
    u8"能够处理来自WSF空战扩展的信件消息",
    "mystic")

RvDataAirCombat::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
{
   rvEnv.RegisterDataExtension(ut::make_unique<rv::AirCombatDataExtension>());
}
