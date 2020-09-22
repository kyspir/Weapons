#include <QCoreApplication>
#include <iostream>
using namespace std;

#include "weaponbehavior.h"
#include "knifebehavior.h"
#include "axebehavior.h"
#include "swordbehavior.h"
#include "bowandarrowbehavior.h"

#include "character.h"
#include "king.h"
#include "queen.h"
#include "troll.h"
#include "knight.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeaponBehavior *knife = new KnifeBehavior();
    WeaponBehavior *sword = new SwordBehavior();
    WeaponBehavior *axe = new AxeBehavior();
    WeaponBehavior *bow = new BowAndArrowBehavior();

    Character *king = new King();
    Character *queen = new Queen();
    Character *knight = new Knight();
    Character *troll = new Troll();

    cout << "King: ";
    king->fight();
    cout << "Weapon broken! Change weapon... " << endl;
    cout << "King attack with new weapon: ";
    king->setWeapon(sword);
    king->fight();

    cout <<""<< endl;

    cout << "Queen: ";
    queen->fight();
    cout << "Weapon broken! Change weapon... " << endl;
    cout << "Queen attack with new weapon: ";
    queen->setWeapon(sword);
    queen->fight();

    cout <<""<< endl;

    cout << "Knight: ";
    knight->fight();
    cout << "Weapon broken! Change weapon... " << endl;
    cout << "Knight attack with new weapon: ";
    knight->setWeapon(sword);
    knight->fight();

    cout <<""<< endl;

    cout << "Troll: ";
    troll->fight();
    cout << "Weapon broken! Change weapon... " << endl;
    cout << "Troll attack with new weapon: ";
    troll->setWeapon(knife);
    troll->fight();

    return a.exec();
}
