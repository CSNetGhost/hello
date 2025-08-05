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
#ifndef Uci__Type__SubsystemComponentType_h
#define Uci__Type__SubsystemComponentType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__ComponentID_Type_h)
# include "uci/type/ComponentID_Type.h"
#endif

#if !defined(Uci__Type__ComponentStateEnum_h)
# include "uci/type/ComponentStateEnum.h"
#endif

#if !defined(Uci__Type__AboutType_h)
# include "uci/type/AboutType.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__TemperatureStatusType_h)
# include "uci/type/TemperatureStatusType.h"
#endif

#if !defined(Uci__Type__CapabilityCrossReferenceType_h)
# include "uci/type/CapabilityCrossReferenceType.h"
#endif

#if !defined(Uci__Type__ForeignKeyType_h)
# include "uci/type/ForeignKeyType.h"
#endif

#if !defined(Uci__Type__InstallationDetailsType_h)
# include "uci/type/InstallationDetailsType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SubsystemComponentType sequence accessor class */
      class SubsystemComponentType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~SubsystemComponentType()
         { }

         /** Returns this accessor's type constant, i.e. SubsystemComponentType
           *
           * @return This accessor's type constant, i.e. SubsystemComponentType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::subsystemComponentType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SubsystemComponentType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates the temperature of the Subsystem Component corresponding to this message. [Minimum occurrences: 0] [Maximum
           * occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::TemperatureStatusType, uci::type::accessorType::temperatureStatusType> Temperature;

         /** Indicates a Capability that is dependent upon this Component. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::CapabilityCrossReferenceType, uci::type::accessorType::capabilityCrossReferenceType> CapabilityCrossReference;

         /** Returns the accessor that provides access to the complex content that is identified by the ComponentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ComponentID.
           */
         virtual const uci::type::ComponentID_Type& getComponentID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ComponentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ComponentID.
           */
         virtual uci::type::ComponentID_Type& getComponentID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ComponentID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ComponentID
           */
         virtual void setComponentID(const uci::type::ComponentID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ComponentState.
           *
           * @return The value of the enumeration identified by ComponentState.
           */
         virtual const uci::type::ComponentStateEnum& getComponentState() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ComponentState.
           *
           * @return The value of the enumeration identified by ComponentState.
           */
         virtual uci::type::ComponentStateEnum& getComponentState()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ComponentState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setComponentState(const uci::type::ComponentStateEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ComponentState.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setComponentState(uci::type::ComponentStateEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the About.
           *
           * @return The acecssor that provides access to the complex content that is identified by About.
           */
         virtual const uci::type::AboutType& getAbout() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the About.
           *
           * @return The acecssor that provides access to the complex content that is identified by About.
           */
         virtual uci::type::AboutType& getAbout()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the About to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by About
           */
         virtual void setAbout(const uci::type::AboutType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by About exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by About is emabled or not
           */
         virtual bool hasAbout() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by About
           *
           * @param type = uci::type::accessorType::aboutType This Accessor's accessor type
           */
         virtual void enableAbout(uci::base::accessorType::AccessorType type = uci::type::accessorType::aboutType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by About */
         virtual void clearAbout()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the Temperature.
           *
           * @return The bounded list identified by Temperature.
           */
         virtual const uci::type::SubsystemComponentType::Temperature& getTemperature() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the Temperature.
           *
           * @return The bounded list identified by Temperature.
           */
         virtual uci::type::SubsystemComponentType::Temperature& getTemperature()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the Temperature.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setTemperature(const uci::type::SubsystemComponentType::Temperature& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityCrossReference.
           *
           * @return The bounded list identified by CapabilityCrossReference.
           */
         virtual const uci::type::SubsystemComponentType::CapabilityCrossReference& getCapabilityCrossReference() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CapabilityCrossReference.
           *
           * @return The bounded list identified by CapabilityCrossReference.
           */
         virtual uci::type::SubsystemComponentType::CapabilityCrossReference& getCapabilityCrossReference()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CapabilityCrossReference.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCapabilityCrossReference(const uci::type::SubsystemComponentType::CapabilityCrossReference& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstallationLocationID.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstallationLocationID.
           */
         virtual const uci::type::ForeignKeyType& getInstallationLocationID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstallationLocationID.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstallationLocationID.
           */
         virtual uci::type::ForeignKeyType& getInstallationLocationID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the InstallationLocationID to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by InstallationLocationID
           */
         virtual void setInstallationLocationID(const uci::type::ForeignKeyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by InstallationLocationID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by InstallationLocationID is emabled or not
           */
         virtual bool hasInstallationLocationID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by InstallationLocationID
           *
           * @param type = uci::type::accessorType::foreignKeyType This Accessor's accessor type
           */
         virtual void enableInstallationLocationID(uci::base::accessorType::AccessorType type = uci::type::accessorType::foreignKeyType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by InstallationLocationID */
         virtual void clearInstallationLocationID()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstallationDetails.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstallationDetails.
           */
         virtual const uci::type::InstallationDetailsType& getInstallationDetails() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the InstallationDetails.
           *
           * @return The acecssor that provides access to the complex content that is identified by InstallationDetails.
           */
         virtual uci::type::InstallationDetailsType& getInstallationDetails()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the InstallationDetails to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by InstallationDetails
           */
         virtual void setInstallationDetails(const uci::type::InstallationDetailsType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by InstallationDetails exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by InstallationDetails is emabled or not
           */
         virtual bool hasInstallationDetails() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by InstallationDetails
           *
           * @param type = uci::type::accessorType::installationDetailsType This Accessor's accessor type
           */
         virtual void enableInstallationDetails(uci::base::accessorType::AccessorType type = uci::type::accessorType::installationDetailsType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by InstallationDetails */
         virtual void clearInstallationDetails()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SubsystemComponentType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SubsystemComponentType to copy from
           */
         SubsystemComponentType(const SubsystemComponentType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SubsystemComponentType to the contents of the
           * SubsystemComponentType on the right hand side (rhs) of the assignment operator.SubsystemComponentType [only available
           * to derived classes]
           *
           * @param rhs The SubsystemComponentType on the right hand side (rhs) of the assignment operator whose contents are used
           *      to set the contents of this uci::type::SubsystemComponentType
           * @return A constant reference to this SubsystemComponentType.
           */
         const SubsystemComponentType& operator=(const SubsystemComponentType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SubsystemComponentType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SubsystemComponentType_h

