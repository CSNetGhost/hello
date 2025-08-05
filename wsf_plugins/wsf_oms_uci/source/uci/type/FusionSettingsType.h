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
#ifndef Uci__Type__FusionSettingsType_h
#define Uci__Type__FusionSettingsType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the FusionSettingsType sequence accessor class */
      class FusionSettingsType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~FusionSettingsType()
         { }

         /** Returns this accessor's type constant, i.e. FusionSettingsType
           *
           * @return This accessor's type constant, i.e. FusionSettingsType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::fusionSettingsType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const FusionSettingsType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the SplitAllowed.
           *
           * @return The value of the simple primitive data type identified by SplitAllowed.
           */
         virtual xs::Boolean getSplitAllowed() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the SplitAllowed.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setSplitAllowed(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the RemergeAllowed.
           *
           * @return The value of the simple primitive data type identified by RemergeAllowed.
           */
         virtual xs::Boolean getRemergeAllowed() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the RemergeAllowed.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setRemergeAllowed(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the RespawnAllowed.
           *
           * @return The value of the simple primitive data type identified by RespawnAllowed.
           */
         virtual xs::Boolean getRespawnAllowed() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the RespawnAllowed.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setRespawnAllowed(xs::Boolean value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         FusionSettingsType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The FusionSettingsType to copy from
           */
         FusionSettingsType(const FusionSettingsType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this FusionSettingsType to the contents of the FusionSettingsType on
           * the right hand side (rhs) of the assignment operator.FusionSettingsType [only available to derived classes]
           *
           * @param rhs The FusionSettingsType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::FusionSettingsType
           * @return A constant reference to this FusionSettingsType.
           */
         const FusionSettingsType& operator=(const FusionSettingsType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // FusionSettingsType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__FusionSettingsType_h

