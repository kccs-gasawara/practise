#pragma once


class Character
{
    public:
        virtual void commandA() = 0;
        virtual void commandB() = 0;
        virtual ~Character(){};
};