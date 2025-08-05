// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2018 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "ErrorListPlugin.hpp"

#include "WkfEnvironment.hpp"
#include "WkfMainWindow.hpp"

WKF_PLUGIN_DEFINE_SYMBOLS(ErrorList::Plugin, u8"错误列表", u8"一个用于显示输入文件中错误的显示区", "wizard")

ErrorList::Plugin::Plugin(const QString& aPluginName, const size_t aUniqueId)
   : wizard::Plugin(aPluginName, aUniqueId)
{
   mErrorDock = new ErrorDock(wkfEnv.GetMainWindow());
   wkfEnv.GetMainWindow()->addDockWidget(Qt::BottomDockWidgetArea, mErrorDock);
   mErrorDock->setVisible(false);
}
