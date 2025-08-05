// This file was generated  on 12/5/2018 at 1:1:45 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__CommTerminalCapabilityStatusType_h
#define Uci__Type__CommTerminalCapabilityStatusType_h 1

#if !defined(Uci__Type__CapabilityStatusType_h)
# include "uci/type/CapabilityStatusType.h"
#endif

#if !defined(Uci__Type__MDF_StatusType_h)
# include "uci/type/MDF_StatusType.h"
#endif

#if !defined(Uci__Type__AvailableConnectionType_h)
# include "uci/type/AvailableConnectionType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CommTerminalCapabilityStatusType sequence accessor class */
      class CommTerminalCapabilityStatusType : public virtual uci::type::CapabilityStatusType {
      public:

         /** The destructor */
         virtual ~CommTerminalCapabilityStatusType()
         { }

         /** Returns this accessor's type constant, i.e. CommTerminalCapabilityStatusType
           *
           * @return This accessor's type constant, i.e. CommTerminalCapabilityStatusType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::commTerminalCapabilityStatusType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CommTerminalCapabilityStatusType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MDF_Status.
           *
           * @return The acecssor that provides access to the complex content that is identified by MDF_Status.
           */
         virtual const uci::type::MDF_StatusType& getMDF_Status() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MDF_Status.
           *
           * @return The acecssor that provides access to the complex content that is identified by MDF_Status.
           */
         virtual uci::type::MDF_StatusType& getMDF_Status()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the MDF_Status to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by MDF_Status
           */
         virtual void setMDF_Status(const uci::type::MDF_StatusType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by MDF_Status exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by MDF_Status is emabled or not
           */
         virtual bool hasMDF_Status() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by MDF_Status
           *
           * @param type = uci::type::accessorType::mDF_StatusType This Accessor's accessor type
           */
         virtual void enableMDF_Status(uci::base::accessorType::AccessorType type = uci::type::accessorType::mDF_StatusType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by MDF_Status */
         virtual void clearMDF_Status()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AvailableConnections.
           *
           * @return The acecssor that provides access to the complex content that is identified by AvailableConnections.
           */
         virtual const uci::type::AvailableConnectionType& getAvailableConnections() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AvailableConnections.
           *
           * @return The acecssor that provides access to the complex content that is identified by AvailableConnections.
           */
         virtual uci::type::AvailableConnectionType& getAvailableConnections()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the AvailableConnections to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by AvailableConnections
           */
         virtual void setAvailableConnections(const uci::type::AvailableConnectionType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by AvailableConnections exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by AvailableConnections is emabled or not
           */
         virtual bool hasAvailableConnections() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by AvailableConnections
           *
           * @param type = uci::type::accessorType::availableConnectionType This Accessor's accessor type
           */
         virtual void enableAvailableConnections(uci::base::accessorType::AccessorType type = uci::type::accessorType::availableConnectionType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by AvailableConnections */
         virtual void clearAvailableConnections()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CommTerminalCapabilityStatusType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CommTerminalCapabilityStatusType to copy from
           */
         CommTerminalCapabilityStatusType(const CommTerminalCapabilityStatusType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CommTerminalCapabilityStatusType to the contents of the
           * CommTerminalCapabilityStatusType on the right hand side (rhs) of the assignment
           * operator.CommTerminalCapabilityStatusType [only available to derived classes]
           *
           * @param rhs The CommTerminalCapabilityStatusType on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::CommTerminalCapabilityStatusType
           * @return A constant reference to this CommTerminalCapabilityStatusType.
           */
         const CommTerminalCapabilityStatusType& operator=(const CommTerminalCapabilityStatusType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CommTerminalCapabilityStatusType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CommTerminalCapabilityStatusType_h

