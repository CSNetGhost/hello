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
#ifndef Uci__Type__ConditionalPathSegmentType_h
#define Uci__Type__ConditionalPathSegmentType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__PathID_Type_h)
# include "uci/type/PathID_Type.h"
#endif

#if !defined(Uci__Type__SegmentID_Type_h)
# include "uci/type/SegmentID_Type.h"
#endif

#if !defined(Uci__Type__PathSegmentConditionType_h)
# include "uci/type/PathSegmentConditionType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ConditionalPathSegmentType sequence accessor class */
      class ConditionalPathSegmentType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ConditionalPathSegmentType()
         { }

         /** Returns this accessor's type constant, i.e. ConditionalPathSegmentType
           *
           * @return This accessor's type constant, i.e. ConditionalPathSegmentType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::conditionalPathSegmentType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ConditionalPathSegmentType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PathID.
           *
           * @return The acecssor that provides access to the complex content that is identified by PathID.
           */
         virtual const uci::type::PathID_Type& getPathID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PathID.
           *
           * @return The acecssor that provides access to the complex content that is identified by PathID.
           */
         virtual uci::type::PathID_Type& getPathID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the PathID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by PathID
           */
         virtual void setPathID(const uci::type::PathID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by PathID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by PathID is emabled or not
           */
         virtual bool hasPathID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by PathID
           *
           * @param type = uci::type::accessorType::pathID_Type This Accessor's accessor type
           */
         virtual void enablePathID(uci::base::accessorType::AccessorType type = uci::type::accessorType::pathID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by PathID */
         virtual void clearPathID()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PathSegmentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by PathSegmentID.
           */
         virtual const uci::type::SegmentID_Type& getPathSegmentID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PathSegmentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by PathSegmentID.
           */
         virtual uci::type::SegmentID_Type& getPathSegmentID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the PathSegmentID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by PathSegmentID
           */
         virtual void setPathSegmentID(const uci::type::SegmentID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Condition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Condition.
           */
         virtual const uci::type::PathSegmentConditionType& getCondition() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Condition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Condition.
           */
         virtual uci::type::PathSegmentConditionType& getCondition()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Condition to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Condition
           */
         virtual void setCondition(const uci::type::PathSegmentConditionType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Condition exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Condition is emabled or not
           */
         virtual bool hasCondition() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Condition
           *
           * @param type = uci::type::accessorType::pathSegmentConditionType This Accessor's accessor type
           */
         virtual void enableCondition(uci::base::accessorType::AccessorType type = uci::type::accessorType::pathSegmentConditionType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Condition */
         virtual void clearCondition()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ConditionalPathSegmentType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ConditionalPathSegmentType to copy from
           */
         ConditionalPathSegmentType(const ConditionalPathSegmentType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ConditionalPathSegmentType to the contents of the
           * ConditionalPathSegmentType on the right hand side (rhs) of the assignment operator.ConditionalPathSegmentType [only
           * available to derived classes]
           *
           * @param rhs The ConditionalPathSegmentType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::ConditionalPathSegmentType
           * @return A constant reference to this ConditionalPathSegmentType.
           */
         const ConditionalPathSegmentType& operator=(const ConditionalPathSegmentType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ConditionalPathSegmentType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ConditionalPathSegmentType_h

