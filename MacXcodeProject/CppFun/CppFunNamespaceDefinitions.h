//
//  CppFunNamespaceDefinitions.h
//  CppFun
//
//  Created by Brian Abbott on 1/19/13.
//
//

#ifndef CppFun_CppFunNamespaceDefinitions_h
#define CppFun_CppFunNamespaceDefinitions_h

//
// CppFun::Types::Animals Namespace Macro.
//
#define BEGIN_CPPFUN_TYPES_ANIMALS_NAMESPACE \
    namespace CppFun { namespace Types { namespace Animals {
#define END_CPPFUN_TYPES_ANIMALS_NAMESPACE \
    } } }
            
//
// CppFun::Types::Animals::DisneyAnimals Namespace Macro.
//
#define BEGIN_CPPFUN_TYPES_ANIMALS_DISNEYANIMAL_NAMESPACE \
    BEGIN_CPPFUN_TYPES_ANIMALS_NAMESPACE namespace DisneyAnimals {
#define END_CPPFUN_TYPES_ANIMALS_DISNEYANIMAL_NAMESPACE \
    END_CPPFUN_TYPES_ANIMALS_NAMESPACE }

#endif
