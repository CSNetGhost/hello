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
#ifndef Uci__Type__POST_TaskType_h
#define Uci__Type__POST_TaskType_h 1

#if !defined(Uci__Type__POST_TaskBaseType_h)
# include "uci/type/POST_TaskBaseType.h"
#endif

#if !defined(Uci__Type__PointingType_h)
# include "uci/type/PointingType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the POST_TaskType sequence accessor class */
      class POST_TaskType : public virtual uci::type::POST_TaskBaseType {
      public:

         /** The destructor */
         virtual ~POST_TaskType()
         { }

         /** Returns this accessor's type constant, i.e. POST_TaskType
           *
           * @return This accessor's type constant, i.e. POST_TaskType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::pOST_TaskType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const POST_TaskType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Target.
           *
           * @return The acecssor that provides access to the complex content that is identified by Target.
           */
         virtual const uci::type::PointingType& getTarget() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Target.
           *
           * @return The acecssor that provides access to the complex content that is identified by Target.
           */
         virtual uci::type::PointingType& getTarget()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Target to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Target
           */
         virtual void setTarget(const uci::type::PointingType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         POST_TaskType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The POST_TaskType to copy from
           */
         POST_TaskType(const POST_TaskType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this POST_TaskType to the contents of the POST_TaskType on the right
           * hand side (rhs) of the assignment operator.POST_TaskType [only available to derived classes]
           *
           * @param rhs The POST_TaskType on the right hand side (rhs) of the assignment operator whose contents are used to set
           *      the contents of this uci::type::POST_TaskType
           * @return A constant reference to this POST_TaskType.
           */
         const POST_TaskType& operator=(const POST_TaskType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // POST_TaskType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__POST_TaskType_h

