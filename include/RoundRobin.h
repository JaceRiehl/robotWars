#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H
#include "Programming.h"
/**
*Attack strategy for Mechs that always searches for the next available weapon
*/
class RoundRobin : public Programming
{
public:

    /**
    *Allows the Mech to attack once
    *@param vector of parts
    *@return amount of damage
    */
    int attack(vector<Parts*>);

    /**
    *getter for the name
    *@return string name
    */
    string getName();

    /**
    *Updates recharge times
    */
    void updateRecharge();

private:
    /**
    *Current index of the weapon
    */
    int index = 0;

    /**
    *Name of the strategy
    */
    string name = "RoundRobin";
};
#endif

