#include <QCoreApplication>
#include "swordbehavior.h"
#include "weaponbehavior.h"
#include "knifebehavior.h"
#include "character.h"
#include "king.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p->fight();
    WeaponBehavior *sword = new SwordBehavior();
    p->setWeapon(sword);
    p->fight();
    return a.exec();
}
