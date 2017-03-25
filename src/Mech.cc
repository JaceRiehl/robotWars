#include "Mech.h"
void Mech::addPart(Parts p)
{
    maxWeapons = arms + legs;
    if(parts.size() == maxWeapons)
    throw runtime_error("Weapon can't be added");
    else
    parts.push_back(p);

}

