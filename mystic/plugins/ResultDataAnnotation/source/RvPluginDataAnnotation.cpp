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
#include "RvPluginDataAnnotation.hpp"

#include <memory>

#include "RvAnnotationDataExtension.hpp"
#include "UtMemory.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(RvDataAnnotation::Plugin,
                          u8"注释数据扩展",
                          u8"能够处理来自 WSF 注释插件的消息",
                          "mystic")

RvDataAnnotation::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : rv::Plugin(aPluginName, aUniqueId)
{
   rvEnv.RegisterDataExtension(ut::make_unique<rv::AnnotationDataExtension>());
}
