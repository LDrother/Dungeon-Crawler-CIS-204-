#include <iostream>
#include "Enemy.h"
#include "Map.h"
#include "inventory.h"
#include "Global.h"
#include "Combat.h"

using namespace std;

void menu()
{
        cout << "Press 2 to view map." << endl;
        cout << "Press 3 to view your inventory" << endl;
        cout << "Press 0 to exit." << endl;
};

int main()
{
    int choice = 0; Global bo;

    cout << "Press 1 to enter the dungeon." << endl;
    menu();
    cin >> bo.choice;
    cout << endl;



    while(bo.choice !=0)
    {
        if (bo.choice < 0 || bo.choice > 3){
        cout << "Please enter a number that corresponds with a menu option." << endl;
        menu();
        cin >> bo.choice;
        cout << "\n" << endl;
        }

        if(bo.choice == 1){

        Combat();
        menu();
        cin >> bo.choice;
        cout << endl;
        }

        if(bo.choice == 2){
            Map();
            menu();
            cin >> bo.choice;
        }

        if(bo.choice == 3){
            inventory();
            menu();
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

