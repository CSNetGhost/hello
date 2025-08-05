// ****************************************************************************
// CUI//REL TO USA ONLY
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2019 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "WsfScriptUCI_ESM_ActivityMessage.hpp"

#include "UtScriptTypes.hpp"
#include "WsfScriptUCI_Message.hpp"

namespace wsf
{
namespace script
{

UCI_ESM_ActivityMessageClass::UCI_ESM_ActivityMessageClass(const std::string& aClassName,
                                                           UtScriptTypes*     aTypesPtr)
   : UCI_MessageClass(aClassName, aTypesPtr)
{
   SetClassName(aClassName);
}

} // script
} // wsf
