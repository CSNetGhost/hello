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
#ifndef Uci__Type__TaskResponseType_h
#define Uci__Type__TaskResponseType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__AirSampleTaskBaseType_h)
# include "uci/type/AirSampleTaskBaseType.h"
#endif

#if !defined(Uci__Type__AO_TaskBaseType_h)
# include "uci/type/AO_TaskBaseType.h"
#endif

#if !defined(Uci__Type__AMTI_TaskBaseType_h)
# include "uci/type/AMTI_TaskBaseType.h"
#endif

#if !defined(Uci__Type__CommRelayTaskBaseType_h)
# include "uci/type/CommRelayTaskBaseType.h"
#endif

#if !defined(Uci__Type__EA_ResponseType_h)
# include "uci/type/EA_ResponseType.h"
#endif

#if !defined(Uci__Type__ESM_TaskBaseType_h)
# include "uci/type/ESM_TaskBaseType.h"
#endif

#if !defined(Uci__Type__PO_TaskBaseType_h)
# include "uci/type/PO_TaskBaseType.h"
#endif

#if !defined(Uci__Type__POST_TaskBaseType_h)
# include "uci/type/POST_TaskBaseType.h"
#endif

#if !defined(Uci__Type__SAR_TaskBaseType_h)
# include "uci/type/SAR_TaskBaseType.h"
#endif

#if !defined(Uci__Type__SMTI_TaskBaseType_h)
# include "uci/type/SMTI_TaskBaseType.h"
#endif

