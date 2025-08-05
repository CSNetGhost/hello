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
#ifndef Uci__Type__ESM_SubcapabilityChoiceType_h
#define Uci__Type__ESM_SubcapabilityChoiceType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityAcquisitionType_h)
# include "uci/type/ESM_SubcapabilityAcquisitionType.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityIdentificationType_h)
# include "uci/type/ESM_SubcapabilityIdentificationType.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityGeolocationType_h)
# include "uci/type/ESM_SubcapabilityGeolocationType.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityMeasurementType_h)
# include "uci/type/ESM_SubcapabilityMeasurementType.h"
#endif

#if !defined(Uci__Type__ESM_SubcapabilityPulseDataCollectType_h)
# include "uci/type/ESM_SubcapabilityPulseDataCollectType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ESM_SubcapabilityChoiceType choice accessor class */
      class ESM_SubcapabilityChoiceType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~ESM_SubcapabilityChoiceType()
         { }

         /** Returns this accessor's type constant, i.e. ESM_SubcapabilityChoiceType
           *
           * @return This accessor's type constant, i.e. ESM_SubcapabilityChoiceType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::eSM_SubcapabilityChoiceType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ESM_SubcapabilityChoiceType& accessor)
            throw(uci::base::UCIException) = 0;


         /** The following enumeration is used to identify which element of this Choice has been chosen. */
         enum ESM_SubcapabilityChoiceTypeChoice {
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_NONE,
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_ACQUISITION,
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_IDENTIFICATION,
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_GEOLOCATION,
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_MEASUREMENT,
            ESM_SUBCAPABILITYCHOICETYPE_CHOICE_PULSEDATACOLLECT
         };


         /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active.
           *
           * @return The selected item's enumerated value
           */
         virtual ESM_SubcapabilityChoiceTypeChoice getESM_SubcapabilityChoiceTypeChoiceOrdinal() const
            throw(uci::base::UCIException) = 0;


         /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
           * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
           * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
           * getESM_SubcapabilityChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
           * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
           * element.
           *
           * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
           * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
           *      The use of this parameter provides support for inheritable types. This parameter defaults to
           *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
           *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
           *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
           *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
           *      base type.
           */
         virtual void setESM_SubcapabilityChoiceTypeChoiceOrdinal(ESM_SubcapabilityChoiceTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Acquisition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Acquisition.
           */
         virtual const uci::type::ESM_SubcapabilityAcquisitionType& getAcquisition() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Acquisition.
           *
           * @return The acecssor that provides access to the complex content that is identified by Acquisition.
           */
         virtual uci::type::ESM_SubcapabilityAcquisitionType& getAcquisition()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Acquisition to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Acquisition
           */
         virtual void setAcquisition(const uci::type::ESM_SubcapabilityAcquisitionType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Identification.
           *
           * @return The acecssor that provides access to the complex content that is identified by Identification.
           */
         virtual const uci::type::ESM_SubcapabilityIdentificationType& getIdentification() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Identification.
           *
           * @return The acecssor that provides access to the complex content that is identified by Identification.
           */
         virtual uci::type::ESM_SubcapabilityIdentificationType& getIdentification()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Identification to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Identification
           */
         virtual void setIdentification(const uci::type::ESM_SubcapabilityIdentificationType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Geolocation.
           *
           * @return The acecssor that provides access to the complex content that is identified by Geolocation.
           */
         virtual const uci::type::ESM_SubcapabilityGeolocationType& getGeolocation() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Geolocation.
           *
           * @return The acecssor that provides access to the complex content that is identified by Geolocation.
           */
         virtual uci::type::ESM_SubcapabilityGeolocationType& getGeolocation()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Geolocation to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Geolocation
           */
         virtual void setGeolocation(const uci::type::ESM_SubcapabilityGeolocationType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Measurement.
           *
           * @return The acecssor that provides access to the complex content that is identified by Measurement.
           */
         virtual const uci::type::ESM_SubcapabilityMeasurementType& getMeasurement() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Measurement.
           *
           * @return The acecssor that provides access to the complex content that is identified by Measurement.
           */
         virtual uci::type::ESM_SubcapabilityMeasurementType& getMeasurement()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Measurement to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Measurement
           */
         virtual void setMeasurement(const uci::type::ESM_SubcapabilityMeasurementType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PulseDataCollect.
           *
           * @return The acecssor that provides access to the complex content that is identified by PulseDataCollect.
           */
         virtual const uci::type::ESM_SubcapabilityPulseDataCollectType& getPulseDataCollect() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PulseDataCollect.
           *
           * @return The acecssor that provides access to the complex content that is identified by PulseDataCollect.
           */
         virtual uci::type::ESM_SubcapabilityPulseDataCollectType& getPulseDataCollect()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the PulseDataCollect to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by PulseDataCollect
           */
         virtual void setPulseDataCollect(const uci::type::ESM_SubcapabilityPulseDataCollectType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ESM_SubcapabilityChoiceType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ESM_SubcapabilityChoiceType to copy from
           */
         ESM_SubcapabilityChoiceType(const ESM_SubcapabilityChoiceType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ESM_SubcapabilityChoiceType to the contents of the
           * ESM_SubcapabilityChoiceType on the right hand side (rhs) of the assignment operator.ESM_SubcapabilityChoiceType [only
           * available to derived classes]
           *
           * @param rhs The ESM_SubcapabilityChoiceType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::ESM_SubcapabilityChoiceType
           * @return A constant reference to this ESM_SubcapabilityChoiceType.
           */
         const ESM_SubcapabilityChoiceType& operator=(const ESM_SubcapabilityChoiceType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ESM_SubcapabilityChoiceType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ESM_SubcapabilityChoiceType_h

