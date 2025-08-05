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
#ifndef Uci__Type__CommTerminalCapabilityCommandType_h
#define Uci__Type__CommTerminalCapabilityCommandType_h 1

#if !defined(Uci__Type__CapabilityCommandBaseType_h)
# include "uci/type/CapabilityCommandBaseType.h"
#endif

#if !defined(Uci__Type__SubsystemID_Type_h)
# include "uci/type/SubsystemID_Type.h"
#endif

#if !defined(Uci__Type__CommConnectionCommandEnum_h)
# include "uci/type/CommConnectionCommandEnum.h"
#endif

#if !defined(Uci__Type__CommControlType_h)
# include "uci/type/CommControlType.h"
#endif

#if !defined(Uci__Type__CommProfileID_Type_h)
# include "uci/type/CommProfileID_Type.h"
#endif

#if !defined(Uci__Type__CommLinkPortMapType_h)
# include "uci/type/CommLinkPortMapType.h"
#endif

#if !defined(Uci__Type__NetworkLinkID_Type_h)
# include "uci/type/NetworkLinkID_Type.h"
#endif

#if !defined(Uci__Type__VerboseStatusType_h)
# include "uci/type/VerboseStatusType.h"
#endif

#if !defined(Uci__Type__CommWaveformCapabilityCommandPET_h)
# include "uci/type/CommWaveformCapabilityCommandPET.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CommTerminalCapabilityCommandType sequence accessor class */
      class CommTerminalCapabilityCommandType : public virtual uci::type::CapabilityCommandBaseType {
      public:

         /** The destructor */
         virtual ~CommTerminalCapabilityCommandType()
         { }

         /** Returns this accessor's type constant, i.e. CommTerminalCapabilityCommandType
           *
           * @return This accessor's type constant, i.e. CommTerminalCapabilityCommandType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::commTerminalCapabilityCommandType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CommTerminalCapabilityCommandType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SubsystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SubsystemID.
           */
         virtual const uci::type::SubsystemID_Type& getSubsystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SubsystemID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SubsystemID.
           */
         virtual uci::type::SubsystemID_Type& getSubsystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SubsystemID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SubsystemID
           */
         virtual void setSubsystemID(const uci::type::SubsystemID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ConnectionRequest.
           *
           * @return The value of the enumeration identified by ConnectionRequest.
           */
         virtual const uci::type::CommConnectionCommandEnum& getConnectionRequest() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the ConnectionRequest.
           *
           * @return The value of the enumeration identified by ConnectionRequest.
           */
         virtual uci::type::CommConnectionCommandEnum& getConnectionRequest()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ConnectionRequest.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setConnectionRequest(const uci::type::CommConnectionCommandEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the ConnectionRequest.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setConnectionRequest(uci::type::CommConnectionCommandEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield ConnectionRequestis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasConnectionRequest() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getConnectionRequest will return the optional field and not throw an exception
           * when invoked.
           *
           * @param type = uci::type::accessorType::commConnectionCommandEnum This Accessor's accessor type
           */
         virtual void enableConnectionRequest(uci::base::accessorType::AccessorType type = uci::type::accessorType::commConnectionCommandEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearConnectionRequest()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommonSettingsChange.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommonSettingsChange.
           */
         virtual const uci::type::CommControlType& getCommonSettingsChange() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommonSettingsChange.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommonSettingsChange.
           */
         virtual uci::type::CommControlType& getCommonSettingsChange()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CommonSettingsChange to the contents of the complex content that
           * is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CommonSettingsChange
           */
         virtual void setCommonSettingsChange(const uci::type::CommControlType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by CommonSettingsChange exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by CommonSettingsChange is emabled or not
           */
         virtual bool hasCommonSettingsChange() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by CommonSettingsChange
           *
           * @param type = uci::type::accessorType::commControlType This Accessor's accessor type
           */
         virtual void enableCommonSettingsChange(uci::base::accessorType::AccessorType type = uci::type::accessorType::commControlType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by CommonSettingsChange */
         virtual void clearCommonSettingsChange()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ActivateProfileID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ActivateProfileID.
           */
         virtual const uci::type::CommProfileID_Type& getActivateProfileID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ActivateProfileID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ActivateProfileID.
           */
         virtual uci::type::CommProfileID_Type& getActivateProfileID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ActivateProfileID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ActivateProfileID
           */
         virtual void setActivateProfileID(const uci::type::CommProfileID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by ActivateProfileID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by ActivateProfileID is emabled or not
           */
         virtual bool hasActivateProfileID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by ActivateProfileID
           *
           * @param type = uci::type::accessorType::commProfileID_Type This Accessor's accessor type
           */
         virtual void enableActivateProfileID(uci::base::accessorType::AccessorType type = uci::type::accessorType::commProfileID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by ActivateProfileID */
         virtual void clearActivateProfileID()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the LinkPortAssignments.
           *
           * @return The acecssor that provides access to the complex content that is identified by LinkPortAssignments.
           */
         virtual const uci::type::CommLinkPortMapType& getLinkPortAssignments() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the LinkPortAssignments.
           *
           * @return The acecssor that provides access to the complex content that is identified by LinkPortAssignments.
           */
         virtual uci::type::CommLinkPortMapType& getLinkPortAssignments()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the LinkPortAssignments to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by LinkPortAssignments
           */
         virtual void setLinkPortAssignments(const uci::type::CommLinkPortMapType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by LinkPortAssignments exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by LinkPortAssignments is emabled or not
           */
         virtual bool hasLinkPortAssignments() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by LinkPortAssignments
           *
           * @param type = uci::type::accessorType::commLinkPortMapType This Accessor's accessor type
           */
         virtual void enableLinkPortAssignments(uci::base::accessorType::AccessorType type = uci::type::accessorType::commLinkPortMapType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by LinkPortAssignments */
         virtual void clearLinkPortAssignments()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NetworkLinkID.
           *
           * @return The acecssor that provides access to the complex content that is identified by NetworkLinkID.
           */
         virtual const uci::type::NetworkLinkID_Type& getNetworkLinkID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NetworkLinkID.
           *
           * @return The acecssor that provides access to the complex content that is identified by NetworkLinkID.
           */
         virtual uci::type::NetworkLinkID_Type& getNetworkLinkID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the NetworkLinkID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by NetworkLinkID
           */
         virtual void setNetworkLinkID(const uci::type::NetworkLinkID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by NetworkLinkID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by NetworkLinkID is emabled or not
           */
         virtual bool hasNetworkLinkID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by NetworkLinkID
           *
           * @param type = uci::type::accessorType::networkLinkID_Type This Accessor's accessor type
           */
         virtual void enableNetworkLinkID(uci::base::accessorType::AccessorType type = uci::type::accessorType::networkLinkID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by NetworkLinkID */
         virtual void clearNetworkLinkID()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the VerboseStatus.
           *
           * @return The acecssor that provides access to the complex content that is identified by VerboseStatus.
           */
         virtual const uci::type::VerboseStatusType& getVerboseStatus() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the VerboseStatus.
           *
           * @return The acecssor that provides access to the complex content that is identified by VerboseStatus.
           */
         virtual uci::type::VerboseStatusType& getVerboseStatus()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the VerboseStatus to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by VerboseStatus
           */
         virtual void setVerboseStatus(const uci::type::VerboseStatusType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by VerboseStatus exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by VerboseStatus is emabled or not
           */
         virtual bool hasVerboseStatus() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by VerboseStatus
           *
           * @param type = uci::type::accessorType::verboseStatusType This Accessor's accessor type
           */
         virtual void enableVerboseStatus(uci::base::accessorType::AccessorType type = uci::type::accessorType::verboseStatusType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by VerboseStatus */
         virtual void clearVerboseStatus()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the WaveformSpecificSettings.
           *
           * @return The acecssor that provides access to the complex content that is identified by WaveformSpecificSettings.
           */
         virtual const uci::type::CommWaveformCapabilityCommandPET& getWaveformSpecificSettings() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the WaveformSpecificSettings.
           *
           * @return The acecssor that provides access to the complex content that is identified by WaveformSpecificSettings.
           */
         virtual uci::type::CommWaveformCapabilityCommandPET& getWaveformSpecificSettings()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the WaveformSpecificSettings to the contents of the complex content
           * that is accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by WaveformSpecificSettings
           */
         virtual void setWaveformSpecificSettings(const uci::type::CommWaveformCapabilityCommandPET& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by WaveformSpecificSettings exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by WaveformSpecificSettings is emabled or not
           */
         virtual bool hasWaveformSpecificSettings() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by WaveformSpecificSettings
           *
           * @param type = uci::type::accessorType::commWaveformCapabilityCommandPET This Accessor's accessor type
           */
         virtual void enableWaveformSpecificSettings(uci::base::accessorType::AccessorType type = uci::type::accessorType::commWaveformCapabilityCommandPET)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by WaveformSpecificSettings */
         virtual void clearWaveformSpecificSettings()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CommTerminalCapabilityCommandType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CommTerminalCapabilityCommandType to copy from
           */
         CommTerminalCapabilityCommandType(const CommTerminalCapabilityCommandType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CommTerminalCapabilityCommandType to the contents of the
           * CommTerminalCapabilityCommandType on the right hand side (rhs) of the assignment
           * operator.CommTerminalCapabilityCommandType [only available to derived classes]
           *
           * @param rhs The CommTerminalCapabilityCommandType on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::type::CommTerminalCapabilityCommandType
           * @return A constant reference to this CommTerminalCapabilityCommandType.
           */
         const CommTerminalCapabilityCommandType& operator=(const CommTerminalCapabilityCommandType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CommTerminalCapabilityCommandType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CommTerminalCapabilityCommandType_h

