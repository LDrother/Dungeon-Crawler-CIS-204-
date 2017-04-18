#include <iostream>
#include "Global.h"

using namespace std;

Global::Global()
{

}

Global::menu()
{
    cout << "\nPress 1 to continue to the next room." << endl;
    cout << "Press 2 to view map." << endl;
    cout << "Press 3 to view your inventory" << endl;
    cout << "Press 0 to exit." << endl;
}
