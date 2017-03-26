#ifndef TURN_H
#define TURN_H
#include "Programming.h"
#include "Mech.h"

class Turn
{
public:
    void runTurn(Mech&, Mech&);
protected:
    virtual void initalize() = 0;
    virtual void takeTurn(Mech&, Mech&) = 0;
    virtual bool endTurn() = 0;

    int damage;
};
#endif // TURN_H
