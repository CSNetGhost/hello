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
#ifndef Uci__Type__ContingencyPathAutonomyType_h
#define Uci__Type__ContingencyPathAutonomyType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__PathTypeEnum_h)
# include "uci/type/PathTypeEnum.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

#if !defined(Uci__Base__UnsignedIntAccessor_h)
# include "uci/base/UnsignedIntAccessor.h"
#endif

#if !defined(Uci__Type__ContingencyPathSpacingType_h)
# include "uci/type/ContingencyPathSpacingType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ContingencyPathAutonomyType sequence accessor class */
      class ContingencyPathAutonomyType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ContingencyPathAutonomyType()
         { }

         /** Returns this accessor's type constant, i.e. ContingencyPathAutonomyType
           *
           * @return This accessor's type constant, i.e. ContingencyPathAutonomyType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::contingencyPathAutonomyType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ContingencyPathAutonomyType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Type of contingency path to be autonomously generated. [Maximum occurrences: 12] */
         typedef uci::base::BoundedList<uci::type::PathTypeEnum, uci::type::accessorType::pathTypeEnum> PathType;

         /** Returns the bounded list that is identified by the PathType.
           *
           * @return The bounded list identified by PathType.
           */
         virtual const uci::type::ContingencyPathAutonomyType::PathType& getPathType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the PathType.
           *
           * @return The bounded list identified by PathType.
           */
         virtual uci::type::ContingencyPathAutonomyType::PathType& getPathType()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the PathType.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setPathType(const uci::type::ContingencyPathAutonomyType::PathType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the AllowUsageOfAlternateLandingSite.
           *
           * @return The value of the simple primitive data type identified by AllowUsageOfAlternateLandingSite.
           */
         virtual xs::Boolean getAllowUsageOfAlternateLandingSite() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the AllowUsageOfAlternateLandingSite.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setAllowUsageOfAlternateLandingSite(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the NumberRoutesToGenerate.
           *
           * @return The value of the simple primitive data type identified by NumberRoutesToGenerate.
           */
         virtual xs::UnsignedInt getNumberRoutesToGenerate() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the NumberRoutesToGenerate.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setNumberRoutesToGenerate(xs::UnsignedInt value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Spacing.
           *
           * @return The acecssor that provides access to the complex content that is identified by Spacing.
           */
         virtual const uci::type::ContingencyPathSpacingType& getSpacing() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Spacing.
           *
           * @return The acecssor that provides access to the complex content that is identified by Spacing.
           */
         virtual uci::type::ContingencyPathSpacingType& getSpacing()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Spacing to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Spacing
           */
         virtual void setSpacing(const uci::type::ContingencyPathSpacingType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ContingencyPathAutonomyType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ContingencyPathAutonomyType to copy from
           */
         ContingencyPathAutonomyType(const ContingencyPathAutonomyType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ContingencyPathAutonomyType to the contents of the
           * ContingencyPathAutonomyType on the right hand side (rhs) of the assignment operator.ContingencyPathAutonomyType [only
           * available to derived classes]
           *
           * @param rhs The ContingencyPathAutonomyType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::ContingencyPathAutonomyType
           * @return A constant reference to this ContingencyPathAutonomyType.
           */
         const ContingencyPathAutonomyType& operator=(const ContingencyPathAutonomyType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ContingencyPathAutonomyType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ContingencyPathAutonomyType_h

