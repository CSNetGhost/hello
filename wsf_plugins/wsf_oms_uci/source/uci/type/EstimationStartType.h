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
#ifndef Uci__Type__EstimationStartType_h
#define Uci__Type__EstimationStartType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__InertialStateType_h)
# include "uci/type/InertialStateType.h"
#endif

#if !defined(Uci__Type__EstimationStartingSegmentID_Type_h)
# include "uci/type/EstimationStartingSegmentID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the EstimationStartType sequence accessor class */
      class EstimationStartType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~EstimationStartType()
         { }

         /** Returns this accessor's type constant, i.e. EstimationStartType
           *
           * @return This accessor's type constant, i.e. EstimationStartType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::estimationStartType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const EstimationStartType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Position.
           *
           * @return The acecssor that provides access to the complex content that is identified by Position.
           */
         virtual const uci::type::InertialStateType& getPosition() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Position.
           *
           * @return The acecssor that provides access to the complex content that is identified by Position.
           */
         virtual uci::type::InertialStateType& getPosition()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Position to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Position
           */
         virtual void setPosition(const uci::type::InertialStateType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Position exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Position is emabled or not
           */
         virtual bool hasPosition() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Position
           *
           * @param type = uci::type::accessorType::inertialStateType This Accessor's accessor type
           */
         virtual void enablePosition(uci::base::accessorType::AccessorType type = uci::type::accessorType::inertialStateType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Position */
         virtual void clearPosition()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SegmentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SegmentID.
           */
         virtual const uci::type::EstimationStartingSegmentID_Type& getSegmentID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the SegmentID.
           *
           * @return The acecssor that provides access to the complex content that is identified by SegmentID.
           */
         virtual uci::type::EstimationStartingSegmentID_Type& getSegmentID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the SegmentID to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by SegmentID
           */
         virtual void setSegmentID(const uci::type::EstimationStartingSegmentID_Type& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         EstimationStartType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The EstimationStartType to copy from
           */
         EstimationStartType(const EstimationStartType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this EstimationStartType to the contents of the EstimationStartType on
           * the right hand side (rhs) of the assignment operator.EstimationStartType [only available to derived classes]
           *
           * @param rhs The EstimationStartType on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::EstimationStartType
           * @return A constant reference to this EstimationStartType.
           */
         const EstimationStartType& operator=(const EstimationStartType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // EstimationStartType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__EstimationStartType_h

