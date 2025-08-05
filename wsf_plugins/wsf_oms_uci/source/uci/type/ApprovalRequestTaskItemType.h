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
#ifndef Uci__Type__ApprovalRequestTaskItemType_h
#define Uci__Type__ApprovalRequestTaskItemType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__TaskID_Type_h)
# include "uci/type/TaskID_Type.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__DMPI_ID_Type_h)
# include "uci/type/DMPI_ID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ApprovalRequestTaskItemType sequence accessor class */
      class ApprovalRequestTaskItemType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ApprovalRequestTaskItemType()
         { }

         /** Returns this accessor's type constant, i.e. ApprovalRequestTaskItemType
           *
           * @return This accessor's type constant, i.e. ApprovalRequestTaskItemType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::approvalRequestTaskItemType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ApprovalRequestTaskItemType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates the unique ID of the DMPI(s) to be approved. If any DMPIs given here are approved, the
           * ApprovalRequestStatus will indicate APPROVED. If a DMPI given here is not listed in the ApprovalRequestStatus it is
           * not approved, even if the ApprovalRequestStatus indicates APPROVED. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::DMPI_ID_Type, uci::type::accessorType::dMPI_ID_Type> DMPI_ID;

         /** Returns the accessor that provides access to the complex content that is identified by the TaskID.
           *
           * @return The acecssor that provides access to the complex content that is identified by TaskID.
           */
         virtual const uci::type::TaskID_Type& getTaskID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the TaskID.
           *
           * @return The acecssor that provides access to the complex content that is identified by TaskID.
           */
         virtual uci::type::TaskID_Type& getTaskID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the TaskID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by TaskID
           */
         virtual void setTaskID(const uci::type::TaskID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the DMPI_ID.
           *
           * @return The bounded list identified by DMPI_ID.
           */
         virtual const uci::type::ApprovalRequestTaskItemType::DMPI_ID& getDMPI_ID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the DMPI_ID.
           *
           * @return The bounded list identified by DMPI_ID.
           */
         virtual uci::type::ApprovalRequestTaskItemType::DMPI_ID& getDMPI_ID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the DMPI_ID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setDMPI_ID(const uci::type::ApprovalRequestTaskItemType::DMPI_ID& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ApprovalRequestTaskItemType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ApprovalRequestTaskItemType to copy from
           */
         ApprovalRequestTaskItemType(const ApprovalRequestTaskItemType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ApprovalRequestTaskItemType to the contents of the
           * ApprovalRequestTaskItemType on the right hand side (rhs) of the assignment operator.ApprovalRequestTaskItemType [only
           * available to derived classes]
           *
           * @param rhs The ApprovalRequestTaskItemType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::ApprovalRequestTaskItemType
           * @return A constant reference to this ApprovalRequestTaskItemType.
           */
         const ApprovalRequestTaskItemType& operator=(const ApprovalRequestTaskItemType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ApprovalRequestTaskItemType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ApprovalRequestTaskItemType_h

