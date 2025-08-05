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
#ifndef Uci__Type__AO_SettingsCommandStatusMT_h
#define Uci__Type__AO_SettingsCommandStatusMT_h 1

#if !defined(Uci__Type__MessageType_h)
# include "uci/type/MessageType.h"
#endif

#if !defined(Uci__Type__MessageStateEnum_h)
# include "uci/type/MessageStateEnum.h"
#endif

#if !defined(Uci__Type__CapabilitySettingsCommandStatusMDT_h)
# include "uci/type/CapabilitySettingsCommandStatusMDT.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the AO_SettingsCommandStatusMT sequence accessor class */
      class AO_SettingsCommandStatusMT : public virtual uci::type::MessageType {
      public:

         /** The destructor */
         virtual ~AO_SettingsCommandStatusMT()
         { }

         /** Returns this accessor's type constant, i.e. AO_SettingsCommandStatusMT
           *
           * @return This accessor's type constant, i.e. AO_SettingsCommandStatusMT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::aO_SettingsCommandStatusMT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const AO_SettingsCommandStatusMT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the MessageState.
           *
           * @return The value of the enumeration identified by MessageState.
           */
         virtual const uci::type::MessageStateEnum& getMessageState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the MessageState.
           *
           * @return The value of the enumeration identified by MessageState.
           */
         virtual uci::type::MessageStateEnum& getMessageState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the MessageState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setMessageState(const uci::type::MessageStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the MessageState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setMessageState(uci::type::MessageStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MessageData.
           *
           * @return The acecssor that provides access to the complex content that is identified by MessageData.
           */
         virtual const uci::type::CapabilitySettingsCommandStatusMDT& getMessageData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MessageData.
           *
           * @return The acecssor that provides access to the complex content that is identified by MessageData.
           */
         virtual uci::type::CapabilitySettingsCommandStatusMDT& getMessageData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the MessageData to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by MessageData
           */
         virtual void setMessageData(const uci::type::CapabilitySettingsCommandStatusMDT& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         AO_SettingsCommandStatusMT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The AO_SettingsCommandStatusMT to copy from
           */
         AO_SettingsCommandStatusMT(const AO_SettingsCommandStatusMT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this AO_SettingsCommandStatusMT to the contents of the
           * AO_SettingsCommandStatusMT on the right hand side (rhs) of the assignment operator.AO_SettingsCommandStatusMT [only
           * available to derived classes]
           *
           * @param rhs The AO_SettingsCommandStatusMT on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::AO_SettingsCommandStatusMT
           * @return A constant reference to this AO_SettingsCommandStatusMT.
           */
         const AO_SettingsCommandStatusMT& operator=(const AO_SettingsCommandStatusMT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // AO_SettingsCommandStatusMT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__AO_SettingsCommandStatusMT_h

