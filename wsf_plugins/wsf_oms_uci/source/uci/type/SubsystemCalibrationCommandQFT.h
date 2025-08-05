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
#ifndef Uci__Type__SubsystemCalibrationCommandQFT_h
#define Uci__Type__SubsystemCalibrationCommandQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__SubsystemCommandID_Type_h)
# include "uci/type/SubsystemCommandID_Type.h"
#endif

#if !defined(Uci__Type__SubsystemID_Type_h)
# include "uci/type/SubsystemID_Type.h"
#endif

#if !defined(Uci__Type__SubsystemCalibrationCommandType_h)
# include "uci/type/SubsystemCalibrationCommandType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the SubsystemCalibrationCommandQFT sequence accessor class */
      class SubsystemCalibrationCommandQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~SubsystemCalibrationCommandQFT()
         { }

         /** Returns this accessor's type constant, i.e. SubsystemCalibrationCommandQFT
           *
           * @return This accessor's type constant, i.e. SubsystemCalibrationCommandQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::subsystemCalibrationCommandQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const SubsystemCalibrationCommandQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::SubsystemCommandID_Type, uci::type::accessorType::subsystemCommandID_Type> CommandID;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::SubsystemID_Type, uci::type::accessorType::subsystemID_Type> SubsystemID;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::SubsystemCalibrationCommandType, uci::type::accessorType::subsystemCalibrationCommandType> CommandType;

         /** Returns the bounded list that is identified by the CommandID.
           *
           * @return The bounded list identified by CommandID.
           */
         virtual const uci::type::SubsystemCalibrationCommandQFT::CommandID& getCommandID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommandID.
           *
           * @return The bounded list identified by CommandID.
           */
         virtual uci::type::SubsystemCalibrationCommandQFT::CommandID& getCommandID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CommandID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCommandID(const uci::type::SubsystemCalibrationCommandQFT::CommandID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubsystemID.
           *
           * @return The bounded list identified by SubsystemID.
           */
         virtual const uci::type::SubsystemCalibrationCommandQFT::SubsystemID& getSubsystemID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubsystemID.
           *
           * @return The bounded list identified by SubsystemID.
           */
         virtual uci::type::SubsystemCalibrationCommandQFT::SubsystemID& getSubsystemID()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the SubsystemID.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setSubsystemID(const uci::type::SubsystemCalibrationCommandQFT::SubsystemID& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommandType.
           *
           * @return The bounded list identified by CommandType.
           */
         virtual const uci::type::SubsystemCalibrationCommandQFT::CommandType& getCommandType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommandType.
           *
           * @return The bounded list identified by CommandType.
           */
         virtual uci::type::SubsystemCalibrationCommandQFT::CommandType& getCommandType()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CommandType.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCommandType(const uci::type::SubsystemCalibrationCommandQFT::CommandType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         SubsystemCalibrationCommandQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The SubsystemCalibrationCommandQFT to copy from
           */
         SubsystemCalibrationCommandQFT(const SubsystemCalibrationCommandQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this SubsystemCalibrationCommandQFT to the contents of the
           * SubsystemCalibrationCommandQFT on the right hand side (rhs) of the assignment operator.SubsystemCalibrationCommandQFT
           * [only available to derived classes]
           *
           * @param rhs The SubsystemCalibrationCommandQFT on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::SubsystemCalibrationCommandQFT
           * @return A constant reference to this SubsystemCalibrationCommandQFT.
           */
         const SubsystemCalibrationCommandQFT& operator=(const SubsystemCalibrationCommandQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // SubsystemCalibrationCommandQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__SubsystemCalibrationCommandQFT_h

