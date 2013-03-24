//
//  HelloWorld.cpp
//  CppFun
//
//  Created by Brian Abbott on 1/16/13.
//
//

#include <iostream>

#include "BasicBoost.h"

int main(int argc, char* argv[])
{
    std::string s = "string 1";
    std::string s1("string 2");
    // std::string* s2 = new std::string();
    
    std::cout << s << std::endl;
    std::cout << s1 << std::endl;
    // std::cout << s2 << std::endl;
    
    std::cout << "hello world!!!!!!" << std::endl;
    
    BasicBoost bb;
    bb.HelloBoostWorld();
}
