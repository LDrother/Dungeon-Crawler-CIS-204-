#include <iostream>

using namespace std;


void inventory::inventory()
{
 switch(armour)
 {
  case 10:
  cout << "you are wearing simple sandals, a plain cloak, and carrying a walking stick" << endl;
  break;
 
  case 11:
 	cout << "you are now equipped with some comfy leather boots, some worn leather armour, and you've found a rusty knife" << endl;
 	break;
 
  case 12:
 	cout << "you are now wearing flip-flops, a swim-suit, and carrying a giant Pool Noodle... not sure why you'd go with that..." << endl;
 	break;

  case 13:
 	cout << "you are now wearing steel tipped work boots, a nice chainmail shirt, and you are armed with your mother's frying pan" << endl;
 	break;

  case 2:
 	cout << " to start out level two, you have combat boots, celtic warriors skirt, and a sword with a poisonous blade" << endl;
 	break;
 
  case 21:
 	cout << " you are now wearing some tennis shoes, shorts and a Tshirt, and a packing 50cal handgun" << endl;
 	break;

  case 22:
 	cout << " you have decided to put on high heels, a pink sundress, and are now carrying a handbag with garlic in it" endl;
 	break;

  case 23:
 	cout << " you are now bare foot, wearing a loin cloth, and brandishing the american flag and an RPG" << endl;
 	break;
 
  case 3:
 	cout << " you are now wearing steel armoured boots, titanium armour, and running around with your dad hack-saw" << endl;
 	break;
 
  case 31:
 	cout << " you are now a beautiful blonde highschool girl, carrying a pumkin spiced latte, and a bad attitude" << endl;
 	break;
 
  case 32:
 	cout << " dang! you now have gold boots, fire repelent shirt, and are carrying magic mace... hint: go for the eyes" << endl;
 	break;

  default:
 	cout << " you're not going into battle naked and un-armed! PUT SOME CLOTHES ON AND GRAB SOMETHING TO HIT BAD GUYS WITH!" << endl;


 }
}
