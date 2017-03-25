#ifndef PROGRAMMING_H
#define PROGRAMMING_H
#include "Parts.h"
#include <vector>
using namespace std;
/**
*Interface class for Mech programming strategies
*/
class Programming
{
public:
    /**
    *Declaration of attack
    */
    virtual int attack(vector<Parts>) = 0;

protected:
    /**
    *Vector of weapons
    */
    vector<Parts> parts;
    /**
    *Vector of rechage times
    */
    vector<int> rechargeTimes;

    int index = 0;


};
#endif // PROGRAMMING_H