#if !defined(Uci__Type__StrikeTaskWeaponListType_h)
# include "uci/type/StrikeTaskWeaponListType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the TaskResponseType choice accessor class */
      class TaskResponseType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~TaskResponseType()
         { }

         /** Returns this accessor's type constant, i.e. TaskResponseType
           *
           * @return This accessor's type constant, i.e. TaskResponseType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::taskResponseType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const TaskResponseType& accessor)
            throw(uci::base::UCIException) = 0;


         /** The following enumeration is used to identify which element of this Choice has been chosen. */
         enum TaskResponseTypeChoice {
            TASKRESPONSETYPE_CHOICE_NONE,
            TASKRESPONSETYPE_CHOICE_AIRSAMPLE,
            TASKRESPONSETYPE_CHOICE_AO,
            TASKRESPONSETYPE_CHOICE_AMTI,
            TASKRESPONSETYPE_CHOICE_COMMRELAY,
            TASKRESPONSETYPE_CHOICE_EA,
            TASKRESPONSETYPE_CHOICE_ESM,
            TASKRESPONSETYPE_CHOICE_PO,
            TASKRESPONSETYPE_CHOICE_POST,
            TASKRESPONSETYPE_CHOICE_SAR,
            TASKRESPONSETYPE_CHOICE_SMTI,
            TASKRESPONSETYPE_CHOICE_STRIKE
         };


         /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active.
           *
           * @return The selected item's enumerated value
           */
         virtual TaskResponseTypeChoice getTaskResponseTypeChoiceOrdinal() const
            throw(uci::base::UCIException) = 0;


         /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
           * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
           * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
           * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
           * getTaskResponseTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the
           * access methods associated with the chosen element will be enabled and will provide access to the chosen element.
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
         virtual void setTaskResponseTypeChoiceOrdinal(TaskResponseTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AirSample.
           *
           * @return The acecssor that provides access to the complex content that is identified by AirSample.
           */
         virtual const uci::type::AirSampleTaskBaseType& getAirSample() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AirSample.
           *
           * @return The acecssor that provides access to the complex content that is identified by AirSample.
           */
         virtual uci::type::AirSampleTaskBaseType& getAirSample()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the AirSample to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by AirSample
           */
         virtual void setAirSample(const uci::type::AirSampleTaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AO.
           *
           * @return The acecssor that provides access to the complex content that is identified by AO.
           */
         virtual const uci::type::AO_TaskBaseType& getAO() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AO.
           *
           * @return The acecssor that provides access to the complex content that is identified by AO.
           */
         virtual uci::type::AO_TaskBaseType& getAO()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the AO to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by AO
           */
         virtual void setAO(const uci::type::AO_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AMTI.
           *
           * @return The acecssor that provides access to the complex content that is identified by AMTI.
           */
         virtual const uci::type::AMTI_TaskBaseType& getAMTI() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the AMTI.
           *
           * @return The acecssor that provides access to the complex content that is identified by AMTI.
           */
         virtual uci::type::AMTI_TaskBaseType& getAMTI()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the AMTI to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by AMTI
           */
         virtual void setAMTI(const uci::type::AMTI_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommRelay.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommRelay.
           */
         virtual const uci::type::CommRelayTaskBaseType& getCommRelay() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CommRelay.
           *
           * @return The acecssor that provides access to the complex content that is identified by CommRelay.
           */
         virtual uci::type::CommRelayTaskBaseType& getCommRelay()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CommRelay to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CommRelay
           */
         virtual void setCommRelay(const uci::type::CommRelayTaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the EA.
           *
           * @return The acecssor that provides access to the complex content that is identified by EA.
           */
         virtual const uci::type::EA_ResponseType& getEA() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the EA.
           *
           * @return The acecssor that provides access to the complex content that is identified by EA.
           */
         virtual uci::type::EA_ResponseType& getEA()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the EA to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by EA
           */
         virtual void setEA(const uci::type::EA_ResponseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ESM.
           *
           * @return The acecssor that provides access to the complex content that is identified by ESM.
           */
         virtual const uci::type::ESM_TaskBaseType& getESM() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ESM.
           *
           * @return The acecssor that provides access to the complex content that is identified by ESM.
           */
         virtual uci::type::ESM_TaskBaseType& getESM()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ESM to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ESM
           */
         virtual void setESM(const uci::type::ESM_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PO.
           *
           * @return The acecssor that provides access to the complex content that is identified by PO.
           */
         virtual const uci::type::PO_TaskBaseType& getPO() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the PO.
           *
           * @return The acecssor that provides access to the complex content that is identified by PO.
           */
         virtual uci::type::PO_TaskBaseType& getPO()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the PO to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by PO
           */
         virtual void setPO(const uci::type::PO_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the POST.
           *
           * @return The acecssor that provides access to the complex content that is identified by POST.
           */
         virtual const uci::type::POST_TaskBaseType& getPOST() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the POST.
           *
           * @return The acecssor that provides access to the complex content that is identified by POST.
           */
         virtual uci::type::POST_TaskBaseType& getPOST()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the POST to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by POST
           */
         virtual void setPOST(const uci::type::POST_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by SAR.
           */
         virtual const uci::type::SAR_TaskBaseType& getSAR() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SAR.
           *
           * @return The acecssor that provides access to the complex content that is identified by SAR.
           */
         virtual uci::type::SAR_TaskBaseType& getSAR()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SAR to the contents of the complex content that is accessed by the
           * specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SAR
           */
         virtual void setSAR(const uci::type::SAR_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SMTI.
           *
           * @return The acecssor that provides access to the complex content that is identified by SMTI.
           */
         virtual const uci::type::SMTI_TaskBaseType& getSMTI() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SMTI.
           *
           * @return The acecssor that provides access to the complex content that is identified by SMTI.
           */
         virtual uci::type::SMTI_TaskBaseType& getSMTI()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SMTI to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SMTI
           */
         virtual void setSMTI(const uci::type::SMTI_TaskBaseType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Strike.
           *
           * @return The acecssor that provides access to the complex content that is identified by Strike.
           */
         virtual const uci::type::StrikeTaskWeaponListType& getStrike() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Strike.
           *
           * @return The acecssor that provides access to the complex content that is identified by Strike.
           */
         virtual uci::type::StrikeTaskWeaponListType& getStrike()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Strike to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Strike
           */
         virtual void setStrike(const uci::type::StrikeTaskWeaponListType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         TaskResponseType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The TaskResponseType to copy from
           */
         TaskResponseType(const TaskResponseType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this TaskResponseType to the contents of the TaskResponseType on the
           * right hand side (rhs) of the assignment operator.TaskResponseType [only available to derived classes]
           *
           * @param rhs The TaskResponseType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::TaskResponseType
           * @return A constant reference to this TaskResponseType.
           */
         const TaskResponseType& operator=(const TaskResponseType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // TaskResponseType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__TaskResponseType_h

