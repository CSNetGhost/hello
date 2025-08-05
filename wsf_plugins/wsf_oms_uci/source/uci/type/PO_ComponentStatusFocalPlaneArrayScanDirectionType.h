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
#ifndef Uci__Type__PO_ComponentStatusFocalPlaneArrayScanDirectionType_h
#define Uci__Type__PO_ComponentStatusFocalPlaneArrayScanDirectionType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__RelativeDirectionEnum_h)
# include "uci/type/RelativeDirectionEnum.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the PO_ComponentStatusFocalPlaneArrayScanDirectionType sequence accessor class */
      class PO_ComponentStatusFocalPlaneArrayScanDirectionType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~PO_ComponentStatusFocalPlaneArrayScanDirectionType()
         { }

         /** Returns this accessor's type constant, i.e. PO_ComponentStatusFocalPlaneArrayScanDirectionType
           *
           * @return This accessor's type constant, i.e. PO_ComponentStatusFocalPlaneArrayScanDirectionType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::pO_ComponentStatusFocalPlaneArrayScanDirectionType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const PO_ComponentStatusFocalPlaneArrayScanDirectionType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the DirectionSetting.
           *
           * @return The value of the enumeration identified by DirectionSetting.
           */
         virtual const uci::type::RelativeDirectionEnum& getDirectionSetting() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the DirectionSetting.
           *
           * @return The value of the enumeration identified by DirectionSetting.
           */
         virtual uci::type::RelativeDirectionEnum& getDirectionSetting()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the DirectionSetting.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setDirectionSetting(const uci::type::RelativeDirectionEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the DirectionSetting.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setDirectionSetting(uci::type::RelativeDirectionEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the AutoDirection.
           *
           * @return The value of the simple primitive data type identified by AutoDirection.
           */
         virtual xs::Boolean getAutoDirection() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the AutoDirection.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setAutoDirection(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by AutoDirection exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by AutoDirection is emabled or not
           */
         virtual bool hasAutoDirection() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by AutoDirection
           *
           * @param type = uci::base::accessorType::booleanAccessor This Accessor's accessor type
           */
         virtual void enableAutoDirection(uci::base::accessorType::AccessorType type = uci::base::accessorType::booleanAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by AutoDirection */
         virtual void clearAutoDirection()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         PO_ComponentStatusFocalPlaneArrayScanDirectionType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The PO_ComponentStatusFocalPlaneArrayScanDirectionType to copy from
           */
         PO_ComponentStatusFocalPlaneArrayScanDirectionType(const PO_ComponentStatusFocalPlaneArrayScanDirectionType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this PO_ComponentStatusFocalPlaneArrayScanDirectionType to the contents
           * of the PO_ComponentStatusFocalPlaneArrayScanDirectionType on the right hand side (rhs) of the assignment
           * operator.PO_ComponentStatusFocalPlaneArrayScanDirectionType [only available to derived classes]
           *
           * @param rhs The PO_ComponentStatusFocalPlaneArrayScanDirectionType on the right hand side (rhs) of the assignment
           *      operator whose contents are used to set the contents of this
           *      uci::type::PO_ComponentStatusFocalPlaneArrayScanDirectionType
           * @return A constant reference to this PO_ComponentStatusFocalPlaneArrayScanDirectionType.
           */
         const PO_ComponentStatusFocalPlaneArrayScanDirectionType& operator=(const PO_ComponentStatusFocalPlaneArrayScanDirectionType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // PO_ComponentStatusFocalPlaneArrayScanDirectionType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__PO_ComponentStatusFocalPlaneArrayScanDirectionType_h

