// This file was generated  on 12/5/2018 at 1:1:47 PM by the Boeing OMS CAL generation tools
// @warning  This file was automatically generated, edit at your own risk

/**
* Unclassified               U N C L A S S I F I E D               Unclassified
*
* DEVELOPMENT:
*    This document wholly developed with USG funds.
*    For additional information, contact the AFRCO.
*
* ‒  DISTRIBUTION STATEMENT D.  Distribution authorized to the Department
*    of Defense and U.S. DoD contractors only; Critical Technology; 17 Sep 2015.
*    Other requests shall be referred to Air Force Rapid Capabilities Office,
*    Bolling AFB, Washington DC 20032-6400. 
*
* EXPORT CONTROL:
*    WARNING - ITAR CONTROLLED - US ONLY
*    This distribution contains technical data whose export is restricted by
*    the Arms Export Control Act (Title 22, U.S.C., Sec. 2751 et seq. or the
*    Export Administration Act of 1979 as amended Title 50, U.S.C., App.
*    2401-2420 et seq.), as amended. Violation of these export laws are subject
*    to severe criminal penalties.  Disseminate in accordance with provisions of DoD
*    Directive 5230.25.
*/
#ifndef Uci__Type__PO_ComponentStatusProductSettingsType_h
#define Uci__Type__PO_ComponentStatusProductSettingsType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__PO_ProductGeneratorOutputID_Type_h)
# include "uci/type/PO_ProductGeneratorOutputID_Type.h"
#endif

#if !defined(Uci__Type__SecurityInformationType_h)
# include "uci/type/SecurityInformationType.h"
#endif

#if !defined(Uci__Type__JPEG_SettingsType_h)
# include "uci/type/JPEG_SettingsType.h"
#endif

#if !defined(Uci__Type__NITF_PackingPlanType_h)
# include "uci/type/NITF_PackingPlanType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the PO_ComponentStatusProductSettingsType sequence accessor class */
      class PO_ComponentStatusProductSettingsType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~PO_ComponentStatusProductSettingsType()
         { }

         /** Returns this accessor's type constant, i.e. PO_ComponentStatusProductSettingsType
           *
           * @return This accessor's type constant, i.e. PO_ComponentStatusProductSettingsType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::pO_ComponentStatusProductSettingsType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const PO_ComponentStatusProductSettingsType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the GeneratorOutputID.
           *
           * @return The acecssor that provides access to the complex content that is identified by GeneratorOutputID.
           */
         virtual const uci::type::PO_ProductGeneratorOutputID_Type& getGeneratorOutputID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the GeneratorOutputID.
           *
           * @return The acecssor that provides access to the complex content that is identified by GeneratorOutputID.
           */
         virtual uci::type::PO_ProductGeneratorOutputID_Type& getGeneratorOutputID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the GeneratorOutputID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by GeneratorOutputID
           */
         virtual void setGeneratorOutputID(const uci::type::PO_ProductGeneratorOutputID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ProductClassification.
           *
           * @return The acecssor that provides access to the complex content that is identified by ProductClassification.
           */
         virtual const uci::type::SecurityInformationType& getProductClassification() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ProductClassification.
           *
           * @return The acecssor that provides access to the complex content that is identified by ProductClassification.
           */
         virtual uci::type::SecurityInformationType& getProductClassification()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ProductClassification to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ProductClassification
           */
         virtual void setProductClassification(const uci::type::SecurityInformationType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by ProductClassification exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by ProductClassification is emabled or not
           */
         virtual bool hasProductClassification() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by ProductClassification
           *
           * @param type = uci::type::accessorType::securityInformationType This Accessor's accessor type
           */
         virtual void enableProductClassification(uci::base::accessorType::AccessorType type = uci::type::accessorType::securityInformationType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by ProductClassification */
         virtual void clearProductClassification()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the JPEG_Settings.
           *
           * @return The acecssor that provides access to the complex content that is identified by JPEG_Settings.
           */
         virtual const uci::type::JPEG_SettingsType& getJPEG_Settings() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the JPEG_Settings.
           *
           * @return The acecssor that provides access to the complex content that is identified by JPEG_Settings.
           */
         virtual uci::type::JPEG_SettingsType& getJPEG_Settings()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the JPEG_Settings to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by JPEG_Settings
           */
         virtual void setJPEG_Settings(const uci::type::JPEG_SettingsType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by JPEG_Settings exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by JPEG_Settings is emabled or not
           */
         virtual bool hasJPEG_Settings() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by JPEG_Settings
           *
           * @param type = uci::type::accessorType::jPEG_SettingsType This Accessor's accessor type
           */
         virtual void enableJPEG_Settings(uci::base::accessorType::AccessorType type = uci::type::accessorType::jPEG_SettingsType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by JPEG_Settings */
         virtual void clearJPEG_Settings()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NITF_PackingPlan.
           *
           * @return The acecssor that provides access to the complex content that is identified by NITF_PackingPlan.
           */
         virtual const uci::type::NITF_PackingPlanType& getNITF_PackingPlan() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NITF_PackingPlan.
           *
           * @return The acecssor that provides access to the complex content that is identified by NITF_PackingPlan.
           */
         virtual uci::type::NITF_PackingPlanType& getNITF_PackingPlan()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the NITF_PackingPlan to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by NITF_PackingPlan
           */
         virtual void setNITF_PackingPlan(const uci::type::NITF_PackingPlanType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by NITF_PackingPlan exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by NITF_PackingPlan is emabled or not
           */
         virtual bool hasNITF_PackingPlan() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by NITF_PackingPlan
           *
           * @param type = uci::type::accessorType::nITF_PackingPlanType This Accessor's accessor type
           */
         virtual void enableNITF_PackingPlan(uci::base::accessorType::AccessorType type = uci::type::accessorType::nITF_PackingPlanType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by NITF_PackingPlan */
         virtual void clearNITF_PackingPlan()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         PO_ComponentStatusProductSettingsType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The PO_ComponentStatusProductSettingsType to copy from
           */
         PO_ComponentStatusProductSettingsType(const PO_ComponentStatusProductSettingsType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this PO_ComponentStatusProductSettingsType to the contents of the
           * PO_ComponentStatusProductSettingsType on the right hand side (rhs) of the assignment
           * operator.PO_ComponentStatusProductSettingsType [only available to derived classes]
           *
           * @param rhs The PO_ComponentStatusProductSettingsType on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::PO_ComponentStatusProductSettingsType
           * @return A constant reference to this PO_ComponentStatusProductSettingsType.
           */
         const PO_ComponentStatusProductSettingsType& operator=(const PO_ComponentStatusProductSettingsType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // PO_ComponentStatusProductSettingsType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__PO_ComponentStatusProductSettingsType_h

