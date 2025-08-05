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
#ifndef Uci__Type__IO_PortStatusMDT_h
#define Uci__Type__IO_PortStatusMDT_h 1

#if !defined(Uci__Type__SupportCapabilityStatusBaseType_h)
# include "uci/type/SupportCapabilityStatusBaseType.h"
#endif

#if !defined(Uci__Type__SubsystemID_Type_h)
# include "uci/type/SubsystemID_Type.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__IO_PortStatusType_h)
# include "uci/type/IO_PortStatusType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This type represents the status and settings for I/O ports that are relevant to mission operations. */
      class IO_PortStatusMDT : public virtual uci::type::SupportCapabilityStatusBaseType {
      public:

         /** The destructor */
         virtual ~IO_PortStatusMDT()
         { }

         /** Returns this accessor's type constant, i.e. IO_PortStatusMDT
           *
           * @return This accessor's type constant, i.e. IO_PortStatusMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::iO_PortStatusMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const IO_PortStatusMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates the current configuration information about the set of ports associated with this support capability. Note
           * that user I/O ports are (typically) found on the RED side of the subsystem. [Minimum occurrences: 0] [Maximum
           * occurrences: 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::IO_PortStatusType, uci::type::accessorType::iO_PortStatusType> IO_Port;

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


         /** Returns the bounded list that is identified by the IO_Port.
           *
           * @return The bounded list identified by IO_Port.
           */
         virtual const uci::type::IO_PortStatusMDT::IO_Port& getIO_Port() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the IO_Port.
           *
           * @return The bounded list identified by IO_Port.
           */
         virtual uci::type::IO_PortStatusMDT::IO_Port& getIO_Port()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the IO_Port.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setIO_Port(const uci::type::IO_PortStatusMDT::IO_Port& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         IO_PortStatusMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The IO_PortStatusMDT to copy from
           */
         IO_PortStatusMDT(const IO_PortStatusMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this IO_PortStatusMDT to the contents of the IO_PortStatusMDT on the
           * right hand side (rhs) of the assignment operator.IO_PortStatusMDT [only available to derived classes]
           *
           * @param rhs The IO_PortStatusMDT on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::IO_PortStatusMDT
           * @return A constant reference to this IO_PortStatusMDT.
           */
         const IO_PortStatusMDT& operator=(const IO_PortStatusMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // IO_PortStatusMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__IO_PortStatusMDT_h

