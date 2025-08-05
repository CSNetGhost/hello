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
#ifndef Uci__Type__NotificationSourceType_h
#define Uci__Type__NotificationSourceType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__SystemID_Type_h)
# include "uci/type/SystemID_Type.h"
#endif

#if !defined(Uci__Type__ServiceID_Type_h)
# include "uci/type/ServiceID_Type.h"
#endif

#if !defined(Uci__Type__SubsystemID_Type_h)
# include "uci/type/SubsystemID_Type.h"
#endif

#if !defined(Uci__Type__CapabilityID_Type_h)
# include "uci/type/CapabilityID_Type.h"
#endif

#if !defined(Uci__Type__OperatorID_Type_h)
# include "uci/type/OperatorID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Identifies the System, as well as the Service, Subsystem, or Capability that originated this notification. */
      class NotificationSourceType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~NotificationSourceType()
         { }

         /** Returns this accessor's type constant, i.e. NotificationSourceType
           *
           * @return This accessor's type constant, i.e. NotificationSourceType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::notificationSourceType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const NotificationSourceType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SystemID.
           */
         virtual const uci::type::SystemID_Type& getSystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SystemID.
           */
         virtual uci::type::SystemID_Type& getSystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SystemID to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SystemID
           */
         virtual void setSystemID(const uci::type::SystemID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ServiceID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ServiceID.
           */
         virtual const uci::type::ServiceID_Type& getServiceID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ServiceID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ServiceID.
           */
         virtual uci::type::ServiceID_Type& getServiceID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ServiceID to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ServiceID
           */
         virtual void setServiceID(const uci::type::ServiceID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by ServiceID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by ServiceID is emabled or not
           */
         virtual bool hasServiceID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by ServiceID
           *
           * @param type = uci::type::accessorType::serviceID_Type This Accessor's accessor type
           */
         virtual void enableServiceID(uci::base::accessorType::AccessorType type = uci::type::accessorType::serviceID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by ServiceID */
         virtual void clearServiceID()
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


         /** Returns the accessor that provides access to the complex content that is identified by the OperatorID.
           *
           * @return The acecssor that provides access to the complex content that is identified by OperatorID.
           */
         virtual const uci::type::OperatorID_Type& getOperatorID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the OperatorID.
           *
           * @return The acecssor that provides access to the complex content that is identified by OperatorID.
           */
         virtual uci::type::OperatorID_Type& getOperatorID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the OperatorID to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by OperatorID
           */
         virtual void setOperatorID(const uci::type::OperatorID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by OperatorID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by OperatorID is emabled or not
           */
         virtual bool hasOperatorID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by OperatorID
           *
           * @param type = uci::type::accessorType::operatorID_Type This Accessor's accessor type
           */
         virtual void enableOperatorID(uci::base::accessorType::AccessorType type = uci::type::accessorType::operatorID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by OperatorID */
         virtual void clearOperatorID()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         NotificationSourceType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The NotificationSourceType to copy from
           */
         NotificationSourceType(const NotificationSourceType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this NotificationSourceType to the contents of the
           * NotificationSourceType on the right hand side (rhs) of the assignment operator.NotificationSourceType [only available
           * to derived classes]
           *
           * @param rhs The NotificationSourceType on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::NotificationSourceType
           * @return A constant reference to this NotificationSourceType.
           */
         const NotificationSourceType& operator=(const NotificationSourceType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // NotificationSourceType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__NotificationSourceType_h

