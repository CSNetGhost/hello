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
#ifndef Uci__Type__CargoStatusMDT_h
#define Uci__Type__CargoStatusMDT_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__CargoID_Type_h)
# include "uci/type/CargoID_Type.h"
#endif

#if !defined(Uci__Type__CargoType_h)
# include "uci/type/CargoType.h"
#endif

#if !defined(Uci__Type__CargoLocationType_h)
# include "uci/type/CargoLocationType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the CargoStatusMDT sequence accessor class */
      class CargoStatusMDT : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~CargoStatusMDT()
         { }

         /** Returns this accessor's type constant, i.e. CargoStatusMDT
           *
           * @return This accessor's type constant, i.e. CargoStatusMDT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::cargoStatusMDT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const CargoStatusMDT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoID.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoID.
           */
         virtual const uci::type::CargoID_Type& getCargoID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoID.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoID.
           */
         virtual uci::type::CargoID_Type& getCargoID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CargoID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CargoID
           */
         virtual void setCargoID(const uci::type::CargoID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoType.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoType.
           */
         virtual const uci::type::CargoType& getCargoType() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoType.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoType.
           */
         virtual uci::type::CargoType& getCargoType()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CargoType to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CargoType
           */
         virtual void setCargoType(const uci::type::CargoType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoLocation.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoLocation.
           */
         virtual const uci::type::CargoLocationType& getCargoLocation() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the CargoLocation.
           *
           * @return The acecssor that provides access to the complex content that is identified by CargoLocation.
           */
         virtual uci::type::CargoLocationType& getCargoLocation()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the CargoLocation to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by CargoLocation
           */
         virtual void setCargoLocation(const uci::type::CargoLocationType& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         CargoStatusMDT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The CargoStatusMDT to copy from
           */
         CargoStatusMDT(const CargoStatusMDT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this CargoStatusMDT to the contents of the CargoStatusMDT on the right
           * hand side (rhs) of the assignment operator.CargoStatusMDT [only available to derived classes]
           *
           * @param rhs The CargoStatusMDT on the right hand side (rhs) of the assignment operator whose contents are used to set
           *      the contents of this uci::type::CargoStatusMDT
           * @return A constant reference to this CargoStatusMDT.
           */
         const CargoStatusMDT& operator=(const CargoStatusMDT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // CargoStatusMDT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__CargoStatusMDT_h

