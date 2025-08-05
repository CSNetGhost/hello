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
#ifndef Uci__Type__COMINT_SettingsCommandMDT_h
#define Uci__Type__COMINT_SettingsCommandMDT_h 1

#if !defined(Uci__Type__CapabilitySettingsCommandBaseType_h)
# include "uci/type/CapabilitySettingsCommandBaseType.h"
#endif

#if !defined(Uci__Type__AmbiguityOrderingEnum_h)
# include "uci/type/AmbiguityOrderingEnum.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the COMINT_SettingsCommandMDT sequence accessor class */
      class COMINT_SettingsCommandMDT : public virtual uci::type::CapabilitySettingsCommandBaseType {
      public:

         /** The destructor */
         virtual ~COMINT_SettingsCommandMDT()
         { }

         /** Returns this accessor's type constant, i.e. COMINT_SettingsCommandMDT
           *
           * @return This accessor's type constant, i.e. COMINT_SettingsCommandMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::cOMINT_SettingsCommandMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const COMINT_SettingsCommandMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SetAmbiguityOrdering.
           *
           * @return The value of the enumeration identified by SetAmbiguityOrdering.
           */
         virtual const uci::type::AmbiguityOrderingEnum& getSetAmbiguityOrdering() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SetAmbiguityOrdering.
           *
           * @return The value of the enumeration identified by SetAmbiguityOrdering.
           */
         virtual uci::type::AmbiguityOrderingEnum& getSetAmbiguityOrdering()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SetAmbiguityOrdering.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSetAmbiguityOrdering(const uci::type::AmbiguityOrderingEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SetAmbiguityOrdering.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSetAmbiguityOrdering(uci::type::AmbiguityOrderingEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield SetAmbiguityOrderingis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasSetAmbiguityOrdering() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getSetAmbiguityOrdering will return the optional field and not throw an
           * exception when invoked.
           *
           * @param type = uci::type::accessorType::ambiguityOrderingEnum This Accessor's accessor type
           */
         virtual void enableSetAmbiguityOrdering(uci::base::accessorType::AccessorType type = uci::type::accessorType::ambiguityOrderingEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearSetAmbiguityOrdering()
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the SpectralDensityReporting.
           *
           * @return The value of the simple primitive data type identified by SpectralDensityReporting.
           */
         virtual xs::Boolean getSpectralDensityReporting() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the SpectralDensityReporting.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setSpectralDensityReporting(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by SpectralDensityReporting exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by SpectralDensityReporting is emabled or not
           */
         virtual bool hasSpectralDensityReporting() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by SpectralDensityReporting
           *
           * @param type = uci::base::accessorType::booleanAccessor This Accessor's accessor type
           */
         virtual void enableSpectralDensityReporting(uci::base::accessorType::AccessorType type = uci::base::accessorType::booleanAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by SpectralDensityReporting */
         virtual void clearSpectralDensityReporting()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         COMINT_SettingsCommandMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The COMINT_SettingsCommandMDT to copy from
           */
         COMINT_SettingsCommandMDT(const COMINT_SettingsCommandMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this COMINT_SettingsCommandMDT to the contents of the
           * COMINT_SettingsCommandMDT on the right hand side (rhs) of the assignment operator.COMINT_SettingsCommandMDT [only
           * available to derived classes]
           *
           * @param rhs The COMINT_SettingsCommandMDT on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::COMINT_SettingsCommandMDT
           * @return A constant reference to this COMINT_SettingsCommandMDT.
           */
         const COMINT_SettingsCommandMDT& operator=(const COMINT_SettingsCommandMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // COMINT_SettingsCommandMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__COMINT_SettingsCommandMDT_h

