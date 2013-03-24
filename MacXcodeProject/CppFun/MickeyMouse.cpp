//
//  MickeyMouse.cpp
//  CppFun
//
//  Created by Brian Abbott on 1/19/13.
//
//

#include "MickeyMouse.h"

using namespace CppFun::Types::Animals::DisneyAnimals;


MickeyMouse::MickeyMouse()
{
    std::cout << "MickeyMouse CTOR!!" << std::endl;
}

bool MickeyMouse::CanSpeak() { return true; }
//
//// TODO: Make me abstract
std::string MickeyMouse::SayHello() { return "HiYa!! I\"m Mickey!!!"; }
