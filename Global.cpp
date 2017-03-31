#include <iostream>
#include "Global.h"

using namespace std;

void Global::Global()
{
	int Rm_Num = 0;
	int Equipment = 10;
	int FirstAttacker = 0;
	int MonsterAttack = 0;
	int PlayerAttack = 0;
	int Player_HP = 10;
	int Bush_HP = 3;
	int SPider_HP = 10;
	int Dwarf_HP = 15;
	int Minotaur_HP = 30;
	int Lady_HP = 25;
	int Troll_HP = 40;
	int Vampire_HP = 35;
	int Assassin_HP = 30;
	int Dragon_HP = 300;
}

Global::menu()
{
    cout << "\nPress 1 to continue to the next room." << endl;
    cout << "Press 2 to view map." << endl;
    cout << "Press 3 to view your inventory" << endl;
    cout << "Press 0 to exit." << endl;
}
