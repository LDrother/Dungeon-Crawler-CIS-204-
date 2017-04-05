#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Combat.h"
#include "Global.h"
#include "inventory.h"

using namespace std;

Global ob; inventory in;

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
    	}
    }









    //ROOM TWO INFORMATION
    if(ob.Rm_Num == 2)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 12)
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
    	}
    }









    //ROOM THREE INFORMATION
    if(ob.Rm_Num = 3)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 13)
    	{

    		//Player HP increased
    		ob.Player_HP = 30;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 8+(rand()%9);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 8+(rand()%9);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%14);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been suffocated by the mighty dwarf's toxic stench!" << endl;
    	}
    	else
    	{
    		cout << "Congratulations... you survived a fart." << endl;
    	}
    }









    //ROOM 4 INFORMATION
    if(ob.Rm_Num = 4)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 13)
    	{

    		//Player HP increased
    		ob.Player_HP = 56;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%22);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been trampled..." << endl;
    	}
    	else
    	{
    		cout << "The Minotaur will rage no more!" << endl;
    	}
    }









    //ROOM 5 INFORMATION
    if(ob.Rm_Num = 5)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 21)
    	{

    		//Player HP increased
    		ob.Player_HP = 52;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)

    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 25+(rand()%26);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 25+(rand()%26);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(in.armour == 11)
    	{

    		//Player HP increased
    		ob.Player_HP = 30;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%26);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You just got schooled by an old lady..." << endl;
    	}
    	else
    	{
    		cout << "Hooray you beat an old lady! How do you feel about that?" << endl;
    	}
    }









    //ROOM 6 INFORMATION
    if(ob.Rm_Num = 6)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 20)
    	{

    		//Player HP increased
    		ob.Player_HP = 180;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%16);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%6);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%36);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "The Troll laughs at your demise!" << endl;
    	}
    	else
    	{
    		cout << "You done outsmarted that troll." << endl;
    	}
    }










    if(ob.Rm_Num = 7)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 12)
    	{

    	}
    }










    if(ob.Rm_Num = 8)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 12)
    	{

    	}
    }










    if(ob.Rm_Num = 9)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);


   	    //combat taking into account the room, monster, player's equipped equipment
    	if(in.armour == 12)
    	{

    	}
    }
}
