#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Combat.h"
using namespace std;

Combat::Combat()
{
	//Rm_Num incremented here

    if(Rm_Num = 1)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(FirstAttacker = 1)
    	{
    		while(Bush_HP>0 && Player_HP>0)
    		{
    			srand(time(0));
    			MonsterAttack = 2+(rand()%3);
    			Player_HP = Player_HP - MonsterAttack;
    			cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;

    			//check if player is killed
    			if(Player_HP <= 0)
    			{
    				break;
    			}


    			srand(time(0));
    			PlayerAttack = 5+(rand()%6);
    			Bush_HP = Bush_HP - PlayerAttack;
    			cout << "You hit for " << PlayerAttack << "!" << endl;
    		}
    		if(Player_HP <= 0)
    		{
    			cout << "You have been impaled by the thorny bush... better luck next time." << endl;
    		}
    		else
    		{
    			cout << "That bush stood no chance. You should really be picking on someone your own size... next!" << endl;
    		}
    	}
    	else
    	{
    		while(Bush_HP>0 && Player_HP>0)
    		{
    			srand(time(0));
    			PlayerAttack = 5+(rand()%6);
    			Bush_HP = Bush_HP - PlayerAttack;
    			cout << "You hit for " << PlayerAttack << "!" << endl;

    			//check if monster is killed
    			if(Bush_HP <= 0)
    			{
    				break;
    			}

    			srand(time(0));
    			MonsterAttack = 2+(rand()%3);
    			Player_HP = Player_HP - MonsterAttack;
    			cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;
    		}
    		if(Bush_HP <= 0)
    		{
    			cout << "That bush stood no chance. You should really be picking on someone your own size... next!" << endl;
    		}
    		else
    		{
    			cout << "You have been impaled by the thorny bush... better luck next time." << endl;
    		}
    	}
    }
}
