#include "Parts.h"

Parts::Parts(int d, int r) : damage(d), rechargeTime(r){}

int Parts::getRechargeTime()
{
    return rechargeTime;
}

int Parts::getDamage()
{
    return damage;
}
