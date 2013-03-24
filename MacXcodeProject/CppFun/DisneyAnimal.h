//
//  DisneyAnimal.h
//  CppFun
//
//  Created by Brian Abbott on 1/19/13.
//
//

#ifndef __CppFun__DisneyAnimal__
#define __CppFun__DisneyAnimal__

#include <iostream>

#include "CppFunNamespaceDefinitions.h"
#include "Animal.h"

BEGIN_CPPFUN_TYPES_ANIMALS_DISNEYANIMAL_NAMESPACE

//
// Disney Animal!!!
//
class DisneyAnimal : public CppFun::Types::Animals::Animal {
protected:
    const std::string manufacturer = "Disney Corporation";
                
public:
    std::string GetManufacturer();
    virtual bool CanSpeak();
    virtual std::string SayHello();
};

END_CPPFUN_TYPES_ANIMALS_DISNEYANIMAL_NAMESPACE

#endif /* defined(__CppFun__DisneyAnimal__) */
