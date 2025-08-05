// ****************************************************************************
// CUI//REL TO USA ONLY
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2020 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "WsfScriptUCI_AMTI_SettingsCommandMessage.hpp"

#include "UtScriptTypes.hpp"
#include "WsfScriptUCI_Message.hpp"
#include "WsfScriptUCI_CommonTypes.hpp"
#include "script/WsfScriptDefs.hpp"
#include "UtMemory.hpp"
#include "UtScriptRef.hpp"
#include "UtScriptTypes.hpp"
#include "WsfUCI_Messages.hpp"
#include "WsfUCI_Types.hpp"


namespace wsf
{
namespace script
{

UCI_AMTI_SettingsCommandMessageClass::UCI_AMTI_SettingsCommandMessageClass(const std::string& aClassName,
                                                                           UtScriptTypes*     aTypesPtr)
   : UCI_MessageClass(aClassName, aTypesPtr)
{
   SetClassName(aClassName);

   AddStaticMethod(ut::make_unique<Construct>());
}

UT_DEFINE_SCRIPT_METHOD(UCI_AMTI_SettingsCommandMessageClass, UCI_AMTI_SettingsCommandMessage, Construct, 2, "UCI_AMTI_SettingsCommandMessage", "UCI_CapabilityId, UCI_CapabilityState")
{
   auto interfacePtr = UCI_Util::GetInterface(SIMULATION);
   if (interfacePtr != nullptr)
   {
      auto messagePtr = new UCI_AMTI_SettingsCommandMessage(*interfacePtr);
      auto capabilityId = aVarArgs[0].GetPointer()->GetAppObject<UCI_CapabilityID_Type>();
      auto statePtr = aVarArgs[1].GetPointer()->GetAppObject<UCI_CapabilityStateType>();

      ISM_OwnerProducerType ownPro(SIMULATION);
      ownPro.Get().setValue(ismownpro::type::CVEnumISMOwnerProducerValues::ISMOWNPRO_USA);   //Arbitrary for now
      messagePtr->Get().getSecurityAttributesGroup().getOwnerProducer().push_back(ownPro.Get());

      auto& data = messagePtr->Get().getMessageData();
      data.getCommandID().setUUID(interfacePtr->GetConnection()->generateUUID());
      data.getSubsystemID().setUUID(interfacePtr->GetConnection()->getMySubsystemUUID());
      statePtr->Get().setCapabilityID(capabilityId->Get());
      data.getCapabilityState().push_back(statePtr->Get());
      aReturnVal.SetPointer(new UtScriptRef(messagePtr, aReturnClassPtr, UtScriptRef::cMANAGE));
   }
   else
   {
      aReturnVal.SetPointer(UtScriptRef::Ref(nullptr, aReturnClassPtr, UtScriptRef::cMANAGE));
   }
}

} // script
} // wsf
