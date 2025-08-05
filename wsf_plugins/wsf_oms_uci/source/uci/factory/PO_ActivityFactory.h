// This file was generated  on 12/5/2018 at 1:1:51 PM by the Boeing OMS CAL generation tools
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
#ifndef Uci__Factory__PO_ActivityFactory_h
#define Uci__Factory__PO_ActivityFactory_h 1

#if !defined(Uci__Base__AbstractServiceBusConnection_h)
# include "uci/base/AbstractServiceBusConnection.h"
#endif

#if !defined(Uci__Base__Factory_h)
# include "uci/base/Factory.h"
#endif

#if !defined(Uci__Type__PO_Activity_h)
# include "uci/type/PO_Activity.h"
#endif

#if !defined(Uci__Reader__PO_ActivityReader_h)
# include "uci/reader/PO_ActivityReader.h"
#endif

#if !defined(Uci__Writer__PO_ActivityWriter_h)
# include "uci/writer/PO_ActivityWriter.h"
#endif



//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      class PO_ActivityFactory;
   } // Namespace: factory
} // Namespace: uci


#ifdef __cplusplus
extern "C" {
#endif

//  Creates a new PO_ActivityFactory
//  
//   @returns The newly created factory
//  
UCI_EXPORT uci::factory::PO_ActivityFactory* uci_getPO_ActivityFactory(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) throw(uci::base::UCIException);


//   Destroys a PO_ActivityFactory
//  
//   @param factory The factory to be destroyed.
//  
UCI_EXPORT void uci_destroyPO_ActivityFactory(uci::factory::PO_ActivityFactory* factory) throw(uci::base::UCIException);


#ifdef __cplusplus
}
#endif


//  The namespace in which all UAS C2 Initiative data types are declared
namespace uci {

   //  The namespace in which all factories are declared
   namespace factory {

      /** The Factory provides the support to create and destroy messages as well as to create readers that can read these
        * messages and writers that can write these messages
        */
      class PO_ActivityFactory : public virtual uci::base::Factory {
      public:

         /** The destructor */
         virtual ~PO_ActivityFactory()
         { }

         typedef  uci::factory::PO_ActivityFactory FactoryType;
         typedef  uci::type::PO_ActivityMT MessageType;
         typedef  uci::reader::PO_ActivityReader ReaderType;
         typedef  uci::reader::PO_ActivityListener ListenerType;
         typedef  uci::writer::PO_ActivityWriter WriterType;

         static UCI_EXPORT uci::factory::PO_ActivityFactory* getFactory( uci::base::AbstractServiceBusConnection* abstractServiceBusConnection )
         {
            return uci_getPO_ActivityFactory( abstractServiceBusConnection );
         }

         static UCI_EXPORT void destroyFactory( uci::factory::PO_ActivityFactory* factory )
         {
            uci_destroyPO_ActivityFactory( factory );
         }

         /** This method constructs a new PO_ActivityMT message, returning an accessor to that message that can be used to access
           * that message.
           *
           * @return A message accessor that can be used to access the newly created PO_ActivityMT message
           */
         virtual uci::type::PO_Activity& create()
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new PO_ActivityMT message, returning an accessor to that message that can be used to access
           * that message.
           *
           * @param accessor A message accessor that provides access to the message that is to be used to initialize the new
           *      message (basically cloned)
           * @return A message accessor that can be used to access the newly created PO_ActivityMT message
           */
         virtual uci::type::PO_Activity& create(const uci::type::PO_Activity& accessor)
            throw(uci::base::UCIException) = 0;


         /** This method destroys a PO_ActivityMT message accessor, along with the message that the accessor was providing access
           * to, that was created using the createMessage() method
           *
           * @param accessor A message accessor returned by the constructMessage() method.
           */
         virtual void destroy(uci::type::PO_Activity& accessor)
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new PO_ActivityReader that can be used to read PO_ActivityMT messages.
           *
           * @param topic The specification of the topic the message is to be read from
           * @return A message accessor that can be used to access the newly created PO_ActivityMT message
           */
         virtual uci::reader::PO_ActivityReader& createReader(const std::string& topic)
            throw(uci::base::UCIException) = 0;


         /** This method destroys a PO_ActivityReader that was created during the invocation of the createReader() method. Once
           * the reader is destroyed, it should never be used again.
           *
           * @param reader A reference to the reader to be destroyed. Once destroyed, the reference should never be used again
           */
         virtual void destroyReader(uci::reader::PO_ActivityReader& reader)
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new PO_ActivityWriter that can be used to write PO_ActivityMT messages.
           *
           * @param topic The specification of the topict the message is to be written to
           * @return A message accessor that can be used to access the newly created PO_ActivityMT message
           */
         virtual uci::writer::PO_ActivityWriter& createWriter(const std::string& topic)
            throw(uci::base::UCIException) = 0;


         /** This method destroys a PO_ActivityWriter that was created during the invocation of the createWriter() method. Once
           * the writer is destroyed, it should never be used again.
           *
           * @param writer A reference to the writer to be destroyed. Once destroyed, the reference should never be used again
           */
         virtual void destroyWriter(uci::writer::PO_ActivityWriter& writer)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         PO_ActivityFactory()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The PO_ActivityFactory to copy from
           */
         PO_ActivityFactory(const PO_ActivityFactory& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this PO_ActivityFactory to the contents of the PO_ActivityFactory on
           * the right hand side (rhs) of the assignment operator.PO_ActivityFactory [only available to derived classes]
           *
           * @param rhs The PO_ActivityFactory on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this uci::factory::PO_ActivityFactory
           * @return A constant reference to this PO_ActivityFactory.
           */
         const PO_ActivityFactory& operator=(const PO_ActivityFactory& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // PO_ActivityFactory


   } // Namespace: factory
} // Namespace: uci

#endif // Uci__Factory__PO_ActivityFactory_h

