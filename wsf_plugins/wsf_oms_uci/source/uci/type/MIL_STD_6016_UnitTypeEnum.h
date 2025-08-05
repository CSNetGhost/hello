// This file was generated  on 10/18/2017 at 5:35:48 AM by the Boeing OMS CAL generation tools
// @warning  This file was automatically generated, edit at your own risk

/**
* Unclassified               U N C L A S S I F I E D               Unclassified
*
* DEVELOPMENT:
*    This document wholly developed with USG funds.
*    For additional information, contact the AFRCO.
*
* DISTRIBUTION STATEMENT D.  Distribution authorized to the Department 
*    of Defense and U.S. DoD contractors only; Critical Technology; 26 Mar 13.
*    Other requests shall be referred to the Air Force Rapid Capabilities 
*    Office, 202-404-5497 or 202-404-5498.
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
#ifndef Uci__Type__MIL_STD_6016_UnitTypeEnum_h
#define Uci__Type__MIL_STD_6016_UnitTypeEnum_h 1

#if !defined(Uci__Base__Accessor_h)
# include "uci/base/Accessor.h"
#endif

#if !defined(StdLibMap)
#  include <map>
//  @cond
#  define StdLibMap 1
//  @endcond
#endif

#if !defined(StdLibSstream)
#  include <sstream>
//  @cond
#  define StdLibSstream 1
//  @endcond
#endif

//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all generated data types are declared
   namespace type {

      /** Defines the basic unit type of an entity */
      class MIL_STD_6016_UnitTypeEnum : public virtual uci::base::Accessor {
      public:

         //  The following are the enumerated items that comprise this enumeration
         enum EnumerationItem {
            //  Enumerated item that indicates that the enumeration has not been set
            enumNotSet,
            //  UCI_NO_STATEMENT's ordinal value */
            UCI_NO_STATEMENT,

            //  UCI_AIRCRAFT_CARRIER's ordinal value */
            UCI_AIRCRAFT_CARRIER,

            //  UCI_CRUISER's ordinal value */
            UCI_CRUISER,

            //  UCI_DESTROYER_AAW's ordinal value */
            UCI_DESTROYER_AAW,

            //  UCI_DESTROYER_ASW's ordinal value */
            UCI_DESTROYER_ASW,

            //  UCI_DESTROYER_GENERAL's ordinal value */
            UCI_DESTROYER_GENERAL,

            //  UCI_FAST_PATROL_BOAT's ordinal value */
            UCI_FAST_PATROL_BOAT,

            //  UCI_LHA_LHD's ordinal value */
            UCI_LHA_LHD,

            //  UCI_AMPHIBIOUS_COMMAND_SHIP's ordinal value */
            UCI_AMPHIBIOUS_COMMAND_SHIP,

            //  UCI_FRIGATE's ordinal value */
            UCI_FRIGATE,

            //  UCI_MINE_WARFARE_VESSEL's ordinal value */
            UCI_MINE_WARFARE_VESSEL,

            //  UCI_AUXILIARY's ordinal value */
            UCI_AUXILIARY,

            //  UCI_TAOC's ordinal value */
            UCI_TAOC,

            //  UCI_TACC's ordinal value */
            UCI_TACC,

            //  UCI_TOC_JMAST's ordinal value */
            UCI_TOC_JMAST,

            //  UCI_BUFFER_CENTER's ordinal value */
            UCI_BUFFER_CENTER,

            //  UCI_CRC's ordinal value */
            UCI_CRC,

            //  UCI_CRP's ordinal value */
            UCI_CRP,

            //  UCI_NCC's ordinal value */
            UCI_NCC,

            //  UCI_RCC's ordinal value */
            UCI_RCC,

            //  UCI_DC's ordinal value */
            UCI_DC,

            //  UCI_AADCP's ordinal value */
            UCI_AADCP,

            //  UCI_COASTAL_RADAR_STATION's ordinal value */
            UCI_COASTAL_RADAR_STATION,

            //  UCI_COMMAND_AND_CONTROL's ordinal value */
            UCI_COMMAND_AND_CONTROL,

            //  UCI_SURVEILLANCE_SITE's ordinal value */
            UCI_SURVEILLANCE_SITE,

            //  UCI_PATROL_AIRCRAFT's ordinal value */
            UCI_PATROL_AIRCRAFT,

            //  UCI_ASW_AIRCRAFT's ordinal value */
            UCI_ASW_AIRCRAFT,

            //  UCI_AEW's ordinal value */
            UCI_AEW,

            //  UCI_ATDS's ordinal value */
            UCI_ATDS,

            //  UCI_AWACS's ordinal value */
            UCI_AWACS,

            //  UCI_HELICOPTER's ordinal value */
            UCI_HELICOPTER,

            //  Enumerated item that indicates maximum enumerated item exclusive of this item
            enumMaxExclusive
         };


         /** The destructor */
         virtual ~MIL_STD_6016_UnitTypeEnum()
         { }

         /** Returns this accessor's type constant, i.e. mIL_STD_6016_UnitTypeEnum
           *
           * @return This accessor's type constant, i.e. mIL_STD_6016_UnitTypeEnum
           */
         virtual uci::base::accessorType::AccessorType getAccessorType() const
            throw()
         {
            return uci::type::accessorType::mIL_STD_6016_UnitTypeEnum;
         }


         /** The assignment operator. Sets the contents of this MIL_STD_6016_UnitTypeEnum to the contents of the
           * MIL_STD_6016_UnitTypeEnum on the right hand side (rhs) of the assignment operator.MIL_STD_6016_UnitTypeEnum
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this MIL_STD_6016_UnitTypeEnum
           * @return A constant reference to this MIL_STD_6016_UnitTypeEnum.
           */
         const MIL_STD_6016_UnitTypeEnum& operator=(const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            setValue(rhs.getValue());
            return *this;
         }


         /** The assignment operator. Sets the value of this MIL_STD_6016_UnitTypeEnum enumeration to the EnumerationItem on the
           * right hand side of the assignment operator.
           *
           * @param rhs The EnumerationItemwhose value is to be assigned to this MIL_STD_6016_UnitTypeEnum enumeration
           * @return A reference to this MIL_STD_6016_UnitTypeEnum enumeration
           */
         const MIL_STD_6016_UnitTypeEnum& operator=(EnumerationItem rhs)
         {
            setValue(rhs);
            return *this;
         }


         /** Sets the value of this MIL_STD_6016_UnitTypeEnum enumeration to the value of the specified enumeration item.
           *
           * @param item The EnumerationItemwhose value is to be used to set the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration
           */
         virtual void setValue(EnumerationItem item)
            throw(uci::base::UCIException) = 0;


         /** Returns the value of this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param testForValidity=true Specifies whether this MIL_STD_6016_UnitTypeEnum enumeration should be validated (true)
           *      or not (false) as part of retrieving its value.
           * @return The value of this MIL_STD_6016_UnitTypeEnum enumeration.
           */
         virtual EnumerationItem getValue(bool testForValidity=true) const
            throw(uci::base::UCIException) = 0;


         /** Returns the number of items in this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @return The number of items in this MIL_STD_6016_UnitTypeEnum enumeration.
           */
         int getNumberOfItems() const
         {
            return 31;
         }


         /** Returns whether this MIL_STD_6016_UnitTypeEnum enumeration is valid or not. A MIL_STD_6016_UnitTypeEnum enumeration
           * is valid if its value is one of the enumeration items other than enumNotSet and enumMaxExclusive.
           *
           * @return A flag indicating whether this MIL_STD_6016_UnitTypeEnum enumeration is valid (true) or not (false).
           */
         virtual bool isValid() const
         {
            return isValid(getValue(false));
         }


         /** Returns whether the specified enumeration item is valid or not. A enumeration item is valid if its value is one of
           * the enumeration items other than enumNotSet and enumMaxExclusive.
           *
           * @param item The EnumerationItem to test
           * @return A flag indicating whether the specified EnumerationItem is valid (true) or not (false).
           */
         static bool isValid(EnumerationItem item)
         {
            return (item > enumNotSet) && (item < enumMaxExclusive);
         }


         /** Returns whether the specified name item is valid or not. A name is valid if it is the name of one of the enumeration
           * items other than enumNotSet and enumMaxExclusive.
           *
           * @param name The name to test
           * @return A flag indicating whether the specified name is valid (true) or not (false).
           */
         static bool isValid(const std::string& name)
            throw(uci::base::UCIException)
         {
            initializeTables();
            FromNameTable::const_iterator iter = m_fromNameTable.find(name);
            return !(iter == m_fromNameTable.end());
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the == operator is
           * equal to the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is equal to the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator==(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() == rhs.getValue();
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the != operator is not
           * equal to the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is not equal to the value of
           *      this MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator!=(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() != rhs.getValue();
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the < operator is less
           * than the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is less than the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator<(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() < rhs.getValue();
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the <= operator is
           * less than or equal to the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is less than or equal to the
           *      value of this MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator<=(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() <= rhs.getValue();
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the > operator is
           * greater than the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is greater than the value of
           *      this MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator>(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() > rhs.getValue();
         }


         /** Tests whether the value of the MIL_STD_6016_UnitTypeEnum enumeration on the right hand side of the >= operator is
           * greater than or equal to the value as this MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @return True if the value of the specified MIL_STD_6016_UnitTypeEnum enumeration (rhs) is greater than or equal to
           *      the value of this MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator>=(const MIL_STD_6016_UnitTypeEnum& rhs) const
            throw(uci::base::UCIException)
         {
            return getValue() >= rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is equal to the value of the specified
           * EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is equal to the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration, false otherwise
           */
         bool operator==(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() == rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is equal to the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is equal to the value of the MIL_STD_6016_UnitTypeEnum
           *      enumeration (rhs), false otherwise
           */
         friend bool operator==(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs == rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is not equal to the value of the specified
           * EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is not equal to the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration, false otherwise
           */
         bool operator!=(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() != rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is not equal to the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is not equal to the value of the MIL_STD_6016_UnitTypeEnum
           *      enumeration (rhs), false otherwise
           */
         friend bool operator!=(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs != rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is less than the value of the specified
           * EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is less than the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration, false otherwise
           */
         bool operator<(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() < rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is less than the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is less than the value of the MIL_STD_6016_UnitTypeEnum
           *      enumeration (rhs), false otherwise
           */
         friend bool operator<(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs < rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is less than or equal to the value of the
           * specified EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is less than or equal to the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator<=(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() <= rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is less than or equal to the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is less than or equal to the value of the
           *      MIL_STD_6016_UnitTypeEnum enumeration (rhs), false otherwise
           */
         friend bool operator<=(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs <= rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is greater than the value of the specified
           * EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is greater than the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration, false otherwise
           */
         bool operator>(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() > rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is greater than the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is greater than the value of the MIL_STD_6016_UnitTypeEnum
           *      enumeration (rhs), false otherwise
           */
         friend bool operator>(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs > rhs.getValue();
         }


         /** Tests whether the value of this MIL_STD_6016_UnitTypeEnum enumeration is greater than or equal to the value of the
           * specified EnumerationItem.
           *
           * @param rhs The EnumerationItem whose value is to be compared against the value of this MIL_STD_6016_UnitTypeEnum
           *      enumeration.
           * @return True if the value of the EnumerationItem(rhs) is greater than or equal to the value of this
           *      MIL_STD_6016_UnitTypeEnum enumeration, false otherwise
           */
         bool operator>=(EnumerationItem rhs) const
            throw(uci::base::UCIException)
         {
            testForValidItem(rhs);
            return getValue() >= rhs;
         }


         /** Tests whether the value of the specified EnumerationItem is greater than or equal to the value of the specified
           * MIL_STD_6016_UnitTypeEnum enumeration.
           *
           * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
           *      MIL_STD_6016_UnitTypeEnum enumeration.
           * @param rhs The MIL_STD_6016_UnitTypeEnum enumeration whose value is to be compared against the value of the specified
           *      EnumerationItem
           * @return True if the value of the EnumerationItem(lhs) is greater than or equal to the value of the
           *      MIL_STD_6016_UnitTypeEnum enumeration (rhs), false otherwise
           */
         friend bool operator>=(EnumerationItem lhs, const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            testForValidItem(lhs);
            return lhs >= rhs.getValue();
         }


         /** Returns the name of the specified enumeration item.
           *
           * @param item The enumeration item whose name is to be returned.
           * @return The enumeration item's name if valid
           */
         static const std::string& toName(EnumerationItem item)
            throw(uci::base::UCIException)
         {
            initializeTables();

            ToNameTable::const_iterator iter = m_toNameTable.find(item);
            if (iter == m_toNameTable.end()) {
               std::ostringstream oStream;
               oStream << "Failed to convert enumerated item to its name, item not found in mapping: " << item;
               throw uci::base::UCIException(oStream.str(), 0);
            }

            return iter->second;
         }


         /** Returns the enumeration item having the specified name.
           *
           * @param itemName The name of the enumeration item to be returned.
           * @return The enumeration item having the specified name
           */
         static EnumerationItem fromName(const std::string& itemName)
            throw(uci::base::UCIException)
         {
            initializeTables();

            FromNameTable::const_iterator iter = m_fromNameTable.find(itemName);
            if (iter == m_fromNameTable.end()) {
               std::ostringstream oStream;
               oStream << "Failed to return enumerated item having specified name, name not found in mapping: " << itemName;
               throw uci::base::UCIException(oStream.str(), 0);
            }

            return iter->second;
         }


         /** Return the name of the enumeration item that the value of this MIL_STD_6016_UnitTypeEnum enumeration is set to.
           *
           * @return The name of the enumeration item.
           */
         virtual const std::string& toName() const
            throw(uci::base::UCIException)
         {
            return toName(getValue());
         }


         /** Sets the value of this MIL_STD_6016_UnitTypeEnum enumeration to the value of the enumeration item having the
           * specified name.
           *
           * @param itemName The name of the enumeration item whose value is to be used to set this MIL_STD_6016_UnitTypeEnum
           *      enumeration to
           */
         virtual void setValueFromName(const std::string& itemName)
            throw(uci::base::UCIException)
         {
            setValue(fromName(itemName));
         }



      protected:

         /** The default constructor. In addition to constructing a new MIL_STD_6016_UnitTypeEnum, this constructor also makes
           * sure the conversion tables are initialized
           */
         MIL_STD_6016_UnitTypeEnum()
         {
            initializeTables();
         }


         /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
           *
           * @param additionalDescription An additional description to include in the error message should an exception be thrown
           * @param item The enumeration item to test
           */
         static void testForValidItem(const char* additionalDescription, EnumerationItem item)
            throw(uci::base::UCIException)
         {
            if (!isValid(item)) {
               std::ostringstream oStream;
               oStream << additionalDescription << ": " << item << " (item must be between " << enumNotSet << " and "<< enumMaxExclusive << " exclusive)";
               throw uci::base::UCIException(oStream.str(), 0);
            }

         }


         /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
           *
           * @param item The enumeration item to test
           */
         static void testForValidItem(EnumerationItem item)
            throw(uci::base::UCIException)
         {
            testForValidItem("Invalid enumerated item specified", item);
         }



      private:

         //  The type of table that is used to lookup the name of a enumeration item given that enumeration item.
         typedef std::map<EnumerationItem, const std::string> ToNameTable;

         //  The type of table that is used to lookup an enumeration item given its name.
         typedef std::map<const std::string, EnumerationItem> FromNameTable;

         //  The table that is used to lookup the name of a enumeration item given that enumeration item.
         static ToNameTable m_toNameTable;

         //  The type of table that is used to lookup an enumeration item given its name.
         static FromNameTable m_fromNameTable;

         //  Indicates whether the tables has been initialized (true) or not (false).
         static bool m_tablesInitialized;

         //  Initializes the translation tables
         static void initializeTables();


      protected:

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The MIL_STD_6016_UnitTypeEnum to copy from
           */
         MIL_STD_6016_UnitTypeEnum(const MIL_STD_6016_UnitTypeEnum& rhs)
         {
            (void)rhs;
         }

      }; // MIL_STD_6016_UnitTypeEnum


   } // Namespace: type
} // Namespace: uci
template<typename charT, typename traits>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& oStream, const uci::type::MIL_STD_6016_UnitTypeEnum& enumeration)
{
   oStream << enumeration.toName();
   return oStream;
}

#endif // Uci__Type__MIL_STD_6016_UnitTypeEnum_h

