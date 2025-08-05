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
#ifndef Uci__Type__ESM_ChangeDwellType_h
#define Uci__Type__ESM_ChangeDwellType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__DwellID_Type_h)
# include "uci/type/DwellID_Type.h"
#endif

#if !defined(Uci__Type__CapabilityStateCommandEnum_h)
# include "uci/type/CapabilityStateCommandEnum.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ESM_ChangeDwellType sequence accessor class */
      class ESM_ChangeDwellType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ESM_ChangeDwellType()
         { }

         /** Returns this accessor's type constant, i.e. ESM_ChangeDwellType
           *
           * @return This accessor's type constant, i.e. ESM_ChangeDwellType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::eSM_ChangeDwellType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ESM_ChangeDwellType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DwellID.
           *
           * @return The acecssor that provides access to the complex content that is identified by DwellID.
           */
         virtual const uci::type::DwellID_Type& getDwellID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the DwellID.
           *
           * @return The acecssor that provides access to the complex content that is identified by DwellID.
           */
         virtual uci::type::DwellID_Type& getDwellID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the DwellID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by DwellID
           */
         virtual void setDwellID(const uci::type::DwellID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ChangeState.
           *
           * @return The value of the enumeration identified by ChangeState.
           */
         virtual const uci::type::CapabilityStateCommandEnum& getChangeState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ChangeState.
           *
           * @return The value of the enumeration identified by ChangeState.
           */
         virtual uci::type::CapabilityStateCommandEnum& getChangeState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ChangeState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setChangeState(const uci::type::CapabilityStateCommandEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ChangeState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setChangeState(uci::type::CapabilityStateCommandEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield ChangeStateis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasChangeState() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getChangeState will return the optional field and not throw an exception when
           * invoked.
           *
           * @param type = uci::type::accessorType::capabilityStateCommandEnum This Accessor's accessor type
           */
         virtual void enableChangeState(uci::base::accessorType::AccessorType type = uci::type::accessorType::capabilityStateCommandEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearChangeState()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the Unallocate.
           *
           * @return The value of the simple primitive data type identified by Unallocate.
           */
         virtual xs::Boolean getUnallocate() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the Unallocate.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setUnallocate(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Unallocate exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Unallocate is emabled or not
           */
         virtual bool hasUnallocate() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Unallocate
           *
           * @param type = uci::base::accessorType::booleanAccessor This Accessor's accessor type
           */
         virtual void enableUnallocate(uci::base::accessorType::AccessorType type = uci::base::accessorType::booleanAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Unallocate */
         virtual void clearUnallocate()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the DeleteDwell.
           *
           * @return The value of the simple primitive data type identified by DeleteDwell.
           */
         virtual xs::Boolean getDeleteDwell() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the DeleteDwell.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setDeleteDwell(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by DeleteDwell exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by DeleteDwell is emabled or not
           */
         virtual bool hasDeleteDwell() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by DeleteDwell
           *
           * @param type = uci::base::accessorType::booleanAccessor This Accessor's accessor type
           */
         virtual void enableDeleteDwell(uci::base::accessorType::AccessorType type = uci::base::accessorType::booleanAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by DeleteDwell */
         virtual void clearDeleteDwell()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ESM_ChangeDwellType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ESM_ChangeDwellType to copy from
           */
         ESM_ChangeDwellType(const ESM_ChangeDwellType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ESM_ChangeDwellType to the contents of the ESM_ChangeDwellType on
           * the right hand side (rhs) of the assignment operator.ESM_ChangeDwellType [only available to derived classes]
           *
           * @param rhs The ESM_ChangeDwellType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::ESM_ChangeDwellType
           * @return A constant reference to this ESM_ChangeDwellType.
           */
         const ESM_ChangeDwellType& operator=(const ESM_ChangeDwellType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ESM_ChangeDwellType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ESM_ChangeDwellType_h

