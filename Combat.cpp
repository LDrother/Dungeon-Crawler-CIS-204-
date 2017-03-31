#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Combat.h"
#include "Global.h"
#include "Map.h"
#include "inventory.h"

using namespace std;

Global ob;

Combat::Combat()
{
	//Rm_Num incremented here
    ++ob.Rm_Num;

	//ROOM ONE INFORMATION
    	if(ob.Rm_Num == 1)
    	{
    		//coin flip to determine first attacker
    		srand(time(0));
    		FirstAttacker = 1+(rand()%2);

    		//combat taking into account the room, monster, player's equipped equipment
    		if(FirstAttacker == 1)
    		{
    			while(ob.Bush_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 2+(rand()%3);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Bush_HP = ob.Bush_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    		}
    	      }
    	      else
    	      {
    		while(ob.Bush_HP>0 && ob.Player_HP>0)
    		{
    			srand(time(0));
    			PlayerAttack = 5+(rand()%6);
    			ob.Bush_HP = ob.Bush_HP - PlayerAttack;
    			cout << "You hit for " << PlayerAttack << "!" << endl;

    			//check if monster is killed
    			if(ob.Bush_HP <= 0)
    			{
    				break;
    			}

    			srand(time(0));
    			MonsterAttack = 2+(rand()%3);
    			ob.Player_HP = ob.Player_HP - MonsterAttack;
    			cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been impaled by the thorny bush... better luck next time." << endl;
    	}
    	else
    	{
    		cout << "That bush stood no chance. You should really be picking on someone your own size." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n";
            if(ob.choice == 1){
                ++ob.Rm_Num;
            }

            if(ob.choice == 2){
                Map();
            }

            if(ob.choice == 3){
                inventory();
            }
    	}
    }









    //ROOM TWO INFORMATION
    if(ob.Rm_Num == 2)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.Equipment == 12)
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 10+(rand()%11);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 10+(rand()%11);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%8);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "The Giant Spider has eaten you alive!!" << endl;
    	}
    	else
    	{
    		cout << "Your foe is now a pile of goo." << endl;
    		++ob.Rm_Num;
    	}
    }
}
