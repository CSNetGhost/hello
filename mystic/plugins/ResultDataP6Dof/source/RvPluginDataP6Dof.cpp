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
#include "RvPluginDataP6Dof.hpp"

#include <memory>

#include "RvP6DofDataExtension.hpp"
#include "UtMemory.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvDataP6Dof::Plugin,
                          u8"P6Dof 数据扩展",
                          u8"P6DOF运动器及其插件已被弃用，取而代之的是SixDOF运 "
                          u8"动器。P6DOF数据扩展插件用于启用对来自WSF P6DOF扩"
                          u8"展的消息的处理。它已被SixDOF数据扩展插件所替代.",
                          "mystic")

RvDataP6Dof::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
{
   rvEnv.RegisterDataExtension(ut::make_unique<rv::P6DofDataExtension>());
}
