#include <iostream>

using namespace std;

class Enemy

{
    protected:
        int attackPower;
public:
    void setAttackPower (int a)
    {
    attackPower=a;
    }

};

class Bush: public Enemy
{
    public:
    void attack()
    {
        cout << "The room is full of Thorny Bushes! -"<< attackPower<<endl;
    }
};

class Troll: public Enemy
{
public:
    void attack()
    {
        cout << " Grumpy Troll attacks with club-" << attackPower << endl;
    }
};

class Assassin: public Enemy
{
public:
    void attack()
    {
        cout << " A Bad-Tempered Assassin has decided he does not like you -" << attackPower << endl;
    }
};


class Minator: public Enemy
{
public:
    void attack()
    {
        cout << " The great Minator from Greek Mythology is waiting to remove your head! -" << attackPower << endl;
    }
};



class FlatulentDwarf: public Enemy
{
public:
    void attack()
    {
        cout << " A rather Flatuent Dwarf is guarding a treasure, careful he tends to make people feel a little sick! -" << attackPower << endl;
    }
};

class GiantSpider: public Enemy
{
public:
    void attack()
    {
        cout << " A Giant Spider wants to make lunch out of you, watch out for the webs! -" << attackPower << endl;
    }
};


class Vampire: public Enemy
{
public:
    void attack()
    {
        cout << " A Vampire is trying to escape a crow of annoying, adoring teen girls and your in the way! -" << attackPower << endl;
    }
};


class Dragon: public Enemy
{
public:
    void attack()
    {
        cout << " A dragon guards the greatest treasure of all, your biggest fight is here! -" << attackPower << endl;
    }
};


class OldLady: public Enemy
{
public:
    void attack()
    {
        cout << " A rather insane old Lady is gonna beat you to death with her handbag! -" << attackPower << endl;
    }
};

int main()
{
Assassin A;
Minator M;
FlatulentDwarf F;
GiantSpider S;
Vampire V;
Dragon D;
OldLady L;
Bush B;
Troll T;

Enemy *enemy1 = &B;
Enemy *enemy2 = &S;
Enemy *enemy3 = &F;
Enemy *enemy4 = &M;
Enemy *enemy5 = &L;
Enemy *enemy6 = &T;
Enemy *enemy7 = &V;
Enemy *enemy8 = &A;
Enemy *enemy9 = &D;


enemy1-> setAttackPower(3);
enemy2-> setAttackPower(5);
enemy3-> setAttackPower(7);
enemy4-> setAttackPower(9);
enemy5-> setAttackPower(11);
enemy6-> setAttackPower(15);
enemy7-> setAttackPower(17);
enemy8-> setAttackPower(19);
enemy9-> setAttackPower(23);

L.attack();
D.attack();
A.attack();
V.attack();
M.attack();
F.attack();
B.attack();
T.attack();
S.attack();
}
