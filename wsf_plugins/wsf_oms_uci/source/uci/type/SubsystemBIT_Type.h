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
#ifndef Uci__Type__SubsystemBIT_Type_h
#define Uci__Type__SubsystemBIT_Type_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__BIT_ID_Type_h)
# include "uci/type/BIT_ID_Type.h"
#endif

#if !defined(Uci__Type__SubsystemBIT_ControlInterfacesEnum_h)
# include "uci/type/SubsystemBIT_ControlInterfacesEnum.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__VisibleString256Type_h)
# include "uci/type/VisibleString256Type.h"
#endif

#if !defined(Uci__Type__ComponentID_Type_h)
# include "uci/type/ComponentID_Type.h"
#endif

#if !defined(Uci__Type__CapabilityID_Type_h)
# include "uci/type/CapabilityID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SubsystemBIT_Type sequence accessor class */
      class SubsystemBIT_Type : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~SubsystemBIT_Type()
         { }

         /** Returns this accessor's type constant, i.e. SubsystemBIT_Type
           *
           * @return This accessor's type constant, i.e. SubsystemBIT_Type
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::subsystemBIT_Type;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SubsystemBIT_Type& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates the name of a non-Component, non-Capability item tested by the BIT. BIT items can be logical or physical,
           * singular or aggregated. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::VisibleString256Type, uci::type::accessorType::visibleString256Type> BIT_ItemName;

         /** Indicates a Component that is at least partially tested by the BIT. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::ComponentID_Type, uci::type::accessorType::componentID_Type> SubsystemComponentID;

         /** Indicates a Capability that is at least partially tested by the BIT. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

         /** Returns the accessor that provides access to the complex content that is identified by the BIT_ID.
           *
           * @return The acecssor that provides access to the complex content that is identified by BIT_ID.
           */
         virtual const uci::type::BIT_ID_Type& getBIT_ID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the BIT_ID.
           *
           * @return The acecssor that provides access to the complex content that is identified by BIT_ID.
           */
         virtual uci::type::BIT_ID_Type& getBIT_ID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the BIT_ID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by BIT_ID
           */
         virtual void setBIT_ID(const uci::type::BIT_ID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the AcceptedInterface.
           *
           * @return The value of the enumeration identified by AcceptedInterface.
           */
         virtual const uci::type::SubsystemBIT_ControlInterfacesEnum& getAcceptedInterface() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the AcceptedInterface.
           *
           * @return The value of the enumeration identified by AcceptedInterface.
           */
         virtual uci::type::SubsystemBIT_ControlInterfacesEnum& getAcceptedInterface()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the AcceptedInterface.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setAcceptedInterface(const uci::type::SubsystemBIT_ControlInterfacesEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the AcceptedInterface.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setAcceptedInterface(uci::type::SubsystemBIT_ControlInterfacesEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the BIT_ItemName.
           *
           * @return The bounded list identified by BIT_ItemName.
           */
         virtual const uci::type::SubsystemBIT_Type::BIT_ItemName& getBIT_ItemName() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the BIT_ItemName.
           *
           * @return The bounded list identified by BIT_ItemName.
           */
         virtual uci::type::SubsystemBIT_Type::BIT_ItemName& getBIT_ItemName()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the BIT_ItemName.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setBIT_ItemName(const uci::type::SubsystemBIT_Type::BIT_ItemName& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubsystemComponentID.
           *
           * @return The bounded list identified by SubsystemComponentID.
           */
         virtual const uci::type::SubsystemBIT_Type::SubsystemComponentID& getSubsystemComponentID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubsystemComponentID.
           *
           * @return The bounded list identified by SubsystemComponentID.
           */
         virtual uci::type::SubsystemBIT_Type::SubsystemComponentID& getSubsystemComponentID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the SubsystemComponentID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setSubsystemComponentID(const uci::type::SubsystemBIT_Type::SubsystemComponentID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityID.
           *
           * @return The bounded list identified by CapabilityID.
           */
         virtual const uci::type::SubsystemBIT_Type::CapabilityID& getCapabilityID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityID.
           *
           * @return The bounded list identified by CapabilityID.
           */
         virtual uci::type::SubsystemBIT_Type::CapabilityID& getCapabilityID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CapabilityID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCapabilityID(const uci::type::SubsystemBIT_Type::CapabilityID& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SubsystemBIT_Type()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SubsystemBIT_Type to copy from
           */
         SubsystemBIT_Type(const SubsystemBIT_Type& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SubsystemBIT_Type to the contents of the SubsystemBIT_Type on the
           * right hand side (rhs) of the assignment operator.SubsystemBIT_Type [only available to derived classes]
           *
           * @param rhs The SubsystemBIT_Type on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::SubsystemBIT_Type
           * @return A constant reference to this SubsystemBIT_Type.
           */
         const SubsystemBIT_Type& operator=(const SubsystemBIT_Type& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SubsystemBIT_Type


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SubsystemBIT_Type_h

