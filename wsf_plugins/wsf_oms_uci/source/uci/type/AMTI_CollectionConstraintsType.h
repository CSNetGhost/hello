// This file was generated  on 12/5/2018 at 1:1:44 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__AMTI_CollectionConstraintsType_h
#define Uci__Type__AMTI_CollectionConstraintsType_h 1

#if !defined(Uci__Type__CollectionConstraintsType_h)
# include "uci/type/CollectionConstraintsType.h"
#endif

#if !defined(Uci__Type__SpeedType_h)
# include "uci/type/SpeedType.h"
#endif

#if !defined(Uci__Type__DecibelType_h)
# include "uci/type/DecibelType.h"
#endif

#if !defined(Uci__Type__CapabilityFalseAlarmLevelEnum_h)
# include "uci/type/CapabilityFalseAlarmLevelEnum.h"
#endif

#if !defined(Uci__Type__EmconConstraintType_h)
# include "uci/type/EmconConstraintType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the AMTI_CollectionConstraintsType sequence accessor class */
      class AMTI_CollectionConstraintsType : public virtual uci::type::CollectionConstraintsType {
      public:

         /** The destructor */
         virtual ~AMTI_CollectionConstraintsType()
         { }

         /** Returns this accessor's type constant, i.e. AMTI_CollectionConstraintsType
           *
           * @return This accessor's type constant, i.e. AMTI_CollectionConstraintsType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::aMTI_CollectionConstraintsType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const AMTI_CollectionConstraintsType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the SurfaceMoverVelocityGate.
           *
           * @return The value of the simple primitive data type identified by SurfaceMoverVelocityGate.
           */
         virtual uci::type::SpeedTypeValue getSurfaceMoverVelocityGate() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the SurfaceMoverVelocityGate.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setSurfaceMoverVelocityGate(uci::type::SpeedTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by SurfaceMoverVelocityGate exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by SurfaceMoverVelocityGate is emabled or not
           */
         virtual bool hasSurfaceMoverVelocityGate() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by SurfaceMoverVelocityGate
           *
           * @param type = uci::type::accessorType::speedType This Accessor's accessor type
           */
         virtual void enableSurfaceMoverVelocityGate(uci::base::accessorType::AccessorType type = uci::type::accessorType::speedType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by SurfaceMoverVelocityGate */
         virtual void clearSurfaceMoverVelocityGate()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the TargetRCS.
           *
           * @return The value of the simple primitive data type identified by TargetRCS.
           */
         virtual uci::type::DecibelTypeValue getTargetRCS() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the TargetRCS.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setTargetRCS(uci::type::DecibelTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by TargetRCS exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by TargetRCS is emabled or not
           */
         virtual bool hasTargetRCS() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by TargetRCS
           *
           * @param type = uci::type::accessorType::decibelType This Accessor's accessor type
           */
         virtual void enableTargetRCS(uci::base::accessorType::AccessorType type = uci::type::accessorType::decibelType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by TargetRCS */
         virtual void clearTargetRCS()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the FalseAlarmLevel.
           *
           * @return The value of the enumeration identified by FalseAlarmLevel.
           */
         virtual const uci::type::CapabilityFalseAlarmLevelEnum& getFalseAlarmLevel() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the FalseAlarmLevel.
           *
           * @return The value of the enumeration identified by FalseAlarmLevel.
           */
         virtual uci::type::CapabilityFalseAlarmLevelEnum& getFalseAlarmLevel()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the FalseAlarmLevel.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setFalseAlarmLevel(const uci::type::CapabilityFalseAlarmLevelEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the FalseAlarmLevel.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setFalseAlarmLevel(uci::type::CapabilityFalseAlarmLevelEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield FalseAlarmLevelis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasFalseAlarmLevel() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getFalseAlarmLevel will return the optional field and not throw an exception
           * when invoked.
           *
           * @param type = uci::type::accessorType::capabilityFalseAlarmLevelEnum This Accessor's accessor type
           */
         virtual void enableFalseAlarmLevel(uci::base::accessorType::AccessorType type = uci::type::accessorType::capabilityFalseAlarmLevelEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearFalseAlarmLevel()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Emcon.
           *
           * @return The acecssor that provides access to the complex content that is identified by Emcon.
           */
         virtual const uci::type::EmconConstraintType& getEmcon() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Emcon.
           *
           * @return The acecssor that provides access to the complex content that is identified by Emcon.
           */
         virtual uci::type::EmconConstraintType& getEmcon()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Emcon to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Emcon
           */
         virtual void setEmcon(const uci::type::EmconConstraintType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Emcon exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Emcon is emabled or not
           */
         virtual bool hasEmcon() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Emcon
           *
           * @param type = uci::type::accessorType::emconConstraintType This Accessor's accessor type
           */
         virtual void enableEmcon(uci::base::accessorType::AccessorType type = uci::type::accessorType::emconConstraintType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Emcon */
         virtual void clearEmcon()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         AMTI_CollectionConstraintsType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The AMTI_CollectionConstraintsType to copy from
           */
         AMTI_CollectionConstraintsType(const AMTI_CollectionConstraintsType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this AMTI_CollectionConstraintsType to the contents of the
           * AMTI_CollectionConstraintsType on the right hand side (rhs) of the assignment operator.AMTI_CollectionConstraintsType
           * [only available to derived classes]
           *
           * @param rhs The AMTI_CollectionConstraintsType on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::AMTI_CollectionConstraintsType
           * @return A constant reference to this AMTI_CollectionConstraintsType.
           */
         const AMTI_CollectionConstraintsType& operator=(const AMTI_CollectionConstraintsType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // AMTI_CollectionConstraintsType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__AMTI_CollectionConstraintsType_h

