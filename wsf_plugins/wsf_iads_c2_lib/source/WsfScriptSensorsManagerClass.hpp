// ****************************************************************************
// CUI//REL TO USA ONLY
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************
/*******************************************************************************
*
*   File: WsfScriptSensorsManagerClass.hpp
*
*   Classification: UNCLASSIFIED
*
*   Details:
*
*   Contract Number:
*   Contractor Name:	Radiance Technologies
*   Address:			350 Wynn Drive
*   					   Huntsville, AL 35805
*
*   Abstract: This is an abstract script base class for all sensors manager processor
*     script classes to inherit from. It provides necessary common functionality.
*     It's not pure abstract in the sense that we actually instantiate an object of this
*     type purely for type registration purposes with the sole intent of giving AFSIM
*     scripts the ability to up/down cast to and from the inherited types.
*
*******************************************************************************/

#ifndef WSF_SCRIPT_SENSORS_MANAGER_CLASS_HPP
#define WSF_SCRIPT_SENSORS_MANAGER_CLASS_HPP

#include <script/WsfScriptProcessorClass.hpp>
#include <WsfBMCommon.hpp>

class WsfScriptSensorsManagerClass : public WsfScriptProcessorClass
{
   public:

      WsfScriptSensorsManagerClass(const std::string& aClassName, UtScriptTypes* aScriptTypesPtr);

      void* Create(const UtScriptContext& aContext) override;
      void* Clone(void* aObjectPtr) override;
      void  Destroy(void* aObjectPtr) override;

      static const char* SCRIPT_CLASS_NAME;
      static const char* BASE_CLASS_NAME;

      // Plugin API.
      static WSF_IADS_C2_LIB_EXPORT const char* GetScriptClassName();
      static WSF_IADS_C2_LIB_EXPORT const char* GetBaseClassName();
};

#endif
