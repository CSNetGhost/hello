// This file was generated  on 12/5/2018 at 1:1:44 PM by the Boeing OMS CAL generation tools
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
#ifndef Xs__Factory__Base64BinaryFactory_h
#define Xs__Factory__Base64BinaryFactory_h 1

#if !defined(Uci__Base__AbstractServiceBusConnection_h)
# include "uci/base/AbstractServiceBusConnection.h"
#endif

#if !defined(Uci__Base__Factory_h)
# include "uci/base/Factory.h"
#endif

#if !defined(Xs__Type__BinaryXmlSchemaPrimitives_h)
# include "xs/type/binaryXmlSchemaPrimitives.h"
#endif


//  The namespace in which all XML Schema Definition data types are declared
namespace xs {

   //  The namespace in which all factories are declared
   namespace factory {

      class Base64BinaryFactory;
   } // Namespace: factory
} // Namespace: xs

#ifdef __cplusplus
extern "C" {
#endif

//  Creates a new Base64BinaryFactoryFactory
//  
//   @returns The newly created factory
//  
UCI_EXPORT xs::factory::Base64BinaryFactory* xs_getBase64BinaryFactory(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) throw(uci::base::UCIException);


//   Destroys a Base64BinaryFactoryFactory
//  
//   @param factory The factory to be destroyed.
//  
UCI_EXPORT void xs_destroyBase64BinaryFactory(xs::factory::Base64BinaryFactory* factory) throw(uci::base::UCIException);


#ifdef __cplusplus
}
#endif


//  The namespace in which all XML Schema Definition data types are declared
namespace xs {

   //  The namespace in which all factories are declared
   namespace factory {

      /** The Factory provides the support to create and destroy Base64Binary. */
      class Base64BinaryFactory : public virtual uci::base::Factory {
      public:

         /** The destructor */
         virtual ~Base64BinaryFactory()
         { }

         typedef  xs::factory::Base64BinaryFactory FactoryType;
         typedef  xs::Base64Binary ObjectType;

         //  Static method to construct a new SomeType object
         static UCI_EXPORT xs::factory::Base64BinaryFactory* getFactory( uci::base::AbstractServiceBusConnection* abstractServiceBusConnection )
         {
            return xs_getBase64BinaryFactory( abstractServiceBusConnection );
         }

         //  Static method to destroy a SomeType object
         static UCI_EXPORT void destroyFactory( xs::factory::Base64BinaryFactory* factory )
         {
            xs_destroyBase64BinaryFactory( factory );
         }

         /** This method constructs a new Base64Binary.
           *
           * @return The newly contructed Base64Binary.
           */
         virtual xs::Base64Binary& create()
            throw(uci::base::UCIException) = 0;


         /** This method constructs a new Base64Binary initializing the data accessed by the new Base64Binary using the data
           * accessed by the specified Base64Binary (cloning).
           *
           * @param accessor The Base64Binary that provides access to the data that is to be used to initialize the data accessed
           *      by the new created Base64Binary.
           * @return The newly contructed Base64Binary.
           */
         virtual xs::Base64Binary& create(const xs::Base64Binary& accessor)
            throw(uci::base::UCIException) = 0;


         /** This method destroys the specified Base64Binary. Use of the specified accessor after it has been destroyed will
           * result in undefined behavior.
           *
           * @param accessor The Base64Binary that is to be destroyed.
           */
         virtual void destroy(xs::Base64Binary& accessor)
            throw(uci::base::UCIException) = 0;



      protected:

         /** The constructor [only available to derived classes]. */
         Base64BinaryFactory()
         { }

         /** The copy constructor [only available to derived classes]
           *
           * @param rhs The Base64BinaryFactory to copy from
           */
         Base64BinaryFactory(const Base64BinaryFactory& rhs)
         {
            (void)rhs;
         }

         /** The assignment operator. Sets the contents of this Base64BinaryFactory to the contents of the Base64BinaryFactory on
           * the right hand side (rhs) of the assignment operator.Base64BinaryFactory [only available to derived classes]
           *
           * @param rhs The Base64BinaryFactory on the right hand side (rhs) of the assignment operator whose contents are used to
           *      set the contents of this Base64BinaryFactory
           * @return A constant reference to this Base64BinaryFactory.
           */
         const Base64BinaryFactory& operator=(const Base64BinaryFactory& rhs)
         {
            (void)rhs;

            return *this;
         }


      }; // Base64BinaryFactory


   } // Namespace: factory
} // Namespace: xs

#endif // Xs__Factory__Base64BinaryFactory_h

