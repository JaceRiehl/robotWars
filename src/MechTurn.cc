#include "MechTurn.h"

void MechTurn::initalize()
{
    damage = 0;
}

void MechTurn::takeTurn(Mech& m1, Mech& m2)
{
    m1.updateRecharge();
    damage = m1.attack();
    m2.updateArmor(damage);
}

bool MechTurn::endTurn()
{
    return true;
}

int MechTurn::getDamage()
{
    return damage;
}
