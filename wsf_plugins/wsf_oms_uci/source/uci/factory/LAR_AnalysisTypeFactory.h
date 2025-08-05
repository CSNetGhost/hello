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
#ifndef Uci__Factory__LAR_AnalysisTypeFactory_h
#define Uci__Factory__LAR_AnalysisTypeFactory_h 1

#if !defined(Uci__Base__AbstractServiceBusConnection_h)
# include "uci/base/AbstractServiceBusConnection.h"
#endif

#if !defined(Uci__Base__Factory_h)
# include "uci/base/Factory.h"
#endif

#if !defined(Uci__Type__LAR_AnalysisType_h)
# include "uci/type/LAR_AnalysisType.h"
#endif


//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      class LAR_AnalysisTypeFactory;
   } // Namespace: factory
} // Namespace: uci


#ifdef __cplusplus
extern "C" {
#endif

//  Creates a new LAR_AnalysisTypeFactory
//  
//   @returns The newly created factory
//  
UCI_EXPORT uci::factory::LAR_AnalysisTypeFactory* uci_getLAR_AnalysisTypeFactory(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) throw(uci::base::UCIException);


//   Destroys a LAR_AnalysisTypeFactory
//  
//   @param factory The factory to be destroyed.
//  
UCI_EXPORT void uci_destroyLAR_AnalysisTypeFactory(uci::factory::LAR_AnalysisTypeFactory* factory) throw(uci::base::UCIException);


#ifdef __cplusplus
}
#endif


//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      /** The Factory provides the support to create and destroy messages */
      class LAR_AnalysisTypeFactory : public virtual uci::base::Factory {
      public:

         /** The destructor */
         virtual ~LAR_AnalysisTypeFactory()
         { }



         //  Typedefs to support template programming in services
         typedef  uci::factory::LAR_AnalysisTypeFactory FactoryType;
         typedef  uci::type::LAR_AnalysisType ObjectType;

         //  Static method to construct a new SomeType object
         static UCI_EXPORT uci::factory::LAR_AnalysisTypeFactory* getFactory( uci::base::AbstractServiceBusConnection* abstractServiceBusConnection )
         {
            return uci_getLAR_AnalysisTypeFactory( abstractServiceBusConnection );
         }

         static UCI_EXPORT void destroyFactory( uci::factory::LAR_AnalysisTypeFactory* factory )
         {
            uci_destroyLAR_AnalysisTypeFactory( factory );
         }

         /** This method constructs a new LAR_AnalysisType message, returning an accessor to that message that can be used to
           * access that message.
           *
           * @return A message accessor that can be used to access the newly created LAR_AnalysisType message
           */
         virtual uci::type::LAR_AnalysisType& create()
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new LAR_AnalysisType message, returning an accessor to that message that can be used to
           * access that message.
           *
           * @param accessor A message accessor that provides access to the message that is to be used to initialize the new
           *      message (basically cloned)
           * @return A message accessor that can be used to access the newly created LAR_AnalysisType message
           */
         virtual uci::type::LAR_AnalysisType& create(const uci::type::LAR_AnalysisType& accessor)
            throw(uci::base::UCIException) = 0;


         /** This method destroys a LAR_AnalysisType message accessor, along with the message that the accessor was providing
           * access to, that was created using the createMessage() method
           *
           * @param accessor A message accessor returned by the constructMessage() method.
           */
         virtual void destroy(uci::type::LAR_AnalysisType& accessor)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         LAR_AnalysisTypeFactory()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The LAR_AnalysisTypeFactory to copy from
           */
         LAR_AnalysisTypeFactory(const LAR_AnalysisTypeFactory& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this LAR_AnalysisTypeFactory to the contents of the
           * LAR_AnalysisTypeFactory on the right hand side (rhs) of the assignment operator.LAR_AnalysisTypeFactory [only
           * available to derived classes]
           *
           * @param rhs The LAR_AnalysisTypeFactory on the right hand side (rhs) of the assignment operator whose contents are
           *      used to set the contents of this uci::factory::LAR_AnalysisTypeFactory
           * @return A constant reference to this LAR_AnalysisTypeFactory.
           */
         const LAR_AnalysisTypeFactory& operator=(const LAR_AnalysisTypeFactory& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // LAR_AnalysisTypeFactory


   } // Namespace: factory
} // Namespace: uci

#endif // Uci__Factory__LAR_AnalysisTypeFactory_h

