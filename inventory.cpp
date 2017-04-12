#include <iostream>
#include "inventory.h"
#include "Global.h"

using namespace std;

Global oj;

inventory::inventory()
{
switch(oj.Rm_Num)
{
case 0:
case 1:
case 2:

  cout << "You have selected to change your armour." << endl;
  cout << "You are wearing simple sandals, a plain cloak, and carrying a walking stick.\n" << endl;


  cout << "Enter armour set number to equip:\n" << endl;

  cout << "11. Comfy leather boots, some worn leather armour, and you've found a rusty knife." << endl;
  cout << "12. Flip-flops, a swim-suit, and carrying a giant Pool Noodle... not sure why you'd go with that." << endl;
  cout << "13. Steel tipped work boots, a nice chain mail shirt, and you are armed with your mother's frying pan." << endl;

    break;

case 3:
case 4:
case 5:


  cout << "You have selected to change your armour.\n" << endl;

  cout << "Enter armour set number to equip:\n" << endl;

  cout << "11. Comfy leather boots, some worn leather armour, and you've found a rusty knife." << endl;
  cout << "12. Flip-flops, a swim-suit, and carrying a giant Pool Noodle... not sure why you'd go with that." << endl;
  cout << "13. Steel tipped work boots, a nice chain mail shirt, and you are armed with your mother's frying pan." << endl;
  cout << "2.  Combat boots, Celtic warriors skirt, and a sword with a poisonous blade." << endl;
  cout << "21. Tennis shoes, shorts and a t-shirt, and a packing 50cal handgun." << endl;
  cout << "22. High heels, a pink sun dress, and are now carrying a handbag with garlic in it." << endl;
  cout << "23. Bare foot, wearing a loin cloth, and brandishing the American flag and an RPG." << endl;

break;

case 6:
case 7:
case 8:
case 9:

  cout << "You have selected to change your armour.\n" << endl;

  cout << "Enter armour set number to equip:\n" << endl;

  cout << "11. Comfy leather boots, some worn leather armour, and you've found a rusty knife." << endl;
  cout << "12. Flip-flops, a swim-suit, and carrying a giant Pool Noodle... not sure why you'd go with that." << endl;
  cout << "13. Steel tipped work boots, a nice chain mail shirt, and you are armed with your mother's frying pan." << endl;
  cout << "2.  Combat boots, Celtic warriors skirt, and a sword with a poisonous blade." << endl;
  cout << "21. Tennis shoes, shorts and a t-shirt, and a packing 50cal handgun." << endl;
  cout << "22. High heels, a pink sun dress, and are now carrying a handbag with garlic in it." << endl;
  cout << "23. Bare foot, wearing a loin cloth, and brandishing the American flag and an RPG." << endl;
  cout << "3.  Steel armoured boots, titanium armour, and your dad's hack-saw." << endl;
  cout << "31. Become a beautiful blond high school girl, carrying a pumpkin spiced latte, and a bad attitude." << endl;
  cout << "32. Gold boots, fire repellent shirt, and magic mace... hint: go for the eyes." << endl;

break;
}

cin >> oj.armour;

{
 switch(oj.armour)
 {
  case 10:
  cout << "You are wearing simple sandals, a plain cloak, and carrying a walking stick." << endl;
  break;

  case 11:
 	cout << "You are now equipped with some comfy leather boots, some worn leather armour, and you've found a rusty knife." << endl;
 	break;

  case 12:
 	cout << "You are now wearing flip-flops, a swim-suit, and carrying a giant Pool Noodle... not sure why you'd go with that..." << endl;
 	break;

  case 13:
 	cout << "You are now wearing steel tipped work boots, a nice chain mail shirt, and you are armed with your mother's frying pan." << endl;
 	break;

  case 2:
 	cout << " to start out level two, you have combat boots, Celtic warriors skirt, and a sword with a poisonous blade" << endl;
 	break;

  case 21:
 	cout << "You are now wearing some tennis shoes, shorts and a t-shirt, and a packing 50cal handgun." << endl;
 	break;

  case 22:
 	cout << "You have decided to put on high heels, a pink sun dress, and are now carrying a handbag with garlic in it." << endl;
 	break;

  case 23:
 	cout << "You are now bare foot, wearing a loin cloth, and brandishing the American flag and an RPG." << endl;
 	break;

  case 3:
 	cout << "You are now wearing steel armoured boots, titanium armour, and running around with your dad's hack-saw." << endl;
 	break;

  case 31:
 	cout << "You are now a beautiful blond high school girl, carrying a pumpkin spiced latte, and a bad attitude." << endl;
 	break;

  case 32:
 	cout << "Dang! You now have gold boots, a fire repellent shirt, and are carrying magic mace... hint: go for the eyes." << endl;
 	break;

  default:
 	cout << "You're not going into battle naked and unarmed! PUT SOME CLOTHES ON AND GRAB SOMETHING TO HIT BAD GUYS WITH!" << endl;
 	cin >> oj.armour;


 }
}
}
