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
#ifndef Uci__Type__MissionPlanCommandStatusMDT_h
#define Uci__Type__MissionPlanCommandStatusMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__MissionPlanCommandID_Type_h)
# include "uci/type/MissionPlanCommandID_Type.h"
#endif

#if !defined(Uci__Type__ProcessingStatusEnum_h)
# include "uci/type/ProcessingStatusEnum.h"
#endif

#if !defined(Uci__Type__CompletionStatusType_h)
# include "uci/type/CompletionStatusType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__IncompleteProcessingType_h)
# include "uci/type/IncompleteProcessingType.h"
#endif

#if !defined(Uci__Type__MissionPlanDetailsType_h)
# include "uci/type/MissionPlanDetailsType.h"
#endif

#if !defined(Uci__Type__TaskStatusMDT_h)
# include "uci/type/TaskStatusMDT.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the MissionPlanCommandStatusMDT sequence accessor class */
      class MissionPlanCommandStatusMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~MissionPlanCommandStatusMDT()
         { }

         /** Returns this accessor's type constant, i.e. MissionPlanCommandStatusMDT
           *
           * @return This accessor's type constant, i.e. MissionPlanCommandStatusMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::missionPlanCommandStatusMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const MissionPlanCommandStatusMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** This element indicates any mission planning (task allocation or route planning) that failed to complete. It is used
           * to indicate details about why a specific vehicle failed to plan. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::IncompleteProcessingType, uci::type::accessorType::incompleteProcessingType> IncompletePlanning;

         /** This element is used to provide results of the command that performed. It is optional and should be omitted if
           * ResultsInNativeMessage is set to TRUE or in a failure case. Multiple instances are expected when the corresponding
           * MissionPlanCommand results in multiple mission plans. One example is an approved allocation which results in a route
           * (MissionPlan) for each vehicle. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::MissionPlanDetailsType, uci::type::accessorType::missionPlanDetailsType> MissionPlanDetails;

         /** This element is used to provide results of the command that performed. It is optional and should be omitted if
           * ResultsInNativeMessage is set to TRUE or in a failure case. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::TaskStatusMDT, uci::type::accessorType::taskStatusMDT> TaskStatus;

         /** Returns the accessor that provides access to the complex content that is identified by the MissionPlanCommandID.
           *
           * @return The acecssor that provides access to the complex content that is identified by MissionPlanCommandID.
           */
         virtual const uci::type::MissionPlanCommandID_Type& getMissionPlanCommandID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MissionPlanCommandID.
           *
           * @return The acecssor that provides access to the complex content that is identified by MissionPlanCommandID.
           */
         virtual uci::type::MissionPlanCommandID_Type& getMissionPlanCommandID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the MissionPlanCommandID to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by MissionPlanCommandID
           */
         virtual void setMissionPlanCommandID(const uci::type::MissionPlanCommandID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the CommandStatus.
           *
           * @return The value of the enumeration identified by CommandStatus.
           */
         virtual const uci::type::ProcessingStatusEnum& getCommandStatus() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the CommandStatus.
           *
           * @return The value of the enumeration identified by CommandStatus.
           */
         virtual uci::type::ProcessingStatusEnum& getCommandStatus()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the CommandStatus.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setCommandStatus(const uci::type::ProcessingStatusEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the CommandStatus.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setCommandStatus(uci::type::ProcessingStatusEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CompletionStatus.
           *
           * @return The acecssor that provides access to the complex content that is identified by CompletionStatus.
           */
         virtual const uci::type::CompletionStatusType& getCompletionStatus() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CompletionStatus.
           *
           * @return The acecssor that provides access to the complex content that is identified by CompletionStatus.
           */
         virtual uci::type::CompletionStatusType& getCompletionStatus()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CompletionStatus to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CompletionStatus
           */
         virtual void setCompletionStatus(const uci::type::CompletionStatusType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the IncompletePlanning.
           *
           * @return The bounded list identified by IncompletePlanning.
           */
         virtual const uci::type::MissionPlanCommandStatusMDT::IncompletePlanning& getIncompletePlanning() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the IncompletePlanning.
           *
           * @return The bounded list identified by IncompletePlanning.
           */
         virtual uci::type::MissionPlanCommandStatusMDT::IncompletePlanning& getIncompletePlanning()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the IncompletePlanning.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setIncompletePlanning(const uci::type::MissionPlanCommandStatusMDT::IncompletePlanning& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the MissionPlanDetails.
           *
           * @return The bounded list identified by MissionPlanDetails.
           */
         virtual const uci::type::MissionPlanCommandStatusMDT::MissionPlanDetails& getMissionPlanDetails() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the MissionPlanDetails.
           *
           * @return The bounded list identified by MissionPlanDetails.
           */
         virtual uci::type::MissionPlanCommandStatusMDT::MissionPlanDetails& getMissionPlanDetails()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the MissionPlanDetails.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setMissionPlanDetails(const uci::type::MissionPlanCommandStatusMDT::MissionPlanDetails& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the TaskStatus.
           *
           * @return The bounded list identified by TaskStatus.
           */
         virtual const uci::type::MissionPlanCommandStatusMDT::TaskStatus& getTaskStatus() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the TaskStatus.
           *
           * @return The bounded list identified by TaskStatus.
           */
         virtual uci::type::MissionPlanCommandStatusMDT::TaskStatus& getTaskStatus()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the TaskStatus.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setTaskStatus(const uci::type::MissionPlanCommandStatusMDT::TaskStatus& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         MissionPlanCommandStatusMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The MissionPlanCommandStatusMDT to copy from
           */
         MissionPlanCommandStatusMDT(const MissionPlanCommandStatusMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this MissionPlanCommandStatusMDT to the contents of the
           * MissionPlanCommandStatusMDT on the right hand side (rhs) of the assignment operator.MissionPlanCommandStatusMDT [only
           * available to derived classes]
           *
           * @param rhs The MissionPlanCommandStatusMDT on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::MissionPlanCommandStatusMDT
           * @return A constant reference to this MissionPlanCommandStatusMDT.
           */
         const MissionPlanCommandStatusMDT& operator=(const MissionPlanCommandStatusMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // MissionPlanCommandStatusMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__MissionPlanCommandStatusMDT_h

