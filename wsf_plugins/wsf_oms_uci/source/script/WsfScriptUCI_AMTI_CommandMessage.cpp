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

#include "WsfScriptUCI_AMTI_CommandMessage.hpp"


#include "script/WsfScriptDefs.hpp"
#include "UtMemory.hpp"
#include "UtScriptRef.hpp"
#include "UtScriptTypes.hpp"
#include "WsfUCI_Interface.hpp"
#include "WsfUCI_Messages.hpp"
#include "WsfUCI_Types.hpp"

namespace wsf
{
namespace script
{

UCI_AMTI_CommandMessageClass::UCI_AMTI_CommandMessageClass(const std::string& aClassName,
                                                           UtScriptTypes*     aTypesPtr)
   : UCI_MessageClass(aClassName, aTypesPtr)
{
   SetClassName(aClassName);

   AddStaticMethod(ut::make_unique<Construct>());
   AddMethod(ut::make_unique<PushBack>());
   AddMethod(ut::make_unique<CommandUUID>());
}

UT_DEFINE_SCRIPT_METHOD(UCI_AMTI_CommandMessageClass, UCI_AMTI_CommandMessage, Construct, 1, "UCI_AMTI_CommandMessage", "UCI_AMTI_Command")
{
   auto interfacePtr = UCI_Util::GetInterface(SIMULATION);
   if (interfacePtr != nullptr)
   {
      auto messagePtr = new UCI_AMTI_CommandMessage(*interfacePtr);
      auto commandPtr = aVarArgs[0].GetPointer()->GetAppObject<UCI_AMTI_CommandType>();

      messagePtr->Get().getMessageData().getCommand().push_back(commandPtr->Get());
      ISM_OwnerProducerType ownPro(SIMULATION);
      ownPro.Get().setValue(ismownpro::type::CVEnumISMOwnerProducerValues::ISMOWNPRO_USA);   //Arbitrary for now
      messagePtr->Get().getSecurityAttributesGroup().getOwnerProducer().push_back(ownPro.Get());

      messagePtr->Get().getSequenceGroup().getMessageHeader().getSystemID().setUUID(interfacePtr->GetConnection()->getMySystemUUID());
      messagePtr->Get().getSequenceGroup().getMessageHeader().enableServiceID();
      messagePtr->Get().getSequenceGroup().getMessageHeader().getServiceID().setUUID(interfacePtr->GetConnection()->getMyServiceUUID());
      messagePtr->Get().getSequenceGroup().getMessageHeader().setMode(uci::type::MessageModeEnum::UCI_SIMULATION);
      aReturnVal.SetPointer(new UtScriptRef(messagePtr, aReturnClassPtr, UtScriptRef::cMANAGE));
   }
   else
   {
      aReturnVal.SetPointer(UtScriptRef::Ref(nullptr, aReturnClassPtr, UtScriptRef::cMANAGE));
   }
}

UT_DEFINE_SCRIPT_METHOD(UCI_AMTI_CommandMessageClass, UCI_AMTI_CommandMessage, PushBack, 1, "void", "UCI_AMTI_Command")
{
   if (UCI_Util::GetInterface(SIMULATION))
   {
      auto commandPtr = aVarArgs[0].GetPointer()->GetAppObject<UCI_AMTI_CommandType>();
      aObjectPtr->Get().getMessageData().getCommand().push_back(commandPtr->Get());
   }
}

UT_DEFINE_SCRIPT_METHOD(UCI_AMTI_CommandMessageClass, UCI_AMTI_CommandMessage, CommandUUID, 1, "string", "int")
{
   bool set{ false };
   if (UCI_Util::GetInterface(SIMULATION) != nullptr)
   {
      auto index = static_cast<size_t>(aVarArgs[0].GetInt());
      auto& command = aObjectPtr->Get().getMessageData().getCommand();
      if (!command.empty() &&
          index < command.size())
      {
         set = true;
         aReturnVal.SetString(command.at(index).getCapability().getCommandID().getUUID().getValueAsString());
      }
   }
   if (!set)
   {
      aReturnVal.SetNullString();
   }
}

} // script
} // wsf
