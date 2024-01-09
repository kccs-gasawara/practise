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
    delete Oga;

    //上にならってここに自分の作ったキャラクタのインスタンス生成
    //Aボタンアクション
    //Bボタンアクション
    //デリート演算子を書いてください

    return 0;
}