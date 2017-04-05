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









    //ROOM THREE INFORMATION
    if(Rm_Num = 3)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 13)
    	{

    		//Player HP increased
    		Player_HP = 30

    		if(FirstAttacker == 1)
    		{
    			while(Dwarf_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 8+(rand()%9);
    				Dwarf_HP = Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Dwarf_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 8+(rand()%9);
    				Dwarf_HP = Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Dwarf_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Dwarf_HP = Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Dwarf_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Dwarf_HP = Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "You have been suffocated by the mighty dwarf's toxic stench!" << endl;
    	}
    	else
    	{
    		cout << "Congratulations... you survived a fart." << endl;
    	}
    }









    //ROOM 4 INFORMATION
    if(Rm_Num = 4)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 13)
    	{
    		
    		//Player HP increased
    		Player_HP = 56

    		if(FirstAttacker == 1)
    		{
    			while(Minotaur_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Minotaur_HP = Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Minotaur_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Minotaur_HP = Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Minotaur_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Minotaur_HP = Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Minotaur_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Minotaur_HP = Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "You have been trampled..." << endl;
    	}
    	else
    	{
    		cout << "The Minotaur will rage no more!" << endl;
    	}
    }









    //ROOM 5 INFORMATION
    if(Rm_Num = 5)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 21)
    	{
    			
    		//Player HP increased
    		Player_HP = 52

    		if(FirstAttacker == 1)
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 25+(rand()%26);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 25+(rand()%26);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Equipment == 11)
    	{

    		//Player HP increased
    		Player_HP = 30

    		if(FirstAttacker == 1)
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Lady_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Lady_HP = Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "You just got schooled by an old lady..." << endl;
    	}
    	else
    	{
    		cout << "Hooray you beat an old lady! How do you feel about that?" << endl;
    	}
    }









    //ROOM 6 INFORMATION
    if(Rm_Num = 6)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 20)
    	{
    		
    		//Player HP increased
    		Player_HP = 180

    		if(FirstAttacker == 1)
    		{
    			while(Troll_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Troll_HP = Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Troll_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				Troll_HP = Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(Troll_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Troll_HP = Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(Troll_HP>0 && Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				Troll_HP = Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				Player_HP = Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(Player_HP <= 0)
    	{
    		cout << "The Troll laughs at your demise!" << endl;
    	}
    	else
    	{
    		cout << "You done outsmarted that troll." << endl;
    	}
    }










    if(Rm_Num = 7)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 12)
    	{
    		
    	}
    }










    if(Rm_Num = 8)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 12)
    	{
    		
    	}
    }










    if(Rm_Num = 9)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);
    

   	    //combat taking into account the room, monster, player's equipped equipment
    	if(Equipment == 12)
    	{
    		
    	}
    }
}
