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
#ifndef Uci__Type__StoreCarriageCapabilityStatusMDT_h
#define Uci__Type__StoreCarriageCapabilityStatusMDT_h 1

#if !defined(Uci__Type__StoreCarriageCapabilityStatusType_h)
# include "uci/type/StoreCarriageCapabilityStatusType.h"
#endif

#if !defined(Uci__Type__SubsystemID_Type_h)
# include "uci/type/SubsystemID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This reports the Carriage Capability status. */
      class StoreCarriageCapabilityStatusMDT : public virtual uci::type::StoreCarriageCapabilityStatusType {
      public:

         /** The destructor */
         virtual ~StoreCarriageCapabilityStatusMDT()
         { }

         /** Returns this accessor's type constant, i.e. StoreCarriageCapabilityStatusMDT
           *
           * @return This accessor's type constant, i.e. StoreCarriageCapabilityStatusMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::storeCarriageCapabilityStatusMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const StoreCarriageCapabilityStatusMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SubsystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SubsystemID.
           */
         virtual const uci::type::SubsystemID_Type& getSubsystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SubsystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SubsystemID.
           */
         virtual uci::type::SubsystemID_Type& getSubsystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SubsystemID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SubsystemID
           */
         virtual void setSubsystemID(const uci::type::SubsystemID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by SubsystemID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by SubsystemID is emabled or not
           */
         virtual bool hasSubsystemID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by SubsystemID
           *
           * @param type = uci::type::accessorType::subsystemID_Type This Accessor's accessor type
           */
         virtual void enableSubsystemID(uci::base::accessorType::AccessorType type = uci::type::accessorType::subsystemID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by SubsystemID */
         virtual void clearSubsystemID()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         StoreCarriageCapabilityStatusMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The StoreCarriageCapabilityStatusMDT to copy from
           */
         StoreCarriageCapabilityStatusMDT(const StoreCarriageCapabilityStatusMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this StoreCarriageCapabilityStatusMDT to the contents of the
           * StoreCarriageCapabilityStatusMDT on the right hand side (rhs) of the assignment
           * operator.StoreCarriageCapabilityStatusMDT [only available to derived classes]
           *
           * @param rhs The StoreCarriageCapabilityStatusMDT on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::StoreCarriageCapabilityStatusMDT
           * @return A constant reference to this StoreCarriageCapabilityStatusMDT.
           */
         const StoreCarriageCapabilityStatusMDT& operator=(const StoreCarriageCapabilityStatusMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // StoreCarriageCapabilityStatusMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__StoreCarriageCapabilityStatusMDT_h

