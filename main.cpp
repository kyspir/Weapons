#include <QCoreApplication>
#include "swordbehavior.h"
#include "weaponbehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeaponBehavior *wb = new SwordBehavior();
    wb->useWeapon();
    return a.exec();
}
