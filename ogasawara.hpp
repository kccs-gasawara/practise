#pragma once
#include "character.hpp"
#include <iostream>

class Ogasawara : public Character
{
    void commandA()
    {
        std::cout << "Sonic boom" << std::endl;
    }
    void commandB()
    {
        std::cout << "Summer salt" << std::endl; 
    }
};