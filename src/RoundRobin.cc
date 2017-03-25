#include "RoundRobin.h"
#include <iostream>


int RoundRobin::attack(vector<Parts> p)
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

        int startingIndex = index;

            while(true)
                {
                    if(rechargeTimes[index] == 0)
                    {
                        rechargeTimes[index] = parts[index].getRechargeTime();
                        damage = parts[index].getDamage();
                        index = (index + 1) % rechargeTimes.size();

                        break;
                    }

                    index = (index +1) % rechargeTimes.size();
                    if(index == startingIndex)
                        break;

                }

   return damage;

}
