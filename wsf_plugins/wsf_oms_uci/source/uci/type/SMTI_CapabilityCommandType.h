// This file was generated  on 12/5/2018 at 1:1:48 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__SMTI_CapabilityCommandType_h
#define Uci__Type__SMTI_CapabilityCommandType_h 1

#if !defined(Uci__Type__CapabilityCommandBaseType_h)
# include "uci/type/CapabilityCommandBaseType.h"
#endif

#if !defined(Uci__Type__RadarPointingTargetType_h)
# include "uci/type/RadarPointingTargetType.h"
#endif

#if !defined(Uci__Type__CapabilityCommandFrequencyType_h)
# include "uci/type/CapabilityCommandFrequencyType.h"
#endif

#if !defined(Uci__Type__SMTI_CollectionOptionsType_h)
# include "uci/type/SMTI_CollectionOptionsType.h"
#endif

#if !defined(Uci__Type__SMTI_CollectionConstraintsType_h)
# include "uci/type/SMTI_CollectionConstraintsType.h"
#endif

#if !defined(Uci__Type__ECEF_UnitVectorType_h)
# include "uci/type/ECEF_UnitVectorType.h"
#endif

#if !defined(Uci__Type__DistanceType_h)
# include "uci/type/DistanceType.h"
#endif

#if !defined(Uci__Base__DoubleAccessor_h)
# include "uci/base/DoubleAccessor.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__AtmosphericPropagationLossType_h)
# include "uci/type/AtmosphericPropagationLossType.h"
#endif

#if !defined(Uci__Type__WeatherSeaStateEnum_h)
# include "uci/type/WeatherSeaStateEnum.h"
#endif

#if !defined(Uci__Type__CommandRepetitionType_h)
# include "uci/type/CommandRepetitionType.h"
#endif

