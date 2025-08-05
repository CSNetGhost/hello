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
#ifndef Uci__Type__OperatorLocationOfInterestDesignationMDT_h
#define Uci__Type__OperatorLocationOfInterestDesignationMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__OperatorLocationOfInterestDesignationID_Type_h)
# include "uci/type/OperatorLocationOfInterestDesignationID_Type.h"
#endif

#if !defined(Uci__Type__OperatorLocationOfInterestID_Type_h)
# include "uci/type/OperatorLocationOfInterestID_Type.h"
#endif

#if !defined(Uci__Type__DesignationEnum_h)
# include "uci/type/DesignationEnum.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__MetaTaskTypeEnum_h)
# include "uci/type/MetaTaskTypeEnum.h"
#endif

#if !defined(Uci__Type__SystemID_Type_h)
# include "uci/type/SystemID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the OperatorLocationOfInterestDesignationMDT sequence accessor class */
      class OperatorLocationOfInterestDesignationMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~OperatorLocationOfInterestDesignationMDT()
         { }

         /** Returns this accessor's type constant, i.e. OperatorLocationOfInterestDesignationMDT
           *
           * @return This accessor's type constant, i.e. OperatorLocationOfInterestDesignationMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::operatorLocationOfInterestDesignationMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const OperatorLocationOfInterestDesignationMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** If not defined, the targeting category applies to all targeting objectives. [Minimum occurrences: 0] [Maximum
           * occurrences: 8]
           */
         typedef uci::base::BoundedList<uci::type::MetaTaskTypeEnum, uci::type::accessorType::metaTaskTypeEnum> DesignationObjective;

         /** Indicates the unique ID of a System which the designation is applicable to. If omitted the
           * OperatorLocationOfInterestDesignation applies to all Systems. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type> ApplicableSystemID;

         /** Returns the accessor that provides access to the complex content that is identified by the
           * OperatorLocationOfInterestDesignationID.
           *
           * @return The acecssor that provides access to the complex content that is identified by
           *      OperatorLocationOfInterestDesignationID.
           */
         virtual const uci::type::OperatorLocationOfInterestDesignationID_Type& getOperatorLocationOfInterestDesignationID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the
           * OperatorLocationOfInterestDesignationID.
           *
           * @return The acecssor that provides access to the complex content that is identified by
           *      OperatorLocationOfInterestDesignationID.
           */
         virtual uci::type::OperatorLocationOfInterestDesignationID_Type& getOperatorLocationOfInterestDesignationID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the OperatorLocationOfInterestDesignationID to the contents of the
           * complex content that is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by OperatorLocationOfInterestDesignationID
           */
         virtual void setOperatorLocationOfInterestDesignationID(const uci::type::OperatorLocationOfInterestDesignationID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the
           * OperatorLocationOfInterestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by OperatorLocationOfInterestID.
           */
         virtual const uci::type::OperatorLocationOfInterestID_Type& getOperatorLocationOfInterestID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the
           * OperatorLocationOfInterestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by OperatorLocationOfInterestID.
           */
         virtual uci::type::OperatorLocationOfInterestID_Type& getOperatorLocationOfInterestID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the OperatorLocationOfInterestID to the contents of the complex
           * content that is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by OperatorLocationOfInterestID
           */
         virtual void setOperatorLocationOfInterestID(const uci::type::OperatorLocationOfInterestID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the DesignationType.
           *
           * @return The value of the enumeration identified by DesignationType.
           */
         virtual const uci::type::DesignationEnum& getDesignationType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the DesignationType.
           *
           * @return The value of the enumeration identified by DesignationType.
           */
         virtual uci::type::DesignationEnum& getDesignationType()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the DesignationType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setDesignationType(const uci::type::DesignationEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the DesignationType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setDesignationType(uci::type::DesignationEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the DesignationObjective.
           *
           * @return The bounded list identified by DesignationObjective.
           */
         virtual const uci::type::OperatorLocationOfInterestDesignationMDT::DesignationObjective& getDesignationObjective() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the DesignationObjective.
           *
           * @return The bounded list identified by DesignationObjective.
           */
         virtual uci::type::OperatorLocationOfInterestDesignationMDT::DesignationObjective& getDesignationObjective()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the DesignationObjective.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setDesignationObjective(const uci::type::OperatorLocationOfInterestDesignationMDT::DesignationObjective& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ApplicableSystemID.
           *
           * @return The bounded list identified by ApplicableSystemID.
           */
         virtual const uci::type::OperatorLocationOfInterestDesignationMDT::ApplicableSystemID& getApplicableSystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the ApplicableSystemID.
           *
           * @return The bounded list identified by ApplicableSystemID.
           */
         virtual uci::type::OperatorLocationOfInterestDesignationMDT::ApplicableSystemID& getApplicableSystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the ApplicableSystemID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setApplicableSystemID(const uci::type::OperatorLocationOfInterestDesignationMDT::ApplicableSystemID& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         OperatorLocationOfInterestDesignationMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The OperatorLocationOfInterestDesignationMDT to copy from
           */
         OperatorLocationOfInterestDesignationMDT(const OperatorLocationOfInterestDesignationMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this OperatorLocationOfInterestDesignationMDT to the contents of the
           * OperatorLocationOfInterestDesignationMDT on the right hand side (rhs) of the assignment
           * operator.OperatorLocationOfInterestDesignationMDT [only available to derived classes]
           *
           * @param rhs The OperatorLocationOfInterestDesignationMDT on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::OperatorLocationOfInterestDesignationMDT
           * @return A constant reference to this OperatorLocationOfInterestDesignationMDT.
           */
         const OperatorLocationOfInterestDesignationMDT& operator=(const OperatorLocationOfInterestDesignationMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // OperatorLocationOfInterestDesignationMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__OperatorLocationOfInterestDesignationMDT_h

