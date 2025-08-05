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
#ifndef Uci__Type__POST_ComponentStatusFocalPlaneArrayOpticalBandType_h
#define Uci__Type__POST_ComponentStatusFocalPlaneArrayOpticalBandType_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__DoubleMinMaxType_h)
# include "uci/type/DoubleMinMaxType.h"
#endif

#if !defined(Uci__Base__BooleanAccessor_h)
# include "uci/base/BooleanAccessor.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the POST_ComponentStatusFocalPlaneArrayOpticalBandType sequence accessor class */
      class POST_ComponentStatusFocalPlaneArrayOpticalBandType : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~POST_ComponentStatusFocalPlaneArrayOpticalBandType()
         { }

         /** Returns this accessor's type constant, i.e. POST_ComponentStatusFocalPlaneArrayOpticalBandType
           *
           * @return This accessor's type constant, i.e. POST_ComponentStatusFocalPlaneArrayOpticalBandType
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::pOST_ComponentStatusFocalPlaneArrayOpticalBandType;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const POST_ComponentStatusFocalPlaneArrayOpticalBandType& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the BandSetting.
           *
           * @return The acecssor that provides access to the complex content that is identified by BandSetting.
           */
         virtual const uci::type::DoubleMinMaxType& getBandSetting() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the BandSetting.
           *
           * @return The acecssor that provides access to the complex content that is identified by BandSetting.
           */
         virtual uci::type::DoubleMinMaxType& getBandSetting()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the BandSetting to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by BandSetting
           */
         virtual void setBandSetting(const uci::type::DoubleMinMaxType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the SimplePrimitive data type that is identified by the AutoBand.
           *
           * @return The value of the simple primitive data type identified by AutoBand.
           */
         virtual xs::Boolean getAutoBand() const
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the SimplePrimitive data type that is identified by the AutoBand.
           *
           * @param value The value to set the SimplePrimitve data type to
           */
         virtual void setAutoBand(xs::Boolean value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by AutoBand exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by AutoBand is emabled or not
           */
         virtual bool hasAutoBand() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by AutoBand
           *
           * @param type = uci::base::accessorType::booleanAccessor This Accessor's accessor type
           */
         virtual void enableAutoBand(uci::base::accessorType::AccessorType type = uci::base::accessorType::booleanAccessor)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by AutoBand */
         virtual void clearAutoBand()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         POST_ComponentStatusFocalPlaneArrayOpticalBandType()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The POST_ComponentStatusFocalPlaneArrayOpticalBandType to copy from
           */
         POST_ComponentStatusFocalPlaneArrayOpticalBandType(const POST_ComponentStatusFocalPlaneArrayOpticalBandType& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this POST_ComponentStatusFocalPlaneArrayOpticalBandType to the contents
           * of the POST_ComponentStatusFocalPlaneArrayOpticalBandType on the right hand side (rhs) of the assignment
           * operator.POST_ComponentStatusFocalPlaneArrayOpticalBandType [only available to derived classes]
           *
           * @param rhs The POST_ComponentStatusFocalPlaneArrayOpticalBandType on the right hand side (rhs) of the assignment
           *      operator whose contents are used to set the contents of this
           *      uci::type::POST_ComponentStatusFocalPlaneArrayOpticalBandType
           * @return A constant reference to this POST_ComponentStatusFocalPlaneArrayOpticalBandType.
           */
         const POST_ComponentStatusFocalPlaneArrayOpticalBandType& operator=(const POST_ComponentStatusFocalPlaneArrayOpticalBandType& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // POST_ComponentStatusFocalPlaneArrayOpticalBandType


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__POST_ComponentStatusFocalPlaneArrayOpticalBandType_h

