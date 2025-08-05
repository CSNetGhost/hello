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
#ifndef Uci__Type__EA_DetailsAssignedType_h
#define Uci__Type__EA_DetailsAssignedType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ComponentID_Type_h)
# include "uci/type/ComponentID_Type.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__EA_BeamGroupType_h)
# include "uci/type/EA_BeamGroupType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the EA_DetailsAssignedType sequence accessor class */
      class EA_DetailsAssignedType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~EA_DetailsAssignedType()
         { }

         /** Returns this accessor's type constant, i.e. EA_DetailsAssignedType
           *
           * @return This accessor's type constant, i.e. EA_DetailsAssignedType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::eA_DetailsAssignedType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const EA_DetailsAssignedType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Pairs of Receive and Transmit Beams performing a "Jam". Must choose TxBeam or RxBeam or both. [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::EA_BeamGroupType, uci::type::accessorType::eA_BeamGroupType> EA_BeamGroup;

         /** Returns the accessor that provides access to the complex content that is identified by the ComponentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ComponentID.
           */
         virtual const uci::type::ComponentID_Type& getComponentID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ComponentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ComponentID.
           */
         virtual uci::type::ComponentID_Type& getComponentID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ComponentID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ComponentID
           */
         virtual void setComponentID(const uci::type::ComponentID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the EA_BeamGroup.
           *
           * @return The bounded list identified by EA_BeamGroup.
           */
         virtual const uci::type::EA_DetailsAssignedType::EA_BeamGroup& getEA_BeamGroup() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the EA_BeamGroup.
           *
           * @return The bounded list identified by EA_BeamGroup.
           */
         virtual uci::type::EA_DetailsAssignedType::EA_BeamGroup& getEA_BeamGroup()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the EA_BeamGroup.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setEA_BeamGroup(const uci::type::EA_DetailsAssignedType::EA_BeamGroup& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         EA_DetailsAssignedType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The EA_DetailsAssignedType to copy from
           */
         EA_DetailsAssignedType(const EA_DetailsAssignedType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this EA_DetailsAssignedType to the contents of the
           * EA_DetailsAssignedType on the right hand side (rhs) of the assignment operator.EA_DetailsAssignedType [only available
           * to derived classes]
           *
           * @param rhs The EA_DetailsAssignedType on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::EA_DetailsAssignedType
           * @return A constant reference to this EA_DetailsAssignedType.
           */
         const EA_DetailsAssignedType& operator=(const EA_DetailsAssignedType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // EA_DetailsAssignedType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__EA_DetailsAssignedType_h

