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
#ifndef Uci__Type__FusionSettingsRequestStatusMDT_h
#define Uci__Type__FusionSettingsRequestStatusMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__FusionSettingsRequestID_Type_h)
# include "uci/type/FusionSettingsRequestID_Type.h"
#endif

#if !defined(Uci__Type__SystemID_Type_h)
# include "uci/type/SystemID_Type.h"
#endif

#if !defined(Uci__Type__ServiceID_Type_h)
# include "uci/type/ServiceID_Type.h"
#endif

#if !defined(Uci__Type__ProcessingStatusEnum_h)
# include "uci/type/ProcessingStatusEnum.h"
#endif

#if !defined(Uci__Type__VisibleString256Type_h)
# include "uci/type/VisibleString256Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the FusionSettingsRequestStatusMDT sequence accessor class */
      class FusionSettingsRequestStatusMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~FusionSettingsRequestStatusMDT()
         { }

         /** Returns this accessor's type constant, i.e. FusionSettingsRequestStatusMDT
           *
           * @return This accessor's type constant, i.e. FusionSettingsRequestStatusMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::fusionSettingsRequestStatusMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const FusionSettingsRequestStatusMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the FusionSettingsRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by FusionSettingsRequestID.
           */
         virtual const uci::type::FusionSettingsRequestID_Type& getFusionSettingsRequestID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the FusionSettingsRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by FusionSettingsRequestID.
           */
         virtual uci::type::FusionSettingsRequestID_Type& getFusionSettingsRequestID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the FusionSettingsRequestID to the contents of the complex content
           * that is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by FusionSettingsRequestID
           */
         virtual void setFusionSettingsRequestID(const uci::type::FusionSettingsRequestID_Type& value)
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


         /** Returns the value of the enumeration that is identified by the RequestState.
           *
           * @return The value of the enumeration identified by RequestState.
           */
         virtual const uci::type::ProcessingStatusEnum& getRequestState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the RequestState.
           *
           * @return The value of the enumeration identified by RequestState.
           */
         virtual uci::type::ProcessingStatusEnum& getRequestState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequestState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequestState(const uci::type::ProcessingStatusEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequestState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequestState(uci::type::ProcessingStatusEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the string data type that is identified by the StatusDetail.
           *
           * @return The value of the string data type identified by StatusDetail.
           */
         virtual const uci::type::VisibleString256Type& getStatusDetail() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the string data type that is identified by the StatusDetail.
           *
           * @return The value of the string data type identified by StatusDetail.
           */
         virtual uci::type::VisibleString256Type& getStatusDetail()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetail to the string accessed by the specified
           * String.
           *
           * @param value The String whose contents are used to set the string data type.
           */
         virtual void setStatusDetail(const uci::type::VisibleString256Type& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetail to the specified string.
           *
           * @param value The string used to set the string data type.
           */
         virtual void setStatusDetail(const std::string& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetail to the specified string.
           *
           * @param value The string used to set the string data type.
           */
         virtual void setStatusDetail(const char* value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by StatusDetail exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by StatusDetail is emabled or not
           */
         virtual bool hasStatusDetail() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by StatusDetail
           *
           * @param type = uci::type::accessorType::visibleString256Type This Accessor's accessor type
           */
         virtual void enableStatusDetail(uci::base::accessorType::AccessorType type = uci::type::accessorType::visibleString256Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by StatusDetail */
         virtual void clearStatusDetail()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         FusionSettingsRequestStatusMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The FusionSettingsRequestStatusMDT to copy from
           */
         FusionSettingsRequestStatusMDT(const FusionSettingsRequestStatusMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this FusionSettingsRequestStatusMDT to the contents of the
           * FusionSettingsRequestStatusMDT on the right hand side (rhs) of the assignment operator.FusionSettingsRequestStatusMDT
           * [only available to derived classes]
           *
           * @param rhs The FusionSettingsRequestStatusMDT on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::FusionSettingsRequestStatusMDT
           * @return A constant reference to this FusionSettingsRequestStatusMDT.
           */
         const FusionSettingsRequestStatusMDT& operator=(const FusionSettingsRequestStatusMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // FusionSettingsRequestStatusMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__FusionSettingsRequestStatusMDT_h

