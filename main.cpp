#include <iostream>
#include "Enemy.h"
#include "Map.h"

using namespace std;

void menu()
    {
        cout << "Press 1 to enter the dungeon." << endl;
        cout << "Press 2 to view map." << endl;
        cout << "Press 0 to exit." << endl;
    };


int main()
{
    int choice = 0;

    menu();
    cin >> choice;
    cout << endl;

    while(choice !=0)
    {
        if(choice == 1)
        {

        }
        if(choice == 2)
        {
            Map();
            menu();
            cin >> choice;
        }
    }

    if (choice == 0)
    {
        cout << "\nThanks for playing." << endl;
    }

    cin.get();
    return 0;
}
