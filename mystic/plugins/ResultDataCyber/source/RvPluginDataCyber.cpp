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
#pragma execution_character_set("utf-8")
#include "RvPluginDataCyber.hpp"

#include <memory>

#include "RvCyberDataExtension.hpp"
#include "UtMemory.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvDataCyber::Plugin,
                          u8"赛博数据扩展",
                          u8"启用对来自WSF赛博扩展的消息的处理",
                          "mystic")

RvDataCyber::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
{
   rvEnv.RegisterDataExtension(ut::make_unique<rv::CyberDataExtension>());
}
