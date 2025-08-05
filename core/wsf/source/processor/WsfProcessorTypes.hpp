// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2003-2015 The Boeing Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef WSFPROCESSORTYPES_HPP
#define WSFPROCESSORTYPES_HPP

#include "WsfObjectTypeList.hpp"
#include "WsfProcessor.hpp"

class WsfProcessorTypes : public WsfObjectTypeList<WsfProcessor>
{
public:
   //! @name Static methods to return a reference to the type list associated with a scenario.
   //@{
   static WSF_EXPORT WsfProcessorTypes&       Get(WsfScenario& aScenario);
   static WSF_EXPORT const WsfProcessorTypes& Get(const WsfScenario& aScenario);
   //@}

   explicit WsfProcessorTypes(WsfScenario& aScenario);

   bool DeferredLoadTypeP(UtInput& aInput, WsfObject*& aLoadedObjectPtr) override;
};

#endif
