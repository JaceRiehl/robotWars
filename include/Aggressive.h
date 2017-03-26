#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H
#include "Programming.h"
#include <string>
using namespace std;
/**
*Aggressive Fighting style where an available weapon with the highest damage is picked
*/
class Aggressive : public Programming
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
    *@return name
    */
    string getName();
private:
    /**
    *Name of the strategy
    */
    string name = "Aggressive";

};
#endif // AGGRESSIVE_H
