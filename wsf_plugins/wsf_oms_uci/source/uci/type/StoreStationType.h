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
#ifndef Uci__Type__StoreStationType_h
#define Uci__Type__StoreStationType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ForeignKeyType_h)
# include "uci/type/ForeignKeyType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__StoreType_h)
# include "uci/type/StoreType.h"
#endif

#if !defined(Uci__Type__CapabilityID_Type_h)
# include "uci/type/CapabilityID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the StoreStationType sequence accessor class */
      class StoreStationType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~StoreStationType()
         { }

         /** Returns this accessor's type constant, i.e. StoreStationType
           *
           * @return This accessor's type constant, i.e. StoreStationType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::storeStationType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const StoreStationType& accessor)
            throw(uci::base::UCIException) = 0;


         /** A list of compatible store types for the carriage station. May be included to assist with logistics and weapon
           * load-out management. [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::StoreType, uci::type::accessorType::storeType> CompatibleStore;

         /** Returns the accessor that provides access to the complex content that is identified by the StationIndex.
           *
           * @return The acecssor that provides access to the complex content that is identified by StationIndex.
           */
         virtual const uci::type::ForeignKeyType& getStationIndex() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the StationIndex.
           *
           * @return The acecssor that provides access to the complex content that is identified by StationIndex.
           */
         virtual uci::type::ForeignKeyType& getStationIndex()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the StationIndex to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by StationIndex
           */
         virtual void setStationIndex(const uci::type::ForeignKeyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CompatibleStore.
           *
           * @return The bounded list identified by CompatibleStore.
           */
         virtual const uci::type::StoreStationType::CompatibleStore& getCompatibleStore() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CompatibleStore.
           *
           * @return The bounded list identified by CompatibleStore.
           */
         virtual uci::type::StoreStationType::CompatibleStore& getCompatibleStore()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CompatibleStore.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCompatibleStore(const uci::type::StoreStationType::CompatibleStore& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstalledStore.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstalledStore.
           */
         virtual const uci::type::StoreType& getInstalledStore() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstalledStore.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstalledStore.
           */
         virtual uci::type::StoreType& getInstalledStore()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the InstalledStore to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by InstalledStore
           */
         virtual void setInstalledStore(const uci::type::StoreType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by InstalledStore exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by InstalledStore is emabled or not
           */
         virtual bool hasInstalledStore() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by InstalledStore
           *
           * @param type = uci::type::accessorType::storeType This Accessor's accessor type
           */
         virtual void enableInstalledStore(uci::base::accessorType::AccessorType type = uci::type::accessorType::storeType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by InstalledStore */
         virtual void clearInstalledStore()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CapabilityID.
           *
           * @return The acecssor that provides access to the complex content that is identified by CapabilityID.
           */
         virtual const uci::type::CapabilityID_Type& getCapabilityID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CapabilityID.
           *
           * @return The acecssor that provides access to the complex content that is identified by CapabilityID.
           */
         virtual uci::type::CapabilityID_Type& getCapabilityID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CapabilityID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CapabilityID
           */
         virtual void setCapabilityID(const uci::type::CapabilityID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by CapabilityID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by CapabilityID is emabled or not
           */
         virtual bool hasCapabilityID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by CapabilityID
           *
           * @param type = uci::type::accessorType::capabilityID_Type This Accessor's accessor type
           */
         virtual void enableCapabilityID(uci::base::accessorType::AccessorType type = uci::type::accessorType::capabilityID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by CapabilityID */
         virtual void clearCapabilityID()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         StoreStationType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The StoreStationType to copy from
           */
         StoreStationType(const StoreStationType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this StoreStationType to the contents of the StoreStationType on the
           * right hand side (rhs) of the assignment operator.StoreStationType [only available to derived classes]
           *
           * @param rhs The StoreStationType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::StoreStationType
           * @return A constant reference to this StoreStationType.
           */
         const StoreStationType& operator=(const StoreStationType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // StoreStationType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__StoreStationType_h

