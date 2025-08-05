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
#ifndef Uci__Type__DataDeleteRequestMDT_h
#define Uci__Type__DataDeleteRequestMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__DataDeleteRequestID_Type_h)
# include "uci/type/DataDeleteRequestID_Type.h"
#endif

#if !defined(Uci__Type__AppliesToType_h)
# include "uci/type/AppliesToType.h"
#endif

#if !defined(Uci__Type__DataDeleteChoiceType_h)
# include "uci/type/DataDeleteChoiceType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the DataDeleteRequestMDT sequence accessor class */
      class DataDeleteRequestMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~DataDeleteRequestMDT()
         { }

         /** Returns this accessor's type constant, i.e. DataDeleteRequestMDT
           *
           * @return This accessor's type constant, i.e. DataDeleteRequestMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::dataDeleteRequestMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const DataDeleteRequestMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DataDeleteRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by DataDeleteRequestID.
           */
         virtual const uci::type::DataDeleteRequestID_Type& getDataDeleteRequestID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DataDeleteRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by DataDeleteRequestID.
           */
         virtual uci::type::DataDeleteRequestID_Type& getDataDeleteRequestID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the DataDeleteRequestID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by DataDeleteRequestID
           */
         virtual void setDataDeleteRequestID(const uci::type::DataDeleteRequestID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AppliesTo.
           *
           * @return The acecssor that provides access to the complex content that is identified by AppliesTo.
           */
         virtual const uci::type::AppliesToType& getAppliesTo() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AppliesTo.
           *
           * @return The acecssor that provides access to the complex content that is identified by AppliesTo.
           */
         virtual uci::type::AppliesToType& getAppliesTo()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the AppliesTo to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by AppliesTo
           */
         virtual void setAppliesTo(const uci::type::AppliesToType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by AppliesTo exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by AppliesTo is emabled or not
           */
         virtual bool hasAppliesTo() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by AppliesTo
           *
           * @param type = uci::type::accessorType::appliesToType This Accessor's accessor type
           */
         virtual void enableAppliesTo(uci::base::accessorType::AccessorType type = uci::type::accessorType::appliesToType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by AppliesTo */
         virtual void clearAppliesTo()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Data.
           *
           * @return The acecssor that provides access to the complex content that is identified by Data.
           */
         virtual const uci::type::DataDeleteChoiceType& getData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Data.
           *
           * @return The acecssor that provides access to the complex content that is identified by Data.
           */
         virtual uci::type::DataDeleteChoiceType& getData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Data to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Data
           */
         virtual void setData(const uci::type::DataDeleteChoiceType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         DataDeleteRequestMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The DataDeleteRequestMDT to copy from
           */
         DataDeleteRequestMDT(const DataDeleteRequestMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this DataDeleteRequestMDT to the contents of the DataDeleteRequestMDT
           * on the right hand side (rhs) of the assignment operator.DataDeleteRequestMDT [only available to derived classes]
           *
           * @param rhs The DataDeleteRequestMDT on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::DataDeleteRequestMDT
           * @return A constant reference to this DataDeleteRequestMDT.
           */
         const DataDeleteRequestMDT& operator=(const DataDeleteRequestMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // DataDeleteRequestMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__DataDeleteRequestMDT_h

