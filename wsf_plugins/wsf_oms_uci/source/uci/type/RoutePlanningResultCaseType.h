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
#ifndef Uci__Type__RoutePlanningResultCaseType_h
#define Uci__Type__RoutePlanningResultCaseType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__MissionPlanningByResultTriggerDataType_h)
# include "uci/type/MissionPlanningByResultTriggerDataType.h"
#endif

#if !defined(Uci__Type__PlanningResultApprovalPolicyType_h)
# include "uci/type/PlanningResultApprovalPolicyType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Route Planning result cases which are specific to approvals. */
      class RoutePlanningResultCaseType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~RoutePlanningResultCaseType()
         { }

         /** Returns this accessor's type constant, i.e. RoutePlanningResultCaseType
           *
           * @return This accessor's type constant, i.e. RoutePlanningResultCaseType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::routePlanningResultCaseType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const RoutePlanningResultCaseType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Trigger.
           *
           * @return The acecssor that provides access to the complex content that is identified by Trigger.
           */
         virtual const uci::type::MissionPlanningByResultTriggerDataType& getTrigger() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Trigger.
           *
           * @return The acecssor that provides access to the complex content that is identified by Trigger.
           */
         virtual uci::type::MissionPlanningByResultTriggerDataType& getTrigger()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Trigger to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Trigger
           */
         virtual void setTrigger(const uci::type::MissionPlanningByResultTriggerDataType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DefaultPolicy.
           *
           * @return The acecssor that provides access to the complex content that is identified by DefaultPolicy.
           */
         virtual const uci::type::PlanningResultApprovalPolicyType& getDefaultPolicy() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DefaultPolicy.
           *
           * @return The acecssor that provides access to the complex content that is identified by DefaultPolicy.
           */
         virtual uci::type::PlanningResultApprovalPolicyType& getDefaultPolicy()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the DefaultPolicy to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by DefaultPolicy
           */
         virtual void setDefaultPolicy(const uci::type::PlanningResultApprovalPolicyType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         RoutePlanningResultCaseType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The RoutePlanningResultCaseType to copy from
           */
         RoutePlanningResultCaseType(const RoutePlanningResultCaseType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this RoutePlanningResultCaseType to the contents of the
           * RoutePlanningResultCaseType on the right hand side (rhs) of the assignment operator.RoutePlanningResultCaseType [only
           * available to derived classes]
           *
           * @param rhs The RoutePlanningResultCaseType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::RoutePlanningResultCaseType
           * @return A constant reference to this RoutePlanningResultCaseType.
           */
         const RoutePlanningResultCaseType& operator=(const RoutePlanningResultCaseType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // RoutePlanningResultCaseType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__RoutePlanningResultCaseType_h

