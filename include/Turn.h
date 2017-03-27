#ifndef TURN_H
#define TURN_H
#include "Programming.h"
#include "Mech.h"
/**
*Abstract class for turns
*/
class Turn
{
public:
    /**
    *Runs the turn algorithm
    *@return bool, true if the turn was successful
    *@param Mech attacker
    *@param Mech opponent
    */
    bool runTurn(Mech&, Mech&);

    /**
    *Class destructor
    */
    virtual ~Turn() {}

protected:
    /**
    *Declaration of initalize
    */
    virtual void initalize() = 0;

    /**
    *Declaration of takeTurn
    */
    virtual void takeTurn(Mech&, Mech&) = 0;

    /**
    *Declaration of endTurn
    */
    virtual bool endTurn() = 0;

    /**
    *damage being dealt
    */
    int damage;
};
#endif // TURN_H
