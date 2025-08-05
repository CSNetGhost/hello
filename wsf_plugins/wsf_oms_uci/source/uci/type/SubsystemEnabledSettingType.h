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
#ifndef Uci__Type__SubsystemEnabledSettingType_h
#define Uci__Type__SubsystemEnabledSettingType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__SubsystemSettingEnum_h)
# include "uci/type/SubsystemSettingEnum.h"
#endif

#if !defined(Uci__Base__UnsignedIntAccessor_h)
# include "uci/base/UnsignedIntAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SubsystemEnabledSettingType sequence accessor class */
      class SubsystemEnabledSettingType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~SubsystemEnabledSettingType()
         { }

         /** Returns this accessor's type constant, i.e. SubsystemEnabledSettingType
           *
           * @return This accessor's type constant, i.e. SubsystemEnabledSettingType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::subsystemEnabledSettingType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SubsystemEnabledSettingType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SubsystemSetting.
           *
           * @return The value of the enumeration identified by SubsystemSetting.
           */
         virtual const uci::type::SubsystemSettingEnum& getSubsystemSetting() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the SubsystemSetting.
           *
           * @return The value of the enumeration identified by SubsystemSetting.
           */
         virtual uci::type::SubsystemSettingEnum& getSubsystemSetting()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SubsystemSetting.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSubsystemSetting(const uci::type::SubsystemSettingEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the SubsystemSetting.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setSubsystemSetting(uci::type::SubsystemSettingEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the SubsystemSettingParameter.
           *
           * @return The value of the simple primitive data type identified by SubsystemSettingParameter.
           */
         virtual xs::UnsignedInt getSubsystemSettingParameter() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the SubsystemSettingParameter.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setSubsystemSettingParameter(xs::UnsignedInt value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by SubsystemSettingParameter exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by SubsystemSettingParameter is emabled or not
           */
         virtual bool hasSubsystemSettingParameter() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by SubsystemSettingParameter
           *
           * @param type = uci::base::accessorType::unsignedIntAccessor This Accessor's accessor type
           */
         virtual void enableSubsystemSettingParameter(uci::base::accessorType::AccessorType type = uci::base::accessorType::unsignedIntAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by SubsystemSettingParameter */
         virtual void clearSubsystemSettingParameter()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SubsystemEnabledSettingType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SubsystemEnabledSettingType to copy from
           */
         SubsystemEnabledSettingType(const SubsystemEnabledSettingType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SubsystemEnabledSettingType to the contents of the
           * SubsystemEnabledSettingType on the right hand side (rhs) of the assignment operator.SubsystemEnabledSettingType [only
           * available to derived classes]
           *
           * @param rhs The SubsystemEnabledSettingType on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::SubsystemEnabledSettingType
           * @return A constant reference to this SubsystemEnabledSettingType.
           */
         const SubsystemEnabledSettingType& operator=(const SubsystemEnabledSettingType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SubsystemEnabledSettingType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SubsystemEnabledSettingType_h

