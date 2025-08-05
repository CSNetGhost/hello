// This file was generated  on 12/5/2018 at 1:1:48 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__SMTI_ResolutionType_h
#define Uci__Type__SMTI_ResolutionType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__RangeResolutionType_h)
# include "uci/type/RangeResolutionType.h"
#endif

#if !defined(Uci__Type__SpeedType_h)
# include "uci/type/SpeedType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SMTI_ResolutionType sequence accessor class */
      class SMTI_ResolutionType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~SMTI_ResolutionType()
         { }

         /** Returns this accessor's type constant, i.e. SMTI_ResolutionType
           *
           * @return This accessor's type constant, i.e. SMTI_ResolutionType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::sMTI_ResolutionType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SMTI_ResolutionType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RangeResolution.
           *
           * @return The acecssor that provides access to the complex content that is identified by RangeResolution.
           */
         virtual const uci::type::RangeResolutionType& getRangeResolution() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the RangeResolution.
           *
           * @return The acecssor that provides access to the complex content that is identified by RangeResolution.
           */
         virtual uci::type::RangeResolutionType& getRangeResolution()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the RangeResolution to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by RangeResolution
           */
         virtual void setRangeResolution(const uci::type::RangeResolutionType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the DopplerResolution.
           *
           * @return The value of the simple primitive data type identified by DopplerResolution.
           */
         virtual uci::type::SpeedTypeValue getDopplerResolution() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the DopplerResolution.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setDopplerResolution(uci::type::SpeedTypeValue value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by DopplerResolution exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by DopplerResolution is emabled or not
           */
         virtual bool hasDopplerResolution() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by DopplerResolution
           *
           * @param type = uci::type::accessorType::speedType This Accessor's accessor type
           */
         virtual void enableDopplerResolution(uci::base::accessorType::AccessorType type = uci::type::accessorType::speedType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by DopplerResolution */
         virtual void clearDopplerResolution()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SMTI_ResolutionType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SMTI_ResolutionType to copy from
           */
         SMTI_ResolutionType(const SMTI_ResolutionType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SMTI_ResolutionType to the contents of the SMTI_ResolutionType on
           * the right hand side (rhs) of the assignment operator.SMTI_ResolutionType [only available to derived classes]
           *
           * @param rhs The SMTI_ResolutionType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::SMTI_ResolutionType
           * @return A constant reference to this SMTI_ResolutionType.
           */
         const SMTI_ResolutionType& operator=(const SMTI_ResolutionType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SMTI_ResolutionType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SMTI_ResolutionType_h

