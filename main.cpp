#include "character.hpp"
#include "ogasawara.hpp"


void pushA(Character* chara)
{
    chara->commandA();
    return;
}

void pushB(Character* chara)
{
    chara->commandB();
    return;
}

int main()
{
    Character *Oga = new Ogasawara();
    pushA(Oga);
    pushB(Oga);
    return 0;
}