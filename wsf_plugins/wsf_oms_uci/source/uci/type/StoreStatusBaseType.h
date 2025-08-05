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
#ifndef Uci__Type__StoreStatusBaseType_h
#define Uci__Type__StoreStatusBaseType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__StoreStateEnum_h)
# include "uci/type/StoreStateEnum.h"
#endif

#if !defined(Uci__Type__StoreStatusDetailsType_h)
# include "uci/type/StoreStatusDetailsType.h"
#endif

#if !defined(Uci__Type__CannotComplyType_h)
# include "uci/type/CannotComplyType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Possible store settings that could be used to id the state or extra data related to the attached Mission or Carriage
        * Store
        */
      class StoreStatusBaseType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~StoreStatusBaseType()
         { }

         /** Returns this accessor's type constant, i.e. StoreStatusBaseType
           *
           * @return This accessor's type constant, i.e. StoreStatusBaseType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::storeStatusBaseType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const StoreStatusBaseType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the StoreState.
           *
           * @return The value of the enumeration identified by StoreState.
           */
         virtual const uci::type::StoreStateEnum& getStoreState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the StoreState.
           *
           * @return The value of the enumeration identified by StoreState.
           */
         virtual uci::type::StoreStateEnum& getStoreState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the StoreState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setStoreState(const uci::type::StoreStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the StoreState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setStoreState(uci::type::StoreStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the StoreStateDetail.
           *
           * @return The acecssor that provides access to the complex content that is identified by StoreStateDetail.
           */
         virtual const uci::type::StoreStatusDetailsType& getStoreStateDetail() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the StoreStateDetail.
           *
           * @return The acecssor that provides access to the complex content that is identified by StoreStateDetail.
           */
         virtual uci::type::StoreStatusDetailsType& getStoreStateDetail()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the StoreStateDetail to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by StoreStateDetail
           */
         virtual void setStoreStateDetail(const uci::type::StoreStatusDetailsType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the StoreStateReason.
           *
           * @return The acecssor that provides access to the complex content that is identified by StoreStateReason.
           */
         virtual const uci::type::CannotComplyType& getStoreStateReason() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the StoreStateReason.
           *
           * @return The acecssor that provides access to the complex content that is identified by StoreStateReason.
           */
         virtual uci::type::CannotComplyType& getStoreStateReason()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the StoreStateReason to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by StoreStateReason
           */
         virtual void setStoreStateReason(const uci::type::CannotComplyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by StoreStateReason exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by StoreStateReason is emabled or not
           */
         virtual bool hasStoreStateReason() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by StoreStateReason
           *
           * @param type = uci::type::accessorType::cannotComplyType This Accessor's accessor type
           */
         virtual void enableStoreStateReason(uci::base::accessorType::AccessorType type = uci::type::accessorType::cannotComplyType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by StoreStateReason */
         virtual void clearStoreStateReason()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         StoreStatusBaseType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The StoreStatusBaseType to copy from
           */
         StoreStatusBaseType(const StoreStatusBaseType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this StoreStatusBaseType to the contents of the StoreStatusBaseType on
           * the right hand side (rhs) of the assignment operator.StoreStatusBaseType [only available to derived classes]
           *
           * @param rhs The StoreStatusBaseType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::StoreStatusBaseType
           * @return A constant reference to this StoreStatusBaseType.
           */
         const StoreStatusBaseType& operator=(const StoreStatusBaseType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // StoreStatusBaseType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__StoreStatusBaseType_h

