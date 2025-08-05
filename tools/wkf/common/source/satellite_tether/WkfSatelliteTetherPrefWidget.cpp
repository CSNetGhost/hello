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
#include "WkfSatelliteTetherPrefWidget.hpp"

#include <QCheckBox>
#include <QFormLayout>

#include "UtQtMemory.hpp"

wkf::SatelliteTetherPrefWidget::SatelliteTetherPrefWidget()
   : PrefWidgetT<SatelliteTetherPrefObject>()
{
   setWindowTitle(u8"卫星系绳");

   QFormLayout* lo = ut::qt::make_qt_ptr<QFormLayout>(this);
   setLayout(lo);
   mShowNames        = new QCheckBox(this);
   mShowFutureTracks = new QCheckBox(this);
   mEnableLighting   = new QCheckBox(this);
   lo->addRow(u8"显示名称", mShowNames);
   lo->addRow(u8"显示未来轨迹", mShowFutureTracks);
   lo->addRow(u8"启用光照", mEnableLighting);
}

void wkf::SatelliteTetherPrefWidget::ReadPreferenceData(const SatelliteTetherPrefData& aPrefData)
{
   mShowFutureTracks->setChecked(aPrefData.mShowFutureTrack);
   mShowNames->setChecked(aPrefData.mShowNames);
   mEnableLighting->setChecked(aPrefData.mEnableLighting);
}

void wkf::SatelliteTetherPrefWidget::WritePreferenceData(SatelliteTetherPrefData& aPrefData)
{
   aPrefData.mShowFutureTrack = mShowFutureTracks->isChecked();
   aPrefData.mShowNames       = mShowNames->isChecked();
   aPrefData.mEnableLighting  = mEnableLighting->isChecked();
}
