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
#pragma execution_character_set("utf-8")
#include "AnnotationPlugin.hpp"

#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(WkAnnotation::Plugin,
                            u8"评注",
                            u8"注释插件”负责在地图显示界面中呈现视觉注释."
                          "warlock")

WkAnnotation::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : warlock::PluginT<SimInterface, Annotation::Plugin>(aPluginName, aUniqueId)
{
   connect(&wkfEnv, &wkf::Environment::DeleteShortcutTriggered, this, &Annotation::Plugin::DeleteCurrentlySelectedAnnotations);
}

void WkAnnotation::Plugin::GuiUpdate()
{
   mInterfacePtr->ProcessEvents(mDisplayInterface);
}
