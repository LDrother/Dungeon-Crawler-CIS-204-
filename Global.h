#ifndef GLOBAL_H_
#define GLOBAL_H_
#include <string>

using namespace std;

class Global
{

public:

    int Player_HP = 10 , Bush_HP = 3, Spider_HP = 10, Dwarf_HP = 15, Minotaur_HP = 30, Lady_HP = 25,
    Troll_HP = 40, Vampire_HP = 35, Assassin_HP = 30, Dragon_HP = 300, Rm_Num = 0, choice = 0, armour = 0;

    Global();
    menu();



};

#endif
