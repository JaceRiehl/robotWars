#ifndef PROGRAMMING_H
#define PROGRAMMING_H
#include "Parts.h"
#include <vector>
#include <string>
using namespace std;
/**
*Interface class for Mech programming strategies
*/
class Programming
{
public:
    /**
    *Destructor for progrmaming
    */
    virtual ~Programming() {}
    /**
    *Declaration of attack
    */
    virtual int attack(vector<Parts*>) = 0;

    /**
    *Get Name declaration
    */
    virtual string getName() = 0;

    /**
    *Updates the recharge times
    */
    virtual void updateRecharge() = 0;

protected:
    /**
    *Vector of weapons
    */
    vector<Parts*> parts;

    /**
    *Vector of rechage times
    */
    vector<int> rechargeTimes;


};
#endif // PROGRAMMING_H
