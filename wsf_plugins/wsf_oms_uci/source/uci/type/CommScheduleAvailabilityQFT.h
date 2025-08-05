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
#ifndef Uci__Type__CommScheduleAvailabilityQFT_h
#define Uci__Type__CommScheduleAvailabilityQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__DateTimeRangeType_h)
# include "uci/type/DateTimeRangeType.h"
#endif

#if !defined(Uci__Type__CommResourceType_h)
# include "uci/type/CommResourceType.h"
#endif

#if !defined(Uci__Type__TimeCoverageType_h)
# include "uci/type/TimeCoverageType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CommScheduleAvailabilityQFT sequence accessor class */
      class CommScheduleAvailabilityQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~CommScheduleAvailabilityQFT()
         { }

         /** Returns this accessor's type constant, i.e. CommScheduleAvailabilityQFT
           *
           * @return This accessor's type constant, i.e. CommScheduleAvailabilityQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::commScheduleAvailabilityQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CommScheduleAvailabilityQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::DateTimeRangeType, uci::type::accessorType::dateTimeRangeType> AvailabilityTime;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::CommResourceType, uci::type::accessorType::commResourceType> CommResource;

         /** [Minimum occurrences: 0] [Maximum occurrences: 9223372036854775807] */
         typedef uci::base::BoundedList<uci::type::TimeCoverageType, uci::type::accessorType::timeCoverageType> TimeCoverage;

         /** Returns the bounded list that is identified by the AvailabilityTime.
           *
           * @return The bounded list identified by AvailabilityTime.
           */
         virtual const uci::type::CommScheduleAvailabilityQFT::AvailabilityTime& getAvailabilityTime() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the AvailabilityTime.
           *
           * @return The bounded list identified by AvailabilityTime.
           */
         virtual uci::type::CommScheduleAvailabilityQFT::AvailabilityTime& getAvailabilityTime()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the AvailabilityTime.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setAvailabilityTime(const uci::type::CommScheduleAvailabilityQFT::AvailabilityTime& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommResource.
           *
           * @return The bounded list identified by CommResource.
           */
         virtual const uci::type::CommScheduleAvailabilityQFT::CommResource& getCommResource() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the CommResource.
           *
           * @return The bounded list identified by CommResource.
           */
         virtual uci::type::CommScheduleAvailabilityQFT::CommResource& getCommResource()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the CommResource.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setCommResource(const uci::type::CommScheduleAvailabilityQFT::CommResource& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the TimeCoverage.
           *
           * @return The bounded list identified by TimeCoverage.
           */
         virtual const uci::type::CommScheduleAvailabilityQFT::TimeCoverage& getTimeCoverage() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the TimeCoverage.
           *
           * @return The bounded list identified by TimeCoverage.
           */
         virtual uci::type::CommScheduleAvailabilityQFT::TimeCoverage& getTimeCoverage()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the TimeCoverage.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setTimeCoverage(const uci::type::CommScheduleAvailabilityQFT::TimeCoverage& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CommScheduleAvailabilityQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CommScheduleAvailabilityQFT to copy from
           */
         CommScheduleAvailabilityQFT(const CommScheduleAvailabilityQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CommScheduleAvailabilityQFT to the contents of the
           * CommScheduleAvailabilityQFT on the right hand side (rhs) of the assignment operator.CommScheduleAvailabilityQFT [only
           * available to derived classes]
           *
           * @param rhs The CommScheduleAvailabilityQFT on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::type::CommScheduleAvailabilityQFT
           * @return A constant reference to this CommScheduleAvailabilityQFT.
           */
         const CommScheduleAvailabilityQFT& operator=(const CommScheduleAvailabilityQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CommScheduleAvailabilityQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CommScheduleAvailabilityQFT_h

