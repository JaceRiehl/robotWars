#include "Aggressive.h"

int Aggressive::attack(vector<Parts> p)
{
 int damage = 0;
    if(parts.size() == 0)
        parts = p;

    if(rechargeTimes.size() == 0)
    {
        rechargeTimes.resize(parts.size());
        for(int i=0; i<parts.size(); i++)
            rechargeTimes[i] = 0;
    }

    for(int i = 0; i < rechargeTimes.size(); i++)
    {
        if(rechargeTimes[i] > 0)
        rechargeTimes[i] = rechargeTimes[i] - 1;
    }



    for(int i = 0; i<parts.size(); i++)
    {
        if(parts[i].getDamage() > damage && rechargeTimes[i] == 0)
        {
            damage = parts[i].getDamage();
            rechargeTimes[i] = parts[i].getRechargeTime();
        }
    }

   return damage;
}
