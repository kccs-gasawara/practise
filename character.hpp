#pragma once


class Character
{
    public:
        /**
         * @brief Aボタンに対応するアクション用の純粋仮想関数
         * 
         */
        virtual void commandA() = 0;
        /**
         * @brief Bボタンに対応するアクション用の純粋仮想関数
         * 
         */
        virtual void commandB() = 0;
        virtual ~Character(){};
};