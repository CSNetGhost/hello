// This file was generated  on 12/5/2018 at 1:1:45 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__CommSchedulingRequirementMDT_h
#define Uci__Type__CommSchedulingRequirementMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__CommSchedulingRequirementID_Type_h)
# include "uci/type/CommSchedulingRequirementID_Type.h"
#endif

#if !defined(Uci__Type__CommSchedulingRequirementStateEnum_h)
# include "uci/type/CommSchedulingRequirementStateEnum.h"
#endif

#if !defined(Uci__Type__SystemID_Type_h)
# include "uci/type/SystemID_Type.h"
#endif

#if !defined(Uci__Type__CommCoverageUserDataType_h)
# include "uci/type/CommCoverageUserDataType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__CommRequirementMissionPlanReferenceType_h)
# include "uci/type/CommRequirementMissionPlanReferenceType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CommSchedulingRequirementMDT sequence accessor class */
      class CommSchedulingRequirementMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~CommSchedulingRequirementMDT()
         { }

         /** Returns this accessor's type constant, i.e. CommSchedulingRequirementMDT
           *
           * @return This accessor's type constant, i.e. CommSchedulingRequirementMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::commSchedulingRequirementMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CommSchedulingRequirementMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates what mission plans, paths of plans and segments of paths have been used to formulate this requirement, if
           * applicable. It is not expected that this element be updated as dynamic replanning occurs and new mission plan IDs are
           * generated. It is simply for traceability to the plan that was initially being considered when the requirement was
           * generated. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::CommRequirementMissionPlanReferenceType, uci::type::accessorType::commRequirementMissionPlanReferenceType> RequirementMissionPlanID;

         /** Returns the accessor that provides access to the complex content that is identified by the RequirementID.
           *
           * @return The acecssor that provides access to the complex content that is identified by RequirementID.
           */
         virtual const uci::type::CommSchedulingRequirementID_Type& getRequirementID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RequirementID.
           *
           * @return The acecssor that provides access to the complex content that is identified by RequirementID.
           */
         virtual uci::type::CommSchedulingRequirementID_Type& getRequirementID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the RequirementID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by RequirementID
           */
         virtual void setRequirementID(const uci::type::CommSchedulingRequirementID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the RequirementState.
           *
           * @return The value of the enumeration identified by RequirementState.
           */
         virtual const uci::type::CommSchedulingRequirementStateEnum& getRequirementState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the RequirementState.
           *
           * @return The value of the enumeration identified by RequirementState.
           */
         virtual uci::type::CommSchedulingRequirementStateEnum& getRequirementState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequirementState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequirementState(const uci::type::CommSchedulingRequirementStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequirementState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequirementState(uci::type::CommSchedulingRequirementStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RequestingSystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by RequestingSystemID.
           */
         virtual const uci::type::SystemID_Type& getRequestingSystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RequestingSystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by RequestingSystemID.
           */
         virtual uci::type::SystemID_Type& getRequestingSystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the RequestingSystemID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by RequestingSystemID
           */
         virtual void setRequestingSystemID(const uci::type::SystemID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommRequirementData.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommRequirementData.
           */
         virtual const uci::type::CommCoverageUserDataType& getCommRequirementData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommRequirementData.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommRequirementData.
           */
         virtual uci::type::CommCoverageUserDataType& getCommRequirementData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CommRequirementData to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CommRequirementData
           */
         virtual void setCommRequirementData(const uci::type::CommCoverageUserDataType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the RequirementMissionPlanID.
           *
           * @return The bounded list identified by RequirementMissionPlanID.
           */
         virtual const uci::type::CommSchedulingRequirementMDT::RequirementMissionPlanID& getRequirementMissionPlanID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the RequirementMissionPlanID.
           *
           * @return The bounded list identified by RequirementMissionPlanID.
           */
         virtual uci::type::CommSchedulingRequirementMDT::RequirementMissionPlanID& getRequirementMissionPlanID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the RequirementMissionPlanID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setRequirementMissionPlanID(const uci::type::CommSchedulingRequirementMDT::RequirementMissionPlanID& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CommSchedulingRequirementMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CommSchedulingRequirementMDT to copy from
           */
         CommSchedulingRequirementMDT(const CommSchedulingRequirementMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CommSchedulingRequirementMDT to the contents of the
           * CommSchedulingRequirementMDT on the right hand side (rhs) of the assignment operator.CommSchedulingRequirementMDT
           * [only available to derived classes]
           *
           * @param rhs The CommSchedulingRequirementMDT on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::CommSchedulingRequirementMDT
           * @return A constant reference to this CommSchedulingRequirementMDT.
           */
         const CommSchedulingRequirementMDT& operator=(const CommSchedulingRequirementMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CommSchedulingRequirementMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CommSchedulingRequirementMDT_h

