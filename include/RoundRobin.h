#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H
#include "Programming.h"

class RoundRobin : public Programming
{
public:
    /**
    *
    */
    int attack(vector<Parts>);

private:
    int index = 0;
};
#endif // AGGRESSIVE_H

