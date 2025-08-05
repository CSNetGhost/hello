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
#pragma execution_character_set("utf-8")
#include "WkfOrbitPrefWidget.hpp"

#include <QComboBox>
#include <QFormLayout>
#include <QSpinBox>

#include "WkfOrbitPrefObject.hpp"

wkf::OrbitPrefWidget::OrbitPrefWidget(bool aRealtime)
   : wkf::PrefWidgetT<wkf::OrbitPrefObject>()
{
   setWindowTitle(u8"轨道");

   QFormLayout* form = new QFormLayout(this);
   setLayout(form);
   if (aRealtime)
   {
      mFadeout = new QSpinBox(this);
      mFadeout->setRange(1, 99999);
      form->addRow(u8"淡出 (秒):", mFadeout);
      mColorMode = new QComboBox(this);
      mColorMode->addItem(u8"白色", OrbitPrefData::eWHITE);
      mColorMode->addItem(u8"团队", OrbitPrefData::eTEAM);
      mColorMode->addItem(u8"名称", OrbitPrefData::eNAMEHASH);
      mColorMode->addItem(u8"想定", OrbitPrefData::eSCENARIO);
      form->addRow(u8"颜色:", mColorMode);
   }
   mLineWidth = new QSpinBox(this);
   mLineWidth->setRange(1, 6);
   form->addRow(u8"线宽:", mLineWidth);
   mPeriods = new QSpinBox(this);
   mPeriods->setRange(1, 16);
   form->addRow(u8"周期:", mPeriods);
}

void wkf::OrbitPrefWidget::WritePreferenceData(OrbitPrefData& aPrefData)
{
   if (mFadeout)
   {
      aPrefData.mFadeout = mFadeout->value();
   }
   if (mColorMode)
   {
      aPrefData.mColorMode = static_cast<OrbitPrefData::ColorMode>(mColorMode->currentData().toInt());
   }
   aPrefData.mLineWidth = mLineWidth->value();
   aPrefData.mPeriods   = mPeriods->value();
}

void wkf::OrbitPrefWidget::ReadPreferenceData(const OrbitPrefData& aPrefData)
{
   if (mFadeout)
   {
      mFadeout->setValue(aPrefData.mFadeout);
   }
   if (mColorMode)
   {
      switch (aPrefData.mColorMode)
      {
      case (OrbitPrefData::eWHITE):
         mColorMode->setCurrentText(u8"白色");
         break;
      case (OrbitPrefData::eTEAM):
         mColorMode->setCurrentText(u8"团队");
         break;
      case (OrbitPrefData::eNAMEHASH):
         mColorMode->setCurrentText(u8"名称");
         break;
      case (OrbitPrefData::eSCENARIO):
         mColorMode->setCurrentText(u8"想定");
         break;
      }
   }
   mLineWidth->setValue(aPrefData.mLineWidth);
   mPeriods->setValue(aPrefData.mPeriods);
}