#if !defined(Uci__Type__ProductOutputCommandSMTI_Type_h)
# include "uci/type/ProductOutputCommandSMTI_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SMTI_CapabilityCommandType sequence accessor class */
      class SMTI_CapabilityCommandType : public virtual uci::type::CapabilityCommandBaseType {
      public:

         /** The destructor */
         virtual ~SMTI_CapabilityCommandType()
         { }

         /** Returns this accessor's type constant, i.e. SMTI_CapabilityCommandType
           *
           * @return This accessor's type constant, i.e. SMTI_CapabilityCommandType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::sMTI_CapabilityCommandType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SMTI_CapabilityCommandType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Atmospheric propagation information to be used when determining CNR or range/power levels. If multiple instances are
           * given, each should be of a different band as indicated by the child element. [Minimum occurrences: 0] [Maximum
           * occurrences: 12]
           */
         typedef uci::base::BoundedList<uci::type::AtmosphericPropagationLossType, uci::type::accessorType::atmosphericPropagationLossType> AtmosphericPropagation;

         /** Indicates a required output Product of the Command. Only Products consistent with SMTI and supported by the commanded
           * SMTI Capability should be requested. If omitted, no output Product should be produced. See ProductTypeEnum for
           * further details. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::ProductOutputCommandSMTI_Type, uci::type::accessorType::productOutputCommandSMTI_Type> ProductOutput;

         /** Returns the accessor that provides access to the complex content that is identified by the RadarPointingTarget.
           *
           * @return The acecssor that provides access to the complex content that is identified by RadarPointingTarget.
           */
         virtual const uci::type::RadarPointingTargetType& getRadarPointingTarget() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RadarPointingTarget.
           *
           * @return The acecssor that provides access to the complex content that is identified by RadarPointingTarget.
           */
         virtual uci::type::RadarPointingTargetType& getRadarPointingTarget()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the RadarPointingTarget to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by RadarPointingTarget
           */
         virtual void setRadarPointingTarget(const uci::type::RadarPointingTargetType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Frequency.
           *
           * @return The acecssor that provides access to the complex content that is identified by Frequency.
           */
         virtual const uci::type::CapabilityCommandFrequencyType& getFrequency() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Frequency.
           *
           * @return The acecssor that provides access to the complex content that is identified by Frequency.
           */
         virtual uci::type::CapabilityCommandFrequencyType& getFrequency()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Frequency to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Frequency
           */
         virtual void setFrequency(const uci::type::CapabilityCommandFrequencyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Frequency exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Frequency is emabled or not
           */
         virtual bool hasFrequency() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Frequency
           *
           * @param type = uci::type::accessorType::capabilityCommandFrequencyType This Accessor's accessor type
           */
         virtual void enableFrequency(uci::base::accessorType::AccessorType type = uci::type::accessorType::capabilityCommandFrequencyType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Frequency */
         virtual void clearFrequency()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CollectionOptions.
           *
           * @return The acecssor that provides access to the complex content that is identified by CollectionOptions.
           */
         virtual const uci::type::SMTI_CollectionOptionsType& getCollectionOptions() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CollectionOptions.
           *
           * @return The acecssor that provides access to the complex content that is identified by CollectionOptions.
           */
         virtual uci::type::SMTI_CollectionOptionsType& getCollectionOptions()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CollectionOptions to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CollectionOptions
           */
         virtual void setCollectionOptions(const uci::type::SMTI_CollectionOptionsType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by CollectionOptions exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by CollectionOptions is emabled or not
           */
         virtual bool hasCollectionOptions() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by CollectionOptions
           *
           * @param type = uci::type::accessorType::sMTI_CollectionOptionsType This Accessor's accessor type
           */
         virtual void enableCollectionOptions(uci::base::accessorType::AccessorType type = uci::type::accessorType::sMTI_CollectionOptionsType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by CollectionOptions */
         virtual void clearCollectionOptions()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CollectionConstraints.
           *
           * @return The acecssor that provides access to the complex content that is identified by CollectionConstraints.
           */
         virtual const uci::type::SMTI_CollectionConstraintsType& getCollectionConstraints() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CollectionConstraints.
           *
           * @return The acecssor that provides access to the complex content that is identified by CollectionConstraints.
           */
         virtual uci::type::SMTI_CollectionConstraintsType& getCollectionConstraints()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CollectionConstraints to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CollectionConstraints
           */
         virtual void setCollectionConstraints(const uci::type::SMTI_CollectionConstraintsType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by CollectionConstraints exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by CollectionConstraints is emabled or not
           */
         virtual bool hasCollectionConstraints() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by CollectionConstraints
           *
           * @param type = uci::type::accessorType::sMTI_CollectionConstraintsType This Accessor's accessor type
           */
         virtual void enableCollectionConstraints(uci::base::accessorType::AccessorType type = uci::type::accessorType::sMTI_CollectionConstraintsType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by CollectionConstraints */
         virtual void clearCollectionConstraints()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PlaneNormalUnitVector.
           *
           * @return The acecssor that provides access to the complex content that is identified by PlaneNormalUnitVector.
           */
         virtual const uci::type::ECEF_UnitVectorType& getPlaneNormalUnitVector() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PlaneNormalUnitVector.
           *
           * @return The acecssor that provides access to the complex content that is identified by PlaneNormalUnitVector.
           */
         virtual uci::type::ECEF_UnitVectorType& getPlaneNormalUnitVector()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the PlaneNormalUnitVector to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by PlaneNormalUnitVector
           */
         virtual void setPlaneNormalUnitVector(const uci::type::ECEF_UnitVectorType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by PlaneNormalUnitVector exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by PlaneNormalUnitVector is emabled or not
           */
         virtual bool hasPlaneNormalUnitVector() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by PlaneNormalUnitVector
           *
           * @param type = uci::type::accessorType::eCEF_UnitVectorType This Accessor's accessor type
           */
         virtual void enablePlaneNormalUnitVector(uci::base::accessorType::AccessorType type = uci::type::accessorType::eCEF_UnitVectorType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by PlaneNormalUnitVector */
         virtual void clearPlaneNormalUnitVector()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the TrackingRange.
           *
           * @return The value of the simple primitive data type identified by TrackingRange.
           */
         virtual uci::type::DistanceTypeValue getTrackingRange() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the TrackingRange.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setTrackingRange(uci::type::DistanceTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by TrackingRange exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by TrackingRange is emabled or not
           */
         virtual bool hasTrackingRange() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by TrackingRange
           *
           * @param type = uci::type::accessorType::distanceType This Accessor's accessor type
           */
         virtual void enableTrackingRange(uci::base::accessorType::AccessorType type = uci::type::accessorType::distanceType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by TrackingRange */
         virtual void clearTrackingRange()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the CoefficientOfTroposphericRefraction.
           *
           * @return The value of the simple primitive data type identified by CoefficientOfTroposphericRefraction.
           */
         virtual xs::Double getCoefficientOfTroposphericRefraction() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the CoefficientOfTroposphericRefraction.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setCoefficientOfTroposphericRefraction(xs::Double value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by CoefficientOfTroposphericRefraction exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by CoefficientOfTroposphericRefraction is emabled or not
           */
         virtual bool hasCoefficientOfTroposphericRefraction() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by CoefficientOfTroposphericRefraction
           *
           * @param type = uci::base::accessorType::doubleAccessor This Accessor's accessor type
           */
         virtual void enableCoefficientOfTroposphericRefraction(uci::base::accessorType::AccessorType type = uci::base::accessorType::doubleAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by CoefficientOfTroposphericRefraction */
         virtual void clearCoefficientOfTroposphericRefraction()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the AtmosphericPropagation.
           *
           * @return The bounded list identified by AtmosphericPropagation.
           */
         virtual const uci::type::SMTI_CapabilityCommandType::AtmosphericPropagation& getAtmosphericPropagation() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the AtmosphericPropagation.
           *
           * @return The bounded list identified by AtmosphericPropagation.
           */
         virtual uci::type::SMTI_CapabilityCommandType::AtmosphericPropagation& getAtmosphericPropagation()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the AtmosphericPropagation.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setAtmosphericPropagation(const uci::type::SMTI_CapabilityCommandType::AtmosphericPropagation& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SeaState.
           *
           * @return The value of the enumeration identified by SeaState.
           */
         virtual const uci::type::WeatherSeaStateEnum& getSeaState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SeaState.
           *
           * @return The value of the enumeration identified by SeaState.
           */
         virtual uci::type::WeatherSeaStateEnum& getSeaState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SeaState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSeaState(const uci::type::WeatherSeaStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SeaState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSeaState(uci::type::WeatherSeaStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield SeaStateis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasSeaState() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getSeaState will return the optional field and not throw an exception when
           * invoked.
           *
           * @param type = uci::type::accessorType::weatherSeaStateEnum This Accessor's accessor type
           */
         virtual void enableSeaState(uci::base::accessorType::AccessorType type = uci::type::accessorType::weatherSeaStateEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearSeaState()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Repetition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Repetition.
           */
         virtual const uci::type::CommandRepetitionType& getRepetition() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Repetition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Repetition.
           */
         virtual uci::type::CommandRepetitionType& getRepetition()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Repetition to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Repetition
           */
         virtual void setRepetition(const uci::type::CommandRepetitionType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Repetition exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Repetition is emabled or not
           */
         virtual bool hasRepetition() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Repetition
           *
           * @param type = uci::type::accessorType::commandRepetitionType This Accessor's accessor type
           */
         virtual void enableRepetition(uci::base::accessorType::AccessorType type = uci::type::accessorType::commandRepetitionType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Repetition */
         virtual void clearRepetition()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ProductOutput.
           *
           * @return The bounded list identified by ProductOutput.
           */
         virtual const uci::type::SMTI_CapabilityCommandType::ProductOutput& getProductOutput() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ProductOutput.
           *
           * @return The bounded list identified by ProductOutput.
           */
         virtual uci::type::SMTI_CapabilityCommandType::ProductOutput& getProductOutput()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the ProductOutput.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setProductOutput(const uci::type::SMTI_CapabilityCommandType::ProductOutput& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SMTI_CapabilityCommandType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SMTI_CapabilityCommandType to copy from
           */
         SMTI_CapabilityCommandType(const SMTI_CapabilityCommandType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SMTI_CapabilityCommandType to the contents of the
           * SMTI_CapabilityCommandType on the right hand side (rhs) of the assignment operator.SMTI_CapabilityCommandType [only
           * available to derived classes]
           *
           * @param rhs The SMTI_CapabilityCommandType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::SMTI_CapabilityCommandType
           * @return A constant reference to this SMTI_CapabilityCommandType.
           */
         const SMTI_CapabilityCommandType& operator=(const SMTI_CapabilityCommandType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SMTI_CapabilityCommandType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SMTI_CapabilityCommandType_h

