// This file was generated  on 12/5/2018 at 1:1:47 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Type__PositionLocationUncertaintyType_h
#define Uci__Type__PositionLocationUncertaintyType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__Point3D_Type_h)
# include "uci/type/Point3D_Type.h"
#endif

#if !defined(Uci__Type__UncertaintyType_h)
# include "uci/type/UncertaintyType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the PositionLocationUncertaintyType sequence accessor class */
      class PositionLocationUncertaintyType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~PositionLocationUncertaintyType()
         { }

         /** Returns this accessor's type constant, i.e. PositionLocationUncertaintyType
           *
           * @return This accessor's type constant, i.e. PositionLocationUncertaintyType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::positionLocationUncertaintyType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const PositionLocationUncertaintyType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Location.
           *
           * @return The acecssor that provides access to the complex content that is identified by Location.
           */
         virtual const uci::type::Point3D_Type& getLocation() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Location.
           *
           * @return The acecssor that provides access to the complex content that is identified by Location.
           */
         virtual uci::type::Point3D_Type& getLocation()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Location to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Location
           */
         virtual void setLocation(const uci::type::Point3D_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Uncertainty.
           *
           * @return The acecssor that provides access to the complex content that is identified by Uncertainty.
           */
         virtual const uci::type::UncertaintyType& getUncertainty() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the Uncertainty.
           *
           * @return The acecssor that provides access to the complex content that is identified by Uncertainty.
           */
         virtual uci::type::UncertaintyType& getUncertainty()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the Uncertainty to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by Uncertainty
           */
         virtual void setUncertainty(const uci::type::UncertaintyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by Uncertainty exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by Uncertainty is emabled or not
           */
         virtual bool hasUncertainty() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by Uncertainty
           *
           * @param type = uci::type::accessorType::uncertaintyType This Accessor's accessor type
           */
         virtual void enableUncertainty(uci::base::accessorType::AccessorType type = uci::type::accessorType::uncertaintyType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by Uncertainty */
         virtual void clearUncertainty()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         PositionLocationUncertaintyType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The PositionLocationUncertaintyType to copy from
           */
         PositionLocationUncertaintyType(const PositionLocationUncertaintyType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this PositionLocationUncertaintyType to the contents of the
           * PositionLocationUncertaintyType on the right hand side (rhs) of the assignment
           * operator.PositionLocationUncertaintyType [only available to derived classes]
           *
           * @param rhs The PositionLocationUncertaintyType on the right hand side (rhs) of the assignment operator whose contents
           *      are used to set the contents of this uci::type::PositionLocationUncertaintyType
           * @return A constant reference to this PositionLocationUncertaintyType.
           */
         const PositionLocationUncertaintyType& operator=(const PositionLocationUncertaintyType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // PositionLocationUncertaintyType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__PositionLocationUncertaintyType_h

