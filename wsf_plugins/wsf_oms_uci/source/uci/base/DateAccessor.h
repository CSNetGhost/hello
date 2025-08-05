// This file was generated  on 12/5/2018 at 1:1:44 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Base__DateAccessor_h
#define Uci__Base__DateAccessor_h 1

#if !defined(Xs__Type__SimpleXmlSchemaPrimitives_h)
# include "xs/type/simpleXmlSchemaPrimitives.h"
#endif

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all base data types are declared
   namespace base {

      /** The DateAccessor accessor class is used to provide access to Date data types. */
      class DateAccessor : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~DateAccessor()
         { }

         /** Returns this accessor's type constant, i.e. dateAccessor
           *
           * @return This accessor's type constant, i.e. dateAccessor
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::base::accessorType::dateAccessor;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const DateAccessor& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the Date accessed by this DateAccessor
           *
           * @return The Date accessed by this DateAccessor
           */
         virtual xs::Date getDateValue() const
            throw(uci::base::UCIException) = 0;


         /** Sets the Date accessed by this DateAccessor to the specified Double
           *
           * @param value The Date whose value will be used to set the value of the Date accessed by this accessor.
           */
         virtual void setDateValue(xs::Date value)
            throw(uci::base::UCIException) = 0;


         /** Assigns the value of the Date accessed by this DateAccessor to the value of the Date accessed by the DateAccessor on
           * the right hand side (rhs) of the assignment operator.
           *
           * @param rhs The DateAccessor on the right hand side (rhs) of the assignment operator which provides access to the Date
           *      whose value is to be used to set the Date that is accessed by this DateAccessor.
           * @return A constant reference to this DateAccessor.
           */
         virtual const DateAccessor& operator=(const DateAccessor& rhs)
         {
            setDateValue(rhs.getDateValue());
            return *this;
         }


         /** Conversion operator to convert this DateAccessor to the native xs::Date type.
           *
           * @return No return specified, this conversion operator returns a xs::Date
           */
         virtual  operator xs::Date() const
            throw(uci::base::UCIException)
         {
            return getDateValue();
         }



      protected:

         /** The constructor */
         DateAccessor()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The DateAccessor to copy from
           */
         DateAccessor(const DateAccessor& rhs)
         {
            (void)rhs;
         }

      }; // DateAccessor


   } // Namespace: base
} // Namespace: uci

#endif // Uci__Base__DateAccessor_h

