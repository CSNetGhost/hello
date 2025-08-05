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
#ifndef Uci__Type__SAR_CapabilityCommandSubCapabilityType_h
#define Uci__Type__SAR_CapabilityCommandSubCapabilityType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__SAR_SubCapabilityType_h)
# include "uci/type/SAR_SubCapabilityType.h"
#endif

#if !defined(Uci__Type__ISAR_SubCapabilityType_h)
# include "uci/type/ISAR_SubCapabilityType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Indicates the subcapability, SAR or ISAR, for this command */
      class SAR_CapabilityCommandSubCapabilityType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~SAR_CapabilityCommandSubCapabilityType()
         { }

         /** Returns this accessor's type constant, i.e. SAR_CapabilityCommandSubCapabilityType
           *
           * @return This accessor's type constant, i.e. SAR_CapabilityCommandSubCapabilityType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::sAR_CapabilityCommandSubCapabilityType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SAR_CapabilityCommandSubCapabilityType& accessor)
            throw(uci::base::UCIException) = 0;


         /** The following enumeration is used to identify which element of this Choice has been chosen. */
         enum SAR_CapabilityCommandSubCapabilityTypeChoice {
            SAR_CAPABILITYCOMMANDSUBCAPABILITYTYPE_CHOICE_NONE,
            SAR_CAPABILITYCOMMANDSUBCAPABILITYTYPE_CHOICE_SAR,
            SAR_CAPABILITYCOMMANDSUBCAPABILITYTYPE_CHOICE_ISAR
         };


         /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active.
           *
           * @return The selected item's enumerated value
           */
         virtual SAR_CapabilityCommandSubCapabilityTypeChoice getSAR_CapabilityCommandSubCapabilityTypeChoiceOrdinal() const
            throw(uci::base::UCIException) = 0;


         /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
           * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
           * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
           * getSAR_CapabilityCommandSubCapabilityTypeChoiceOrdinal() will be the ordinal specified when this method was invoked.
           * In addition, the access methods associated with the chosen element will be enabled and will provide access to the
           * chosen element.
           *
           * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
           * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
           *      The use of this parameter provides support for inheritable types. This parameter defaults to
           *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
           *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
           *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
           *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
           *      base type.
           */
         virtual void setSAR_CapabilityCommandSubCapabilityTypeChoiceOrdinal(SAR_CapabilityCommandSubCapabilityTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by SAR.
           */
         virtual const uci::type::SAR_SubCapabilityType& getSAR() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by SAR.
           */
         virtual uci::type::SAR_SubCapabilityType& getSAR()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SAR to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SAR
           */
         virtual void setSAR(const uci::type::SAR_SubCapabilityType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ISAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by ISAR.
           */
         virtual const uci::type::ISAR_SubCapabilityType& getISAR() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ISAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by ISAR.
           */
         virtual uci::type::ISAR_SubCapabilityType& getISAR()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ISAR to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ISAR
           */
         virtual void setISAR(const uci::type::ISAR_SubCapabilityType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SAR_CapabilityCommandSubCapabilityType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SAR_CapabilityCommandSubCapabilityType to copy from
           */
         SAR_CapabilityCommandSubCapabilityType(const SAR_CapabilityCommandSubCapabilityType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SAR_CapabilityCommandSubCapabilityType to the contents of the
           * SAR_CapabilityCommandSubCapabilityType on the right hand side (rhs) of the assignment
           * operator.SAR_CapabilityCommandSubCapabilityType [only available to derived classes]
           *
           * @param rhs The SAR_CapabilityCommandSubCapabilityType on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::SAR_CapabilityCommandSubCapabilityType
           * @return A constant reference to this SAR_CapabilityCommandSubCapabilityType.
           */
         const SAR_CapabilityCommandSubCapabilityType& operator=(const SAR_CapabilityCommandSubCapabilityType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SAR_CapabilityCommandSubCapabilityType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SAR_CapabilityCommandSubCapabilityType_h

