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

#ifndef WSFSCRIPTEM_PROPAGATIONCLASS_HPP
#define WSFSCRIPTEM_PROPAGATIONCLASS_HPP

#include "wsf_export.h"

#include <string>

#include "WsfScriptObjectClass.hpp"

class WSF_EXPORT WsfScriptEM_PropagationClass : public WsfScriptObjectClass
{
public:
   WsfScriptEM_PropagationClass(const std::string& aClassName, UtScriptTypes* aTypesPtr);

   ~WsfScriptEM_PropagationClass() override = default;
};

#endif
