// This file was generated  on 12/5/2018 at 1:1:47 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__ProductProcessingStatusType_h
#define Uci__Type__ProductProcessingStatusType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__InputProductType_h)
# include "uci/type/InputProductType.h"
#endif

#if !defined(Uci__Type__ProcessingStatusEnum_h)
# include "uci/type/ProcessingStatusEnum.h"
#endif

#if !defined(Uci__Type__ProcessingResultsPET_h)
# include "uci/type/ProcessingResultsPET.h"
#endif

#if !defined(Uci__Type__ProductMetadataID_Type_h)
# include "uci/type/ProductMetadataID_Type.h"
#endif

#if !defined(Uci__Type__VisibleString256Type_h)
# include "uci/type/VisibleString256Type.h"
#endif

#if !defined(Uci__Type__DateTimeType_h)
# include "uci/type/DateTimeType.h"
#endif

#if !defined(Uci__Type__PercentType_h)
# include "uci/type/PercentType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ProductProcessingStatusType sequence accessor class */
      class ProductProcessingStatusType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ProductProcessingStatusType()
         { }

         /** Returns this accessor's type constant, i.e. ProductProcessingStatusType
           *
           * @return This accessor's type constant, i.e. ProductProcessingStatusType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::productProcessingStatusType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ProductProcessingStatusType& accessor)
            throw(uci::base::UCIException) = 0;


         /** This element specifies the input product(s) to which this status applies. [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::InputProductType, uci::type::accessorType::inputProductType> InputProduct;

         /** This is the ID of the ProductMetadata corresponding to the Product that is the output of the processing job. It is
           * expected that this value will not be populated until the processing state for this requirement transitions to
           * COMPLETED. [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::ProductMetadataID_Type, uci::type::accessorType::productMetadataID_Type> OutputProductMetadataID;

         /** Returns the bounded list that is identified by the InputProduct.
           *
           * @return The bounded list identified by InputProduct.
           */
         virtual const uci::type::ProductProcessingStatusType::InputProduct& getInputProduct() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the InputProduct.
           *
           * @return The bounded list identified by InputProduct.
           */
         virtual uci::type::ProductProcessingStatusType::InputProduct& getInputProduct()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the InputProduct.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setInputProduct(const uci::type::ProductProcessingStatusType::InputProduct& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ProductProcessingState.
           *
           * @return The value of the enumeration identified by ProductProcessingState.
           */
         virtual const uci::type::ProcessingStatusEnum& getProductProcessingState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ProductProcessingState.
           *
           * @return The value of the enumeration identified by ProductProcessingState.
           */
         virtual uci::type::ProcessingStatusEnum& getProductProcessingState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ProductProcessingState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setProductProcessingState(const uci::type::ProcessingStatusEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ProductProcessingState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setProductProcessingState(uci::type::ProcessingStatusEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the OutputData.
           *
           * @return The acecssor that provides access to the complex content that is identified by OutputData.
           */
         virtual const uci::type::ProcessingResultsPET& getOutputData() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the OutputData.
           *
           * @return The acecssor that provides access to the complex content that is identified by OutputData.
           */
         virtual uci::type::ProcessingResultsPET& getOutputData()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the OutputData to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by OutputData
           */
         virtual void setOutputData(const uci::type::ProcessingResultsPET& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by OutputData exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by OutputData is emabled or not
           */
         virtual bool hasOutputData() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by OutputData
           *
           * @param type = uci::type::accessorType::processingResultsPET This Accessor's accessor type
           */
         virtual void enableOutputData(uci::base::accessorType::AccessorType type = uci::type::accessorType::processingResultsPET)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by OutputData */
         virtual void clearOutputData()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the OutputProductMetadataID.
           *
           * @return The bounded list identified by OutputProductMetadataID.
           */
         virtual const uci::type::ProductProcessingStatusType::OutputProductMetadataID& getOutputProductMetadataID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the OutputProductMetadataID.
           *
           * @return The bounded list identified by OutputProductMetadataID.
           */
         virtual uci::type::ProductProcessingStatusType::OutputProductMetadataID& getOutputProductMetadataID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the OutputProductMetadataID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setOutputProductMetadataID(const uci::type::ProductProcessingStatusType::OutputProductMetadataID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the string data type that is identified by the StatusDetails.
           *
           * @return The value of the string data type identified by StatusDetails.
           */
         virtual const uci::type::VisibleString256Type& getStatusDetails() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the string data type that is identified by the StatusDetails.
           *
           * @return The value of the string data type identified by StatusDetails.
           */
         virtual uci::type::VisibleString256Type& getStatusDetails()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetails to the string accessed by the
           * specified String.
           *
           * @param value The String whose contents are used to set the string data type.
           */
         virtual void setStatusDetails(const uci::type::VisibleString256Type& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetails to the specified string.
           *
           * @param value The string used to set the string data type.
           */
         virtual void setStatusDetails(const std::string& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the string data type that is identified by the StatusDetails to the specified string.
           *
           * @param value The string used to set the string data type.
           */
         virtual void setStatusDetails(const char* value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by StatusDetails exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by StatusDetails is emabled or not
           */
         virtual bool hasStatusDetails() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by StatusDetails
           *
           * @param type = uci::type::accessorType::visibleString256Type This Accessor's accessor type
           */
         virtual void enableStatusDetails(uci::base::accessorType::AccessorType type = uci::type::accessorType::visibleString256Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by StatusDetails */
         virtual void clearStatusDetails()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the EstimatedCompletionTime.
           *
           * @return The value of the simple primitive data type identified by EstimatedCompletionTime.
           */
         virtual uci::type::DateTimeTypeValue getEstimatedCompletionTime() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the EstimatedCompletionTime.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setEstimatedCompletionTime(uci::type::DateTimeTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by EstimatedCompletionTime exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by EstimatedCompletionTime is emabled or not
           */
         virtual bool hasEstimatedCompletionTime() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by EstimatedCompletionTime
           *
           * @param type = uci::type::accessorType::dateTimeType This Accessor's accessor type
           */
         virtual void enableEstimatedCompletionTime(uci::base::accessorType::AccessorType type = uci::type::accessorType::dateTimeType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by EstimatedCompletionTime */
         virtual void clearEstimatedCompletionTime()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the EstimatedPercentComplete.
           *
           * @return The value of the simple primitive data type identified by EstimatedPercentComplete.
           */
         virtual uci::type::PercentTypeValue getEstimatedPercentComplete() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the EstimatedPercentComplete.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setEstimatedPercentComplete(uci::type::PercentTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by EstimatedPercentComplete exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by EstimatedPercentComplete is emabled or not
           */
         virtual bool hasEstimatedPercentComplete() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by EstimatedPercentComplete
           *
           * @param type = uci::type::accessorType::percentType This Accessor's accessor type
           */
         virtual void enableEstimatedPercentComplete(uci::base::accessorType::AccessorType type = uci::type::accessorType::percentType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by EstimatedPercentComplete */
         virtual void clearEstimatedPercentComplete()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ProductProcessingStatusType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ProductProcessingStatusType to copy from
           */
         ProductProcessingStatusType(const ProductProcessingStatusType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ProductProcessingStatusType to the contents of the
           * ProductProcessingStatusType on the right hand side (rhs) of the assignment operator.ProductProcessingStatusType [only
           * available to derived classes]
           *
           * @param rhs The ProductProcessingStatusType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::ProductProcessingStatusType
           * @return A constant reference to this ProductProcessingStatusType.
           */
         const ProductProcessingStatusType& operator=(const ProductProcessingStatusType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ProductProcessingStatusType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ProductProcessingStatusType_h

