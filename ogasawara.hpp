#pragma once
#include "character.hpp"
#include <iostream>

class Ogasawara : public Character
{
    /**
     * @brief Aボタンに対応したアクションを行う関数
     * 
     */
    void commandA()
    {
        std::cout << "Sonic boom" << std::endl;
    }
    /**
     * @brief Aボタンに対応したアクションを行う関数
     * 
     */
    void commandB()
    {
        std::cout << "Summer salt" << std::endl; 
    }
};