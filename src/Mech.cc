#include "Mech.h"
void Mech::addPart(Parts* p)
{
    maxWeapons = arms + legs;
    if(parts.size() == maxWeapons)
    throw runtime_error("Weapon can't be added");
    else
    parts.push_back(p);

}

vector<Parts*> Mech::getWeapons()
{
    return parts;
}

int Mech::attack()
{
    int d = fightingStyle->attack(parts);
    return d;
}

int Mech::getArmor()
{
    return armor;
}

int Mech::getArms()
{
    return arms;
}

int Mech::getLegs()
{
    return legs;
}

string Mech::getStrategy()
{
    return fightingStyle->getName();
}

