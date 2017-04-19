#include <iostream>
#include "Map.h"

using namespace std;

Map::Map()
{
    cout << "*****************************************************************" << endl
         << "* Level |Thorny|______|Giant | ______|Flatulent|_____#Treasure# *" << endl
         << "*   1   | Bush |      |Spider|       |  Dwarf  |     #Palace 1# *" << endl
         << "*          |              |               |               |     *" << endl
         << "*          v              v               v               |     *" << endl
         << "*      (Treasure)     (Treasure)      (Treasure)          |     *" << endl
         << "*      (Room 1A)      (Room 1B)       (Room 1C)           |     *" << endl
         << "*    _____________________________________________________|     *" << endl
         << "*   |                                                           *" << endl
         << "*   v                                                           *" << endl
         << "* Level |Raging|______ |Angry| ______|Cave |_________#Treasure# *" << endl
         << "*   2  |Minotaur|     |Old Lady|     |Troll|         #Palace 2# *" << endl
         << "*          |              |             |                 |     *" << endl
         << "*          v              v             v                 |     *" << endl
         << "*      (Treasure)     (Treasure)    (Treasure)            |     *" << endl
         << "*      (Room 2A)      (Room 2B)     (Room 2C)             |     *" << endl
         << "*    _____________________________________________________|     *" << endl
         << "*   |                                                           *" << endl
         << "*   v                                                           *" << endl
         << "* Level |Master|______|Enraged| _____|Flaming|________!!!YOU!!! *" << endl
         << "*   3   |Vampire|     |Assassin|     |Dragon|         !!!WIN!!! *" << endl
         << "*          |              |                                     *" << endl
         << "*          v              v                                     *" << endl
         << "*      (Treasure)     (Treasure)                                *" << endl
         << "*      (Room 3A)      (Room 3B)                                 *" << endl
         << "*****************************************************************\n" << endl;
}
