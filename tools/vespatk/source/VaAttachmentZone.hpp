// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2003-2013 The Boeing Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef VaAttachmentZone_hpp
#define VaAttachmentZone_hpp

#include "vespatk_export.h"

#include "UtAngleR.hpp"
#include "UtColor.hpp"
#include "UtLength.hpp"
#include "VaAttachmentZoneBase.hpp"

namespace vespa
{
class VESPATK_DEPRECATED_EXPORT VaAttachmentZone : public VaAttachmentZoneBase
{
public:
   enum SlewAdjustment
   {
      ReverseAspect
   };

   VaAttachmentZone(VaEntity& aParent, VaViewer* aViewerPtr, const std::string& aName = "zone");
   ~VaAttachmentZone() override;

   VaAttachmentZone*       Ref() override { return this; }
   const VaAttachmentZone* Ref() const override { return this; }

   using AuxDataMap = std::map<std::string, std::string>;

   virtual void SetColor(const UtColor& aColor) {}
   virtual void SetFillColor(const UtColor& aFillColor) {}
   virtual void SetBlendFactor(float aFactor) {}
   virtual void SetLineWidth(double aLineWidth) {}
   virtual void SetLineStyle(int aLineStyle) {}
   virtual void SetEnableFill(bool aEnableFill) {}
   virtual void SetHeight(const UtLength& aHeight) {}
   virtual void SetBaseHeight(const UtLength& aBaseHeight) {}
   virtual void SetMaxAltitude(const UtLength& aMaxAlt) {}
   virtual void SetMinAltitude(const UtLength& aMaxAlt) {}
   virtual void SetMaxAltitudeSet(bool aIsSet) {}
   virtual void SetMinAltitudeSet(bool aIsSet) {}
   virtual void SetAuxData(const AuxDataMap& aAuxData) {}

   //! Sets the heading, pitch, and roll of the zone relative to its anchor entity.
   //! @param aHeading is the zone's heading angle transform in radians
   //! @param aPitch is the zone's pitch angle transform in radians
   //! @param aRoll is the zone's roll angle transform in radians
   virtual void SetOrientation(double aHeading, double aPitch, double aRoll) {}

   virtual const UtColor&     GetColor() const { return mColor; }
   virtual const UtColor&     GetFillColor() const { return mFillColor; }
   virtual const float        GetBlendFactor() const { return (float)mBlendFactor; }
   virtual double             GetLineWidth() const { return mLineWidth; }
   virtual int                GetLineStyle() const { return mLineStyle; }
   virtual bool               GetEnableFill() const { return mEnableFill; }
   virtual double             GetHeading() const { return mHeading; }
   virtual double             GetPitch() const { return mPitch; }
   virtual double             GetRoll() const { return mRoll; }
   virtual const UtLength&    GetHeight() const { return mHeight; }
   virtual const UtLength&    GetBaseHeight() const { return mBaseHeight; }
   virtual const UtLength&    GetMaximumAltitude() const { return mMaxAlt; }
   virtual const UtLength&    GetMinimumAltitude() const { return mMinAlt; }
   virtual const std::string& GetShapeName() const { return mShapeName; }

   unsigned int GetPickMode() const override { return cPICK_NOTHING; }

   bool GetColorChanged() const { return mColorChanged; }
   bool GetFillColorChanged() const { return mFillColorChanged; }
   bool GetLineWidthChanged() const { return mLineWidthChanged; }
   bool GetLineStyleChanged() const { return mLineStyleChanged; }
   bool GetFillChanged() const { return mFillChanged; }
   bool GetClosedChanged() const { return mClosedChanged; }

   const AuxDataMap& GetAuxData() const { return mAuxData; }

   bool BoxPick(VaViewer* aViewerPtr, const VaSelectionBox& aBox, bool aInside) override;

   void PreApplyOptions(bool aForceUpdate) override;

   void SetSlewEntity(VaEntity* aSlewEntityPtr) { mSlewEntityPtr = aSlewEntityPtr; }
   void SetSlewPlayerName(std::string& aName) { mSlewEntityName = aName; }
   void SetSlewToPlayer(bool aSlew) { mSlewToPlayer = aSlew; }

   const std::string GetSlewPlayerName() const { return mSlewEntityName; }
   const bool        GetSlewToPlayer() const { return mSlewToPlayer; }

protected:
   AuxDataMap                         mAuxData;
   bool                               mColorChanged;
   bool                               mFillColorChanged;
   bool                               mLineWidthChanged;
   bool                               mLineStyleChanged;
   bool                               mFillChanged;
   bool                               mClosedChanged;
   UtColor                            mColor;
   UtColor                            mFillColor;
   double                             mBlendFactor;
   double                             mLineWidth;
   int                                mLineStyle;
   int                                mLineStippleFactor;
   unsigned short                     mLineStipplePattern;
   bool                               mEnableFill;
   UtLength                           mBaseHeight;
   UtLength                           mHeight;
   UtLength                           mMaxAlt;
   UtLength                           mMinAlt;
   double                             mHeading;
   double                             mPitch;
   double                             mRoll;
   std::string                        mShapeName;
   std::map<std::string, std::string> mModifierList;
   std::vector<std::string>           mModifierKeys;

   int         mSlewAdjustment;
   VaEntity*   mSlewEntityPtr;
   std::string mSlewEntityName;
   bool        mSlewToPlayer;
};
} // end namespace vespa

VA_DECLARE_OBJECT_TYPE(vespa::VaAttachmentZone)

#endif
