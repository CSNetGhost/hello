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
#ifndef Uci__Type__MDF_Type_h
#define Uci__Type__MDF_Type_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(Uci__Type__MDF_ID_Type_h)
# include "uci/type/MDF_ID_Type.h"
#endif

#if !defined(Uci__Type__MDF_StatusEnum_h)
# include "uci/type/MDF_StatusEnum.h"
#endif

#if !defined(Uci__Base__BoundedList_h)
# include "uci/base/BoundedList.h"
#endif

#if !defined(Uci__Type__MDF_SubCategoryType_h)
# include "uci/type/MDF_SubCategoryType.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Indicates a Mission Data File (MDF) and its status. A MDF is a collection of data, organized into files, that is used
        * to tailor, configure or otherwise affect the behavior of a Capability. MDFs can vary from mission to mission or even
        * by phases of a single mission. They are generally developed in pre-mission planning and are unique for each Subsystem
        * model. Their content is not standardized by UCI, but the mechanism for advertising their availability and activating
        * them is. Their content is abstracted by the UCI concept of Capability.
        */
      class MDF_Type : public virtual uci::base::Accessor {
      public:

         /** The destructor */
         virtual ~MDF_Type()
         { }

         /** Returns this accessor's type constant, i.e. MDF_Type
           *
           * @return This accessor's type constant, i.e. MDF_Type
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::mDF_Type;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const MDF_Type& accessor)
            throw(uci::base::UCIException) = 0;


         /** Indicates a subcategory of files that make up the MDF. When an MDF is "active", at most one file from each
           * subcategory can be active. The subcategory concept allows a variety of MDF structures across Capability types and
           * manufacturers. For an ESM Capability, example subcategories could be "scan files" and "emitter ID files". For an EA
           * Capability, an example is "jam files". This element is optional to support Capabilities or Subsystems whose MDF isn't
           * decomposed into individually selectable categories and files. [Minimum occurrences: 0] [Maximum occurrences:
           * 9223372036854775807]
           */
         typedef uci::base::BoundedList<uci::type::MDF_SubCategoryType, uci::type::accessorType::mDF_SubCategoryType> SubCategory;

         /** Returns the accessor that provides access to the complex content that is identified by the MDF_ID.
           *
           * @return The acecssor that provides access to the complex content that is identified by MDF_ID.
           */
         virtual const uci::type::MDF_ID_Type& getMDF_ID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the MDF_ID.
           *
           * @return The acecssor that provides access to the complex content that is identified by MDF_ID.
           */
         virtual uci::type::MDF_ID_Type& getMDF_ID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the MDF_ID to the contents of the complex content that is accessed by
           * the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by MDF_ID
           */
         virtual void setMDF_ID(const uci::type::MDF_ID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the MDF_Status.
           *
           * @return The value of the enumeration identified by MDF_Status.
           */
         virtual const uci::type::MDF_StatusEnum& getMDF_Status() const
            throw(uci::base::UCIException) = 0;


         /** Returns the value of the enumeration that is identified by the MDF_Status.
           *
           * @return The value of the enumeration identified by MDF_Status.
           */
         virtual uci::type::MDF_StatusEnum& getMDF_Status()
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the MDF_Status.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setMDF_Status(const uci::type::MDF_StatusEnum& value)
            throw(uci::base::UCIException) = 0;


         /** Sets the value of the enumeration that is identified by the MDF_Status.
           *
           * @param value The value to set the enumeration to
           */
         virtual void setMDF_Status(uci::type::MDF_StatusEnum::EnumerationItem value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether this optionalfield MDF_Statusis available
           *
           * @return Whether the optional field is available (true) or not (false).
           */
         virtual bool hasMDF_Status() const
            throw(uci::base::UCIException) = 0;


         /** Enables the optional field such that getMDF_Status will return the optional field and not throw an exception when
           * invoked.
           *
           * @param type = uci::type::accessorType::mDF_StatusEnum This Accessor's accessor type
           */
         virtual void enableMDF_Status(uci::base::accessorType::AccessorType type = uci::type::accessorType::mDF_StatusEnum)
            throw(uci::base::UCIException) = 0;


         /** Clears the optional item marking it as not being set. */
         virtual void clearMDF_Status()
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubCategory.
           *
           * @return The bounded list identified by SubCategory.
           */
         virtual const uci::type::MDF_Type::SubCategory& getSubCategory() const
            throw(uci::base::UCIException) = 0;


         /** Returns the bounded list that is identified by the SubCategory.
           *
           * @return The bounded list identified by SubCategory.
           */
         virtual uci::type::MDF_Type::SubCategory& getSubCategory()
            throw(uci::base::UCIException) = 0;


         /** Sets the bounded list that is identified by the SubCategory.
           *
           * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
           *      accessor
           */
         virtual void setSubCategory(const uci::type::MDF_Type::SubCategory& value)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         MDF_Type()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The MDF_Type to copy from
           */
         MDF_Type(const MDF_Type& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this MDF_Type to the contents of the MDF_Type on the right hand side
           * (rhs) of the assignment operator.MDF_Type [only available to derived classes]
           *
           * @param rhs The MDF_Type on the right hand side (rhs) of the assignment operator whose contents are used to set the
           *      contents of this uci::type::MDF_Type
           * @return A constant reference to this MDF_Type.
           */
         const MDF_Type& operator=(const MDF_Type& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // MDF_Type


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__MDF_Type_h

