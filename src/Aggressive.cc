#include "Aggressive.h"
#include <iostream>
int Aggressive::attack(vector<Parts*> p)
{
 int damage = 0;
    if(p.size() == 0)
        return damage;

    if(parts.size() == 0)
        parts = p;

    if(rechargeTimes.size() == 0)
    {
        rechargeTimes.resize(parts.size());
        for(unsigned int i=0; i<parts.size(); i++)
            rechargeTimes[i] = 0;
    }


    int index = -1;

    for(unsigned int i = 0; i<parts.size(); i++)
    {
        if(rechargeTimes[i] == 0)
        {
            if(damage < parts[i]->getDamage())
            {
            index = i;
            }
        }
    }
    if(index != -1)
    {
    damage = parts[index]->getDamage();
    rechargeTimes[index] = parts[index]->getRechargeTime();
    }

   return damage;
}

string Aggressive::getName()
{
    return name;
}

void Aggressive::updateRecharge()
{
    for(unsigned int i = 0; i < rechargeTimes.size(); i++)
    {
        if(rechargeTimes[i] > 0)
        rechargeTimes[i] = rechargeTimes[i] - 1;
    }
}
