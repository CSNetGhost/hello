// This file was generated  on 12/5/2018 at 1:1:46 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__ESM_SubcapabilityAcquisitionType_h
#define Uci__Type__ESM_SubcapabilityAcquisitionType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ESM_AcquisitionTargetType_h)
# include "uci/type/ESM_AcquisitionTargetType.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityTargetLocationDataType_h)
# include "uci/type/ESM_SubcapabilityTargetLocationDataType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__FrequencyRangeType_h)
# include "uci/type/FrequencyRangeType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ESM_SubcapabilityAcquisitionType sequence accessor class */
      class ESM_SubcapabilityAcquisitionType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ESM_SubcapabilityAcquisitionType()
         { }

         /** Returns this accessor's type constant, i.e. ESM_SubcapabilityAcquisitionType
           *
           * @return This accessor's type constant, i.e. ESM_SubcapabilityAcquisitionType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::eSM_SubcapabilityAcquisitionType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ESM_SubcapabilityAcquisitionType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates a specific frequency to be used for the Acquisition command. If omitted, the command defers to the active
           * MDF. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType> FrequencyRestriction;

         /** Returns the accessor that provides access to the complex content that is identified by the TargetEmitterData.
           *
           * @return The acecssor that provides access to the complex content that is identified by TargetEmitterData.
           */
         virtual const uci::type::ESM_AcquisitionTargetType& getTargetEmitterData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the TargetEmitterData.
           *
           * @return The acecssor that provides access to the complex content that is identified by TargetEmitterData.
           */
         virtual uci::type::ESM_AcquisitionTargetType& getTargetEmitterData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the TargetEmitterData to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by TargetEmitterData
           */
         virtual void setTargetEmitterData(const uci::type::ESM_AcquisitionTargetType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by TargetEmitterData exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by TargetEmitterData is emabled or not
           */
         virtual bool hasTargetEmitterData() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by TargetEmitterData
           *
           * @param type = uci::type::accessorType::eSM_AcquisitionTargetType This Accessor's accessor type
           */
         virtual void enableTargetEmitterData(uci::base::accessorType::AccessorType type = uci::type::accessorType::eSM_AcquisitionTargetType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by TargetEmitterData */
         virtual void clearTargetEmitterData()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the TargetLocationData.
           *
           * @return The acecssor that provides access to the complex content that is identified by TargetLocationData.
           */
         virtual const uci::type::ESM_SubcapabilityTargetLocationDataType& getTargetLocationData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the TargetLocationData.
           *
           * @return The acecssor that provides access to the complex content that is identified by TargetLocationData.
           */
         virtual uci::type::ESM_SubcapabilityTargetLocationDataType& getTargetLocationData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the TargetLocationData to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by TargetLocationData
           */
         virtual void setTargetLocationData(const uci::type::ESM_SubcapabilityTargetLocationDataType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by TargetLocationData exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by TargetLocationData is emabled or not
           */
         virtual bool hasTargetLocationData() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by TargetLocationData
           *
           * @param type = uci::type::accessorType::eSM_SubcapabilityTargetLocationDataType This Accessor's accessor type
           */
         virtual void enableTargetLocationData(uci::base::accessorType::AccessorType type = uci::type::accessorType::eSM_SubcapabilityTargetLocationDataType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by TargetLocationData */
         virtual void clearTargetLocationData()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the FrequencyRestriction.
           *
           * @return The bounded list identified by FrequencyRestriction.
           */
         virtual const uci::type::ESM_SubcapabilityAcquisitionType::FrequencyRestriction& getFrequencyRestriction() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the FrequencyRestriction.
           *
           * @return The bounded list identified by FrequencyRestriction.
           */
         virtual uci::type::ESM_SubcapabilityAcquisitionType::FrequencyRestriction& getFrequencyRestriction()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the FrequencyRestriction.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setFrequencyRestriction(const uci::type::ESM_SubcapabilityAcquisitionType::FrequencyRestriction& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ESM_SubcapabilityAcquisitionType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ESM_SubcapabilityAcquisitionType to copy from
           */
         ESM_SubcapabilityAcquisitionType(const ESM_SubcapabilityAcquisitionType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ESM_SubcapabilityAcquisitionType to the contents of the
           * ESM_SubcapabilityAcquisitionType on the right hand side (rhs) of the assignment
           * operator.ESM_SubcapabilityAcquisitionType [only available to derived classes]
           *
           * @param rhs The ESM_SubcapabilityAcquisitionType on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::ESM_SubcapabilityAcquisitionType
           * @return A constant reference to this ESM_SubcapabilityAcquisitionType.
           */
         const ESM_SubcapabilityAcquisitionType& operator=(const ESM_SubcapabilityAcquisitionType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ESM_SubcapabilityAcquisitionType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ESM_SubcapabilityAcquisitionType_h

