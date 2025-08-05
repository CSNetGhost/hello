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
#ifndef Uci__Type__GatewayCapabilityQFT_h
#define Uci__Type__GatewayCapabilityQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__CapabilityID_Type_h)
# include "uci/type/CapabilityID_Type.h"
#endif

#if !defined(Uci__Type__ServiceID_Type_h)
# include "uci/type/ServiceID_Type.h"
#endif

#if !defined(Uci__Type__CommDataFormatEnum_h)
# include "uci/type/CommDataFormatEnum.h"
#endif

#if !defined(Uci__Type__ForeignKeyType_h)
# include "uci/type/ForeignKeyType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Query Filter Type to query for Gateway Capability. */
      class GatewayCapabilityQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~GatewayCapabilityQFT()
         { }

         /** Returns this accessor's type constant, i.e. GatewayCapabilityQFT
           *
           * @return This accessor's type constant, i.e. GatewayCapabilityQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::gatewayCapabilityQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const GatewayCapabilityQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

         /** [Minimum occurrences: 0] [Maximum occurrences: 16] */
         typedef uci::base::BoundedList<uci::type::CommDataFormatEnum, uci::type::accessorType::commDataFormatEnum> CapabilityType;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType> SubCapabilityType;

         /** Returns the bounded list that is identified by the CapabilityID.
           *
           * @return The bounded list identified by CapabilityID.
           */
         virtual const uci::type::GatewayCapabilityQFT::CapabilityID& getCapabilityID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityID.
           *
           * @return The bounded list identified by CapabilityID.
           */
         virtual uci::type::GatewayCapabilityQFT::CapabilityID& getCapabilityID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CapabilityID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCapabilityID(const uci::type::GatewayCapabilityQFT::CapabilityID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the GatewayServiceID.
           *
           * @return The acecssor that provides access to the complex content that is identified by GatewayServiceID.
           */
         virtual const uci::type::ServiceID_Type& getGatewayServiceID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the GatewayServiceID.
           *
           * @return The acecssor that provides access to the complex content that is identified by GatewayServiceID.
           */
         virtual uci::type::ServiceID_Type& getGatewayServiceID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the GatewayServiceID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by GatewayServiceID
           */
         virtual void setGatewayServiceID(const uci::type::ServiceID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by GatewayServiceID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by GatewayServiceID is emabled or not
           */
         virtual bool hasGatewayServiceID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by GatewayServiceID
           *
           * @param type = uci::type::accessorType::serviceID_Type This Accessor's accessor type
           */
         virtual void enableGatewayServiceID(uci::base::accessorType::AccessorType type = uci::type::accessorType::serviceID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by GatewayServiceID */
         virtual void clearGatewayServiceID()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityType.
           *
           * @return The bounded list identified by CapabilityType.
           */
         virtual const uci::type::GatewayCapabilityQFT::CapabilityType& getCapabilityType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityType.
           *
           * @return The bounded list identified by CapabilityType.
           */
         virtual uci::type::GatewayCapabilityQFT::CapabilityType& getCapabilityType()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CapabilityType.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCapabilityType(const uci::type::GatewayCapabilityQFT::CapabilityType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubCapabilityType.
           *
           * @return The bounded list identified by SubCapabilityType.
           */
         virtual const uci::type::GatewayCapabilityQFT::SubCapabilityType& getSubCapabilityType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubCapabilityType.
           *
           * @return The bounded list identified by SubCapabilityType.
           */
         virtual uci::type::GatewayCapabilityQFT::SubCapabilityType& getSubCapabilityType()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the SubCapabilityType.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setSubCapabilityType(const uci::type::GatewayCapabilityQFT::SubCapabilityType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         GatewayCapabilityQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The GatewayCapabilityQFT to copy from
           */
         GatewayCapabilityQFT(const GatewayCapabilityQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this GatewayCapabilityQFT to the contents of the GatewayCapabilityQFT
           * on the right hand side (rhs) of the assignment operator.GatewayCapabilityQFT [only available to derived classes]
           *
           * @param rhs The GatewayCapabilityQFT on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::GatewayCapabilityQFT
           * @return A constant reference to this GatewayCapabilityQFT.
           */
         const GatewayCapabilityQFT& operator=(const GatewayCapabilityQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // GatewayCapabilityQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__GatewayCapabilityQFT_h

