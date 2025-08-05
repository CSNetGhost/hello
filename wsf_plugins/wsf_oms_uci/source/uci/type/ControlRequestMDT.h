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
#ifndef Uci__Type__ControlRequestMDT_h
#define Uci__Type__ControlRequestMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ControlRequestID_Type_h)
# include "uci/type/ControlRequestID_Type.h"
#endif

#if !defined(Uci__Type__ControlTypeEnum_h)
# include "uci/type/ControlTypeEnum.h"
#endif

#if !defined(Uci__Type__ControlRequestEnum_h)
# include "uci/type/ControlRequestEnum.h"
#endif

#if !defined(Uci__Type__ControllerType_h)
# include "uci/type/ControllerType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__ControleeType_h)
# include "uci/type/ControleeType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ControlRequestMDT sequence accessor class */
      class ControlRequestMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ControlRequestMDT()
         { }

         /** Returns this accessor's type constant, i.e. ControlRequestMDT
           *
           * @return This accessor's type constant, i.e. ControlRequestMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::controlRequestMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ControlRequestMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates the identity of an item to be controlled. [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::ControleeType, uci::type::accessorType::controleeType> Controlee;

         /** Returns the accessor that provides access to the complex content that is identified by the ControlRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ControlRequestID.
           */
         virtual const uci::type::ControlRequestID_Type& getControlRequestID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ControlRequestID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ControlRequestID.
           */
         virtual uci::type::ControlRequestID_Type& getControlRequestID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ControlRequestID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ControlRequestID
           */
         virtual void setControlRequestID(const uci::type::ControlRequestID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ControlType.
           *
           * @return The value of the enumeration identified by ControlType.
           */
         virtual const uci::type::ControlTypeEnum& getControlType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ControlType.
           *
           * @return The value of the enumeration identified by ControlType.
           */
         virtual uci::type::ControlTypeEnum& getControlType()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ControlType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setControlType(const uci::type::ControlTypeEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ControlType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setControlType(uci::type::ControlTypeEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the RequestType.
           *
           * @return The value of the enumeration identified by RequestType.
           */
         virtual const uci::type::ControlRequestEnum& getRequestType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the RequestType.
           *
           * @return The value of the enumeration identified by RequestType.
           */
         virtual uci::type::ControlRequestEnum& getRequestType()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequestType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequestType(const uci::type::ControlRequestEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the RequestType.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setRequestType(uci::type::ControlRequestEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Controller.
           *
           * @return The acecssor that provides access to the complex content that is identified by Controller.
           */
         virtual const uci::type::ControllerType& getController() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Controller.
           *
           * @return The acecssor that provides access to the complex content that is identified by Controller.
           */
         virtual uci::type::ControllerType& getController()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Controller to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Controller
           */
         virtual void setController(const uci::type::ControllerType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the Controlee.
           *
           * @return The bounded list identified by Controlee.
           */
         virtual const uci::type::ControlRequestMDT::Controlee& getControlee() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the Controlee.
           *
           * @return The bounded list identified by Controlee.
           */
         virtual uci::type::ControlRequestMDT::Controlee& getControlee()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the Controlee.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setControlee(const uci::type::ControlRequestMDT::Controlee& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ControlRequestMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ControlRequestMDT to copy from
           */
         ControlRequestMDT(const ControlRequestMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ControlRequestMDT to the contents of the ControlRequestMDT on the
           * right hand side (rhs) of the assignment operator.ControlRequestMDT [only available to derived classes]
           *
           * @param rhs The ControlRequestMDT on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::ControlRequestMDT
           * @return A constant reference to this ControlRequestMDT.
           */
         const ControlRequestMDT& operator=(const ControlRequestMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ControlRequestMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ControlRequestMDT_h

