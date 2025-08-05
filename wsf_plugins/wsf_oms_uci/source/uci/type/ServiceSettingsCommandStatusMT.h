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
#ifndef Uci__Type__ServiceSettingsCommandStatusMT_h
#define Uci__Type__ServiceSettingsCommandStatusMT_h 1

#if !defined(Uci__Type__MessageType_h)
# include "uci/type/MessageType.h"
#endif

#if !defined(Uci__Type__MessageStateEnum_h)
# include "uci/type/MessageStateEnum.h"
#endif

#if !defined(Uci__Type__ServiceSettingsCommandStatusMDT_h)
# include "uci/type/ServiceSettingsCommandStatusMDT.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ServiceSettingsCommandStatusMT sequence accessor class */
      class ServiceSettingsCommandStatusMT : public virtual uci::type::MessageType {
      public:

         /** The destructor */
         virtual ~ServiceSettingsCommandStatusMT()
         { }

         /** Returns this accessor's type constant, i.e. ServiceSettingsCommandStatusMT
           *
           * @return This accessor's type constant, i.e. ServiceSettingsCommandStatusMT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::serviceSettingsCommandStatusMT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ServiceSettingsCommandStatusMT& accessor)
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
         virtual const uci::type::ServiceSettingsCommandStatusMDT& getMessageData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MessageData.
           *
           * @return The acecssor that provides access to the complex content that is identified by MessageData.
           */
         virtual uci::type::ServiceSettingsCommandStatusMDT& getMessageData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the MessageData to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by MessageData
           */
         virtual void setMessageData(const uci::type::ServiceSettingsCommandStatusMDT& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ServiceSettingsCommandStatusMT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ServiceSettingsCommandStatusMT to copy from
           */
         ServiceSettingsCommandStatusMT(const ServiceSettingsCommandStatusMT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ServiceSettingsCommandStatusMT to the contents of the
           * ServiceSettingsCommandStatusMT on the right hand side (rhs) of the assignment operator.ServiceSettingsCommandStatusMT
           * [only available to derived classes]
           *
           * @param rhs The ServiceSettingsCommandStatusMT on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::ServiceSettingsCommandStatusMT
           * @return A constant reference to this ServiceSettingsCommandStatusMT.
           */
         const ServiceSettingsCommandStatusMT& operator=(const ServiceSettingsCommandStatusMT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ServiceSettingsCommandStatusMT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ServiceSettingsCommandStatusMT_h

