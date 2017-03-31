#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Combat.h"
using namespace std;

Combat::Combat()
{
	//Rm_Num incremented here


	//ROOM ONE INFORMATION
    	if(Rm_Num == 1)
    	{
    		//coin flip to determine first attacker
    		srand(time(0));
    		FirstAttacker = 1+(rand()%2);

    		//combat taking into account the room, monster, player's equipped equipment
    		if(FirstAttacker == 1)
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
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "You have been impaled by the thorny bush... better luck next time." << endl;
    	}
    	else
    	{
    		cout << "That bush stood no chance. You should really be picking on someone your own size." << endl;
    	}
    }









    //ROOM TWO INFORMATION
    if(Rm_Num == 2)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 12)
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Spider_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 10+(rand()%11);
    				Spider_HP = Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Spider_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 10+(rand()%11);
    				Spider_HP = Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Spider_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Spider_HP = Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Spider_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Spider_HP = Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "The Giant Spider has eaten you alive!!" << endl;
    	}
    	else
    	{
    		cout << "Your foe is now a pile of goo." << endl;
    	}
    }
