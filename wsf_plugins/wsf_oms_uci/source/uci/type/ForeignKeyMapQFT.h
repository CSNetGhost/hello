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
#ifndef Uci__Type__ForeignKeyMapQFT_h
#define Uci__Type__ForeignKeyMapQFT_h 1

#if !defined(Uci__Type__QueryFilterPET_h)
# include "uci/type/QueryFilterPET.h"
#endif

#if !defined(Uci__Type__ForeignKeyMapID_Type_h)
# include "uci/type/ForeignKeyMapID_Type.h"
#endif

#if !defined(Uci__Type__ForeignKeyType_h)
# include "uci/type/ForeignKeyType.h"
#endif

#if !defined(Uci__Type__ID_Type_h)
# include "uci/type/ID_Type.h"
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** This is the ForeignKeyMapQFT sequence accessor class */
      class ForeignKeyMapQFT : public virtual uci::type::QueryFilterPET {
      public:

         /** The destructor */
         virtual ~ForeignKeyMapQFT()
         { }

         /** Returns this accessor's type constant, i.e. ForeignKeyMapQFT
           *
           * @return This accessor's type constant, i.e. ForeignKeyMapQFT
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::foreignKeyMapQFT;
         }


         /** Initializes the contents of this accessor by copying the contents of the specified accessor
           *
           * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor
           */
         virtual void copy(const ForeignKeyMapQFT& accessor)
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ForeignKeyMapID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ForeignKeyMapID.
           */
         virtual const uci::type::ForeignKeyMapID_Type& getForeignKeyMapID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ForeignKeyMapID.
           *
           * @return The acecssor that provides access to the complex content that is identified by ForeignKeyMapID.
           */
         virtual uci::type::ForeignKeyMapID_Type& getForeignKeyMapID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ForeignKeyMapID to the contents of the complex content that is
           * accessed by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ForeignKeyMapID
           */
         virtual void setForeignKeyMapID(const uci::type::ForeignKeyMapID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by ForeignKeyMapID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by ForeignKeyMapID is emabled or not
           */
         virtual bool hasForeignKeyMapID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by ForeignKeyMapID
           *
           * @param type = uci::type::accessorType::foreignKeyMapID_Type This Accessor's accessor type
           */
         virtual void enableForeignKeyMapID(uci::base::accessorType::AccessorType type = uci::type::accessorType::foreignKeyMapID_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by ForeignKeyMapID */
         virtual void clearForeignKeyMapID()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ForeignKey.
           *
           * @return The acecssor that provides access to the complex content that is identified by ForeignKey.
           */
         virtual const uci::type::ForeignKeyType& getForeignKey() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the ForeignKey.
           *
           * @return The acecssor that provides access to the complex content that is identified by ForeignKey.
           */
         virtual uci::type::ForeignKeyType& getForeignKey()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the ForeignKey to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by ForeignKey
           */
         virtual void setForeignKey(const uci::type::ForeignKeyType& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by ForeignKey exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by ForeignKey is emabled or not
           */
         virtual bool hasForeignKey() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by ForeignKey
           *
           * @param type = uci::type::accessorType::foreignKeyType This Accessor's accessor type
           */
         virtual void enableForeignKey(uci::base::accessorType::AccessorType type = uci::type::accessorType::foreignKeyType)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by ForeignKey */
         virtual void clearForeignKey()
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NativeID.
           *
           * @return The acecssor that provides access to the complex content that is identified by NativeID.
           */
         virtual const uci::type::ID_Type& getNativeID() const
            throw(uci::base::UCIException) = 0;


         /** Returns the accessor that provides access to the complex content that is identified by the NativeID.
           *
           * @return The acecssor that provides access to the complex content that is identified by NativeID.
           */
         virtual uci::type::ID_Type& getNativeID()
            throw(uci::base::UCIException) = 0;


         /** Sets the complex content that is identified by the NativeID to the contents of the complex content that is accessed
           * by the specified accessor.
           *
           * @param value The accessor that provides access to the sequence whose contents are to be used to set the contents of
           *      the sequence identified by NativeID
           */
         virtual void setNativeID(const uci::type::ID_Type& value)
            throw(uci::base::UCIException) = 0;


         /** Returns whether the Element that is identified by NativeID exists (is enabled) or not.
           *
           * @return A boolean indicating whether the Element identified by NativeID is emabled or not
           */
         virtual bool hasNativeID() const
            throw(uci::base::UCIException) = 0;


         /** Enables the Element that is identified by NativeID
           *
           * @param type = uci::type::accessorType::iD_Type This Accessor's accessor type
           */
         virtual void enableNativeID(uci::base::accessorType::AccessorType type = uci::type::accessorType::iD_Type)
            throw(uci::base::UCIException) = 0;


         /** Clears (disabled) the Element that is identified by NativeID */
         virtual void clearNativeID()
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         ForeignKeyMapQFT()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The ForeignKeyMapQFT to copy from
           */
         ForeignKeyMapQFT(const ForeignKeyMapQFT& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this ForeignKeyMapQFT to the contents of the ForeignKeyMapQFT on the
           * right hand side (rhs) of the assignment operator.ForeignKeyMapQFT [only available to derived classes]
           *
           * @param rhs The ForeignKeyMapQFT on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::type::ForeignKeyMapQFT
           * @return A constant reference to this ForeignKeyMapQFT.
           */
         const ForeignKeyMapQFT& operator=(const ForeignKeyMapQFT& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // ForeignKeyMapQFT


   } // Namespace: type
} // Namespace: uci

#endif // Uci__Type__ForeignKeyMapQFT_h

