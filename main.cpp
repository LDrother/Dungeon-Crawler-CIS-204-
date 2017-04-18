#include <iostream>
#include "Map.h"
#include "inventory.h"
#include "Global.h"
#include "Combat.h"

using namespace std;

void mmenu()
{
        cout << "Press 2 to view map." << endl;
        cout << "Press 3 to view your inventory" << endl;
        cout << "Press 0 to exit." << endl;
};

int main()
{
    int choice = 0; Global bo; inventory ry;

    cout << "Press 1 to enter the dungeon." << endl;
    mmenu();
    cin >> bo.choice;
    cout << endl;



    while(bo.choice !=0)
    {
        if (bo.choice < 0 || bo.choice > 3){
        cout << "Please enter a number that corresponds with a menu option." << endl;
        mmenu();
        cin >> bo.choice;
        cout << "\n" << endl;
        }

        if(bo.choice == 1){

        Combat();
        mmenu();
        cin >> bo.choice;
        cout << endl;
        }

        if(bo.choice == 2){
            Map();
            mmenu();
            cin >> bo.choice;
        }

        if(bo.choice == 3){
            ry.inventoryfunc();
            cin >> bo.armour;
            ry.armourset();
            mmenu();
            cin >> bo.choice;
            cout << endl;
        }

    }

    if (bo.choice == 0)
    {
        cout << "\nThanks for playing." << endl;
    }


    return 0;
}
