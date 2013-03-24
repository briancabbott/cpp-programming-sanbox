//
//  BasicBoost.c
//  CppFun
//
//  Created by Brian Abbott on 1/19/13.
//
//

#include <iostream>

#include "boost/shared_ptr.hpp"
#include "boost/smart_ptr/shared_ptr.hpp"

#include "BasicBoost.h"

#include "DisneyAnimal.h"
#include "MickeyMouse.h"

using namespace boost;
using namespace CppFun::Types::Animals::DisneyAnimals;

void BasicBoost::HelloBoostWorld() {
    std::cout << "Hello Boost World" << std::endl;
    
    shared_ptr<DisneyAnimal> st_type(new MickeyMouse());
    
    std::cout << "Manufacturer: " << st_type->GetManufacturer() << std::endl;
}