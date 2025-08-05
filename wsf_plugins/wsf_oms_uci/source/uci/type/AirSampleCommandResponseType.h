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
#ifndef Uci__Type__AirSampleCommandResponseType_h
#define Uci__Type__AirSampleCommandResponseType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__AirSampleCapabilityEnum_h)
# include "uci/type/AirSampleCapabilityEnum.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__ProductOutputCommandBasicType_h)
# include "uci/type/ProductOutputCommandBasicType.h"
#endif

#if !defined(Uci__Type__TaskAllocationConstraintType_h)
# include "uci/type/TaskAllocationConstraintType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the AirSampleCommandResponseType sequence accessor class */
      class AirSampleCommandResponseType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~AirSampleCommandResponseType()
         { }

         /** Returns this accessor's type constant, i.e. AirSampleCommandResponseType
           *
           * @return This accessor's type constant, i.e. AirSampleCommandResponseType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::airSampleCommandResponseType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const AirSampleCommandResponseType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates a required output Product of the Command. Only Products consistent with AirSample and supported by the
           * commanded AirSample Capability should be requested. If omitted, no output Product should be produced. See
           * ProductTypeEnum for further details. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::ProductOutputCommandBasicType, uci::type::accessorType::productOutputCommandBasicType> ProductOutput;

         /** Indicates the System and optionally Capability that this task should be allocated to during the allocation process.
           * However, allocation to another System is acceptable. If multiple preferred Systems are given: 1) allocation to any
           * one of the Systems is the minimum expectation, 2) decomposition of the Task into multiple child Tasks allocated
           * across the multiple preferred Systems is acceptable, 3) there is no expectation that each preferred System must
           * perform the Task. This element allows the Task creator to suggest an allocation to a specific System at the risk of a
           * less than optimal overall solution. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::TaskAllocationConstraintType, uci::type::accessorType::taskAllocationConstraintType> PreferredAllocation;

         /** Returns the value of the enumeration that is identified by the Capability.
           *
           * @return The value of the enumeration identified by Capability.
           */
         virtual const uci::type::AirSampleCapabilityEnum& getCapability() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the Capability.
           *
           * @return The value of the enumeration identified by Capability.
           */
         virtual uci::type::AirSampleCapabilityEnum& getCapability()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the Capability.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setCapability(const uci::type::AirSampleCapabilityEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the Capability.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setCapability(uci::type::AirSampleCapabilityEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ProductOutput.
           *
           * @return The bounded list identified by ProductOutput.
           */
         virtual const uci::type::AirSampleCommandResponseType::ProductOutput& getProductOutput() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ProductOutput.
           *
           * @return The bounded list identified by ProductOutput.
           */
         virtual uci::type::AirSampleCommandResponseType::ProductOutput& getProductOutput()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the ProductOutput.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setProductOutput(const uci::type::AirSampleCommandResponseType::ProductOutput& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the PreferredAllocation.
           *
           * @return The bounded list identified by PreferredAllocation.
           */
         virtual const uci::type::AirSampleCommandResponseType::PreferredAllocation& getPreferredAllocation() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the PreferredAllocation.
           *
           * @return The bounded list identified by PreferredAllocation.
           */
         virtual uci::type::AirSampleCommandResponseType::PreferredAllocation& getPreferredAllocation()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the PreferredAllocation.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setPreferredAllocation(const uci::type::AirSampleCommandResponseType::PreferredAllocation& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         AirSampleCommandResponseType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The AirSampleCommandResponseType to copy from
           */
         AirSampleCommandResponseType(const AirSampleCommandResponseType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this AirSampleCommandResponseType to the contents of the
           * AirSampleCommandResponseType on the right hand side (rhs) of the assignment operator.AirSampleCommandResponseType
           * [only available to derived classes]
           *
           * @param rhs The AirSampleCommandResponseType on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::AirSampleCommandResponseType
           * @return A constant reference to this AirSampleCommandResponseType.
           */
         const AirSampleCommandResponseType& operator=(const AirSampleCommandResponseType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // AirSampleCommandResponseType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__AirSampleCommandResponseType_h

