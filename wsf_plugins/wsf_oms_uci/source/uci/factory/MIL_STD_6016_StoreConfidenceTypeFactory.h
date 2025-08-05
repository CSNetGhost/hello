// This file was generated  on 10/18/2017 at 5:35:34 AM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Factory__MIL_STD_6016_StoreConfidenceTypeFactory_h
#define Uci__Factory__MIL_STD_6016_StoreConfidenceTypeFactory_h 1

#if !defined(Uci__Base__AbstractServiceBusConnection_h)
# include "uci/base/AbstractServiceBusConnection.h"
#endif

#if !defined(Uci__Base__Factory_h)
# include "uci/base/Factory.h"
#endif

#if !defined(Uci__Type__MIL_STD_6016_StoreConfidenceType_h)
# include "uci/type/MIL_STD_6016_StoreConfidenceType.h"
#endif


//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      class MIL_STD_6016_StoreConfidenceTypeFactory;
   } // Namespace: factory
} // Namespace: uci


#ifdef __cplusplus
extern "C" {
#endif

//  Creates a new MIL_STD_6016_StoreConfidenceTypeFactory
//  
//   @returns The newly created factory
//  
UCI_EXPORT uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory* uci_getMIL_STD_6016_StoreConfidenceTypeFactory(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) throw(uci::base::UCIException);


//   Destroys a MIL_STD_6016_StoreConfidenceTypeFactory
//  
//   @param factory The factory to be destroyed.
//  
UCI_EXPORT void uci_destroyMIL_STD_6016_StoreConfidenceTypeFactory(uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory* factory) throw(uci::base::UCIException);


#ifdef __cplusplus
}
#endif


//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      /** The Factory provides the support to create and destroy messages */
      class MIL_STD_6016_StoreConfidenceTypeFactory : public virtual uci::base::Factory {
      public:

         /** The destructor */
         virtual ~MIL_STD_6016_StoreConfidenceTypeFactory()
         { }



         //  Typedefs to support template programming in services
         typedef  uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory FactoryType;
         typedef  uci::type::MIL_STD_6016_StoreConfidenceType ObjectType;

         //  Static method to construct a new SomeType object
         static UCI_EXPORT uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory* getFactory( uci::base::AbstractServiceBusConnection* abstractServiceBusConnection )
         {
            return uci_getMIL_STD_6016_StoreConfidenceTypeFactory( abstractServiceBusConnection );
         }

         static UCI_EXPORT void destroyFactory( uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory* factory )
         {
            uci_destroyMIL_STD_6016_StoreConfidenceTypeFactory( factory );
         }
         /** This method constructs a new MIL_STD_6016_StoreConfidenceType message, returning an accessor to that message that can
           * be used to access that message.
           *
           * @return A message accessor that can be used to access the newly created MIL_STD_6016_StoreConfidenceType message
           */
         virtual uci::type::MIL_STD_6016_StoreConfidenceType& create()
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new MIL_STD_6016_StoreConfidenceType message, returning an accessor to that message that can
           * be used to access that message.
           *
           * @param accessor A message accessor that provides access to the message that is to be used to initialize the new
           *      message (basically cloned)
           * @return A message accessor that can be used to access the newly created MIL_STD_6016_StoreConfidenceType message
           */
         virtual uci::type::MIL_STD_6016_StoreConfidenceType& create(const uci::type::MIL_STD_6016_StoreConfidenceType& accessor)
            throw(uci::base::UCIException) = 0;


         /** This method destroys a MIL_STD_6016_StoreConfidenceType message accessor, along with the message that the accessor
           * was providing access to, that was created using the createMessage() method
           *
           * @param accessor A message accessor returned by the constructMessage() method.
           */
         virtual void destroy(uci::type::MIL_STD_6016_StoreConfidenceType& accessor)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         MIL_STD_6016_StoreConfidenceTypeFactory()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The MIL_STD_6016_StoreConfidenceTypeFactory to copy from
           */
         MIL_STD_6016_StoreConfidenceTypeFactory(const MIL_STD_6016_StoreConfidenceTypeFactory& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this MIL_STD_6016_StoreConfidenceTypeFactory to the contents of the
           * MIL_STD_6016_StoreConfidenceTypeFactory on the right hand side (rhs) of the assignment
           * operator.MIL_STD_6016_StoreConfidenceTypeFactory [only available to derived classes]
           *
           * @param rhs The MIL_STD_6016_StoreConfidenceTypeFactory on the right hand side (rhs) of the assignment operator whose
           *      contents are used to set the contents of this uci::factory::MIL_STD_6016_StoreConfidenceTypeFactory
           * @return A constant reference to this MIL_STD_6016_StoreConfidenceTypeFactory.
           */
         const MIL_STD_6016_StoreConfidenceTypeFactory& operator=(const MIL_STD_6016_StoreConfidenceTypeFactory& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // MIL_STD_6016_StoreConfidenceTypeFactory


   } // Namespace: factory
} // Namespace: uci

#endif // Uci__Factory__MIL_STD_6016_StoreConfidenceTypeFactory_h

