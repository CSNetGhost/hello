// ****************************************************************************
// CUI//REL TO USA ONLY
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2003-2015 The Boeing Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************
// ****************************************************************************
// Updated by Infoscitex, a DCS Company.
// ****************************************************************************

#include "Utilities.hpp"

#include <cmath>

#include "UtEarth.hpp"
#include "UtMath.hpp"

namespace engage
{

// =================================================================================================
//
// ESAMS utilizes an East-North-Up coordinate system compass-referenced. That is:
//
//    X <-> East
//    Y <-> North
//    Z <-> Up
//
// The ESAMS 'heading' angle measured counter-clockwise from east (conventional heading is
// clockwise from north.) The code uses conventional heading. The user is expected to convert.

// =================================================================================================
Utilities::Utilities()
{
   SetCenter(0.0, 0.0);
}

// =================================================================================================
bool Utilities::ConvertLL_ToXY(double aLat, double aLon, double& aX, double& aY) const
{
   bool   ok     = false;
   double ptlat  = aLat * UtMath::cRAD_PER_DEG;
   double ptlon  = aLon * UtMath::cRAD_PER_DEG;
   double delong = ptlon - mCenterLon;

   // When point is close enough to center meridian
   double b = cos(ptlat) * sin(delong);
   if (fabs(b) < 1.0)
   {
      // Calculate x-y coordinates:
      aX = 0.5 * mRadius * log((1.0 + b) / (1.0 - b));
      // When point is not at a pole
      if (fabs(ptlat) < UtMath::cPI_OVER_2)
      {
         aY = mRadius * (atan2(tan(ptlat), cos(delong)) - mCenterLat);
      }
      else
      {
         aY = mRadius * (ptlat - mCenterLat);
      }
      ok = true;
   }
   return ok;
}

// =================================================================================================
bool Utilities::ConvertXY_ToLL(double aX, double aY, double& aLat, double& aLon) const
{
   double d = (aY / mRadius) + mCenterLat;
   aLat     = asin(sin(d) / cosh(aX / mRadius));
   aLat *= UtMath::cDEG_PER_RAD;
   aLon = mCenterLon + atan2(sinh(aX / mRadius), cos(d));
   aLon *= UtMath::cDEG_PER_RAD;
   return true;
}

// =================================================================================================
void Utilities::SetCenter(double aCenterLat, double aCenterLon)
{
   mCenterLat = aCenterLat * UtMath::cRAD_PER_DEG;
   mCenterLon = aCenterLon * UtMath::cRAD_PER_DEG;

   double rmajor = UtEarth::cA;
   double rminor = UtEarth::cB;
   double ratio  = fabs(mCenterLat / UtMath::cPI_OVER_2);
   double r1     = rmajor + (rminor - rmajor) * ratio;
   double asqr   = rmajor * rmajor;
   double bsqr   = rminor * rminor;
   double tstlat;
   double x1;
   int    itry = 1;
   while (true)
   {
      x1        = r1 * cos(mCenterLat);
      double y1 = sqrt(bsqr * (1.0 - ((x1 * x1) / asqr)));
      if (mCenterLat < 0.0)
      {
         y1 = -y1;
      }
      if (x1 > 1.0)
      {
         tstlat = atan2(y1, x1);
      }
      else
      {
         tstlat = UtMath::cPI_OVER_2;
         if (mCenterLat < 0.0)
         {
            tstlat = -tstlat;
         }
      }
      double delat = tstlat - mCenterLat;
      if (fabs(delat) < 3.0e-4)
      {
         break;
      }
      if (itry >= 20)
      {
         break;
      }
      double coslat = cos(mCenterLat + (delat / 2.0));
      if (coslat >= 1.0e-6)
      {
         r1 = x1 / coslat;
      }
      else
      {
         r1 = rminor;
      }
      ++itry;
   }
   double coslat = cos(tstlat);
   if (coslat >= 1.0e-6)
   {
      mRadius = x1 / coslat;
   }
   else
   {
      mRadius = rminor;
   }
}

} // namespace engage
