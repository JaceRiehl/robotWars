#include "MechTurn.h"

void MechTurn::initalize()
{

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
