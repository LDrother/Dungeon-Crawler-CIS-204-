#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Combat.h"
#include "Global.h"
#include "inventory.h"
#include "Map.h"

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
    			MonsterAttack = 2+(rand()%2);
    			ob.Player_HP = ob.Player_HP - MonsterAttack;
    			cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;

    			//check if player is killed
    			if(ob.Player_HP <= 0)
    			{
    				break;
    			}


    			srand(time(0));
    			PlayerAttack = 5+(rand()%2);
    			ob.Bush_HP = ob.Bush_HP - PlayerAttack;
    			cout << "You hit for " << PlayerAttack << "!" << endl;
    		}
    	}
    	else
    	{
    		while(ob.Bush_HP>0 && ob.Player_HP>0)
    		{
    			srand(time(0));
    			PlayerAttack = 5+(rand()%2);
    			ob.Bush_HP = ob.Bush_HP - PlayerAttack;
    			cout << "You hit for " << PlayerAttack << "!" << endl;

    			//check if monster is killed
    			if(ob.Bush_HP <= 0)
    			{
    				break;
    			}

    			srand(time(0));
    			MonsterAttack = 2+(rand()%2);
    			ob.Player_HP = ob.Player_HP - MonsterAttack;
    			cout << "Thorny Bush hits for " << MonsterAttack << "!" << endl;
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been impaled by the thorny bush... better luck next time." << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "That bush stood no chance. You should really be picking on someone your own size." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 1){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
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
    	if(ob.armour == 12)
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 6+(rand()%3);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 10+(rand()%2);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 10+(rand()%2);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%3);
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
    				MonsterAttack = 6+(rand()%3);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Spider_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Spider_HP = ob.Spider_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Spider_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 6+(rand()%3);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Giant Spider hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "The Giant Spider has eaten you alive!!" << endl;

            cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "Your foe is now a pile of goo." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 2){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
            cin >> ob.armour;
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    	}
    }

    //ROOM THREE INFORMATION
    if(ob.Rm_Num = 3)
    {
        ob.Player_HP = 1200;
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);
cout << ob.armour << endl;

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 13)
    	{


    		//Player HP increased
    		ob.Player_HP = 30;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 10+(rand()%15);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 8+(rand()%2);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 8+(rand()%2);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%5);
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
    				MonsterAttack = 10+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Dwarf_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Dwarf_HP = ob.Dwarf_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Dwarf_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 10+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flatulent Dwarf hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been suffocated by the mighty dwarf's toxic stench!" << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "Congratulations... you survived a fart." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 3){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    	}
    }

    //ROOM 4 INFORMATION
    if(ob.Rm_Num = 4)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 13)
    	{

    		//Player HP increased
    		ob.Player_HP = 56;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 18+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%5);
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
    				MonsterAttack = 18+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Minotaur_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Minotaur_HP = ob.Minotaur_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Minotaur_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 18+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Raging Minotaur hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You have been trampled..." << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "The Minotaur will rage no more!" << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 4){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    	}
    }

    //ROOM 5 INFORMATION
    if(ob.Rm_Num = 5)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 21)
    	{

    		//Player HP increased
    		ob.Player_HP = 52;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)

    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%2);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 25+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 25+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%2);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.armour == 11)
    	{

    		//Player HP increased
    		ob.Player_HP = 30;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 25+(rand()%2);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%2);
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
    				MonsterAttack = 25+(rand()%2);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Lady_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Lady_HP = ob.Lady_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Lady_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 25+(rand()%2);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Old Lady hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You just got schooled by an old lady..." << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "Hooray you beat an old lady! How do you feel about that?" << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 5){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    	}
    }

    //ROOM 6 INFORMATION
    if(ob.Rm_Num = 6)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 20)
    	{

    		//Player HP increased
    		ob.Player_HP = 180;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 32+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 15+(rand()%2);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%5);
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
    				MonsterAttack = 32+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Troll_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Troll_HP = ob.Troll_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Troll_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 32+(rand()%5);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Cave Troll hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "The Troll laughs at your demise!" << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "You done outsmarted that troll." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 6){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    	}
    }

   //ROOM 7 INFORMATION
    if(ob.Rm_Num = 7)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 22)
    	{
    		//Player HP increased
    		ob.Player_HP = 135;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Vampire_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 40+(rand()%6);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Master Vampire hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 45+(rand()%2);
    				ob.Vampire_HP = ob.Vampire_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Vampire_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 45+(rand()%2);
    				ob.Vampire_HP = ob.Vampire_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Vampire_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 40+(rand()%6);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Master Vampire hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Vampire_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 40+(rand()%6);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Master Vampire hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Vampire_HP = ob.Vampire_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Vampire_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Vampire_HP = ob.Vampire_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Vampire_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 40+(rand()%6);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Master Vampire hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "His royal thirstiness has turned you into a raisin!" << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "and... that vampire ran off at the sight of your garlic. What a strange way to defeat an enemy." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 7){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    }
    }

    //ROOM 8 INFORMATION
    if(ob.Rm_Num = 8)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);

    	//combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 30)
    	{
    		//Player HP increased
    		ob.Player_HP = 210;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 45+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 45+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Assassin_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.armour == 21)
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 30+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 30+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Assassin_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.armour == 31)
    	{
    		//Player HP increased
    		ob.Player_HP = 100;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Assassin_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	else
    	{
    		if(FirstAttacker == 1)
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Assassin_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 5+(rand()%2);
    				ob.Assassin_HP = ob.Assassin_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Assassin_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 50+(rand()%21);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Enraged Assassin hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "You never saw him coming... that assassin got you good!" << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "Lucky you, the final battle awaits..." << endl;

    		while(ob.Player_HP > 0 && ob.Rm_Num == 8){
    		ob.menu();
    		cin >> ob.choice;
    		while (ob.choice < 0 || ob.choice > 3){
            cout << "Please enter a number that corresponds with a menu option." << endl;
            ob.menu();
            cin >> ob.choice;
            cout << "\n" << endl;
            }

            if(ob.choice == 1){

            ++ob.Rm_Num;

            }

        if(ob.choice == 2){
            Map();
//            ob.menu();
//            cin >> ob.choice;
        }

        if(ob.choice == 3){
            inventory();
//            ob.menu();
//            cin >> ob.choice;
//            cout << endl;
        }

        if (ob.choice == 0){

        cout << "\nThanks for playing." << endl;
        exit(0);
        }
    		}
    }
    }









    //ROOM 9 INFORMATION
    if(ob.Rm_Num = 9)
    {
    	//coin flip to determine first attacker
    	srand(time(0));
    	FirstAttacker = 1+(rand()%2);


   	    //combat taking into account the room, monster, player's equipped equipment
    	if(ob.armour == 32)
    	{
    		//Player HP increased
    		ob.Player_HP = 340;

    		if(FirstAttacker == 1)
    		{
    			while(ob.Dragon_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				MonsterAttack = 50+(rand()%51);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flaming Dragon hits for " << MonsterAttack << "!" << endl;

    				//check if player is killed
    				if(ob.Player_HP <= 0)
    				{
    					break;
    				}


    				srand(time(0));
    				PlayerAttack = 50+(rand()%51);
    				ob.Dragon_HP = ob.Dragon_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;
    			}
    		}
    		else
    		{
    			while(ob.Dragon_HP>0 && ob.Player_HP>0)
    			{
    				srand(time(0));
    				PlayerAttack = 50+(rand()%51);
    				ob.Dragon_HP = ob.Dragon_HP - PlayerAttack;
    				cout << "You hit for " << PlayerAttack << "!" << endl;

    				//check if monster is killed
    				if(ob.Dragon_HP <= 0)
    				{
    					break;
    				}

    				srand(time(0));
    				MonsterAttack = 50+(rand()%51);
    				ob.Player_HP = ob.Player_HP - MonsterAttack;
    				cout << "Flaming Dragon hits for " << MonsterAttack << "!" << endl;
    			}
    		}
    	}
    	if(ob.Player_HP <= 0)
    	{
    		cout << "It's a shame you came all this way just to get barbecued!" << endl;

    		cout << "Press 0 to exit." << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    	else
    	{
    		cout << "You did it! Your enemies lay vanquished at the hand of your RNG!" << endl;
    		cout << "Press 0 to claim your victory!" << endl;
    		cin >> ob.choice;
    		exit(0);
    	}
    }

}
