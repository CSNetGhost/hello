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
#ifndef Uci__Type__CommPointingCommandQFT_h
#define Uci__Type__CommPointingCommandQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__CommPointingCommandID_Type_h)
# include "uci/type/CommPointingCommandID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CommPointingCommandQFT sequence accessor class */
      class CommPointingCommandQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~CommPointingCommandQFT()
         { }

         /** Returns this accessor's type constant, i.e. CommPointingCommandQFT
           *
           * @return This accessor's type constant, i.e. CommPointingCommandQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::commPointingCommandQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CommPointingCommandQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::CommPointingCommandID_Type, uci::type::accessorType::commPointingCommandID_Type> CommPointingCommandID;

         /** Returns the value of the SimplePrimitive data type that is identified by the IncludeStatus.
           *
           * @return The value of the simple primitive data type identified by IncludeStatus.
           */
         virtual xs::Boolean getIncludeStatus() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the IncludeStatus.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setIncludeStatus(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommPointingCommandID.
           *
           * @return The bounded list identified by CommPointingCommandID.
           */
         virtual const uci::type::CommPointingCommandQFT::CommPointingCommandID& getCommPointingCommandID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommPointingCommandID.
           *
           * @return The bounded list identified by CommPointingCommandID.
           */
         virtual uci::type::CommPointingCommandQFT::CommPointingCommandID& getCommPointingCommandID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CommPointingCommandID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCommPointingCommandID(const uci::type::CommPointingCommandQFT::CommPointingCommandID& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CommPointingCommandQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CommPointingCommandQFT to copy from
           */
         CommPointingCommandQFT(const CommPointingCommandQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CommPointingCommandQFT to the contents of the
           * CommPointingCommandQFT on the right hand side (rhs) of the assignment operator.CommPointingCommandQFT [only available
           * to derived classes]
           *
           * @param rhs The CommPointingCommandQFT on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::CommPointingCommandQFT
           * @return A constant reference to this CommPointingCommandQFT.
           */
         const CommPointingCommandQFT& operator=(const CommPointingCommandQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CommPointingCommandQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CommPointingCommandQFT_h

