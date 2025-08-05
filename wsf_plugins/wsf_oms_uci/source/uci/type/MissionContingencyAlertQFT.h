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
#ifndef Uci__Type__MissionContingencyAlertQFT_h
#define Uci__Type__MissionContingencyAlertQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__MissionContingencyAlertID_Type_h)
# include "uci/type/MissionContingencyAlertID_Type.h"
#endif

#if !defined(Uci__Type__SystemID_Type_h)
# include "uci/type/SystemID_Type.h"
#endif

#if !defined(Uci__Type__ConflictStateEnum_h)
# include "uci/type/ConflictStateEnum.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the MissionContingencyAlertQFT sequence accessor class */
      class MissionContingencyAlertQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~MissionContingencyAlertQFT()
         { }

         /** Returns this accessor's type constant, i.e. MissionContingencyAlertQFT
           *
           * @return This accessor's type constant, i.e. MissionContingencyAlertQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::missionContingencyAlertQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const MissionContingencyAlertQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::MissionContingencyAlertID_Type, uci::type::accessorType::missionContingencyAlertID_Type> MissionContingencyAlertID;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type> SourceSystemID;

         /** Returns the bounded list that is identified by the MissionContingencyAlertID.
           *
           * @return The bounded list identified by MissionContingencyAlertID.
           */
         virtual const uci::type::MissionContingencyAlertQFT::MissionContingencyAlertID& getMissionContingencyAlertID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the MissionContingencyAlertID.
           *
           * @return The bounded list identified by MissionContingencyAlertID.
           */
         virtual uci::type::MissionContingencyAlertQFT::MissionContingencyAlertID& getMissionContingencyAlertID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the MissionContingencyAlertID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setMissionContingencyAlertID(const uci::type::MissionContingencyAlertQFT::MissionContingencyAlertID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SourceSystemID.
           *
           * @return The bounded list identified by SourceSystemID.
           */
         virtual const uci::type::MissionContingencyAlertQFT::SourceSystemID& getSourceSystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SourceSystemID.
           *
           * @return The bounded list identified by SourceSystemID.
           */
         virtual uci::type::MissionContingencyAlertQFT::SourceSystemID& getSourceSystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the SourceSystemID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setSourceSystemID(const uci::type::MissionContingencyAlertQFT::SourceSystemID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ConflictState.
           *
           * @return The value of the enumeration identified by ConflictState.
           */
         virtual const uci::type::ConflictStateEnum& getConflictState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ConflictState.
           *
           * @return The value of the enumeration identified by ConflictState.
           */
         virtual uci::type::ConflictStateEnum& getConflictState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ConflictState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setConflictState(const uci::type::ConflictStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ConflictState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setConflictState(uci::type::ConflictStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield ConflictStateis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasConflictState() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getConflictState will return the optional field and not throw an exception when
           * invoked.
           *
           * @param type = uci::type::accessorType::conflictStateEnum This Accessor's accessor type
           */
         virtual void enableConflictState(uci::base::accessorType::AccessorType type = uci::type::accessorType::conflictStateEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearConflictState()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         MissionContingencyAlertQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The MissionContingencyAlertQFT to copy from
           */
         MissionContingencyAlertQFT(const MissionContingencyAlertQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this MissionContingencyAlertQFT to the contents of the
           * MissionContingencyAlertQFT on the right hand side (rhs) of the assignment operator.MissionContingencyAlertQFT [only
           * available to derived classes]
           *
           * @param rhs The MissionContingencyAlertQFT on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::MissionContingencyAlertQFT
           * @return A constant reference to this MissionContingencyAlertQFT.
           */
         const MissionContingencyAlertQFT& operator=(const MissionContingencyAlertQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // MissionContingencyAlertQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__MissionContingencyAlertQFT_h

