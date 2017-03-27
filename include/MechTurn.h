#ifndef MECHTURN_H
#define MECHTURN_H
#include "Turn.h"
/**
*Implemenetation for turns using mechs
*/
class MechTurn : public Turn
{
public:
    /**
    *Initalization before turn starts, sets damage to 0
    */
    void initalize();

    /**
    *Takes the turn, one mech attacks another
    *@param Mech reference, attacker
    *@param Mech reference, opponent
    */
    void takeTurn(Mech&, Mech&);

    /**
    *Ends the turn, returns true if the turn has ended
    *@return bool that is true
    */
    bool endTurn();

    /**
    *getter for the damage dealt
    */
    int getDamage();

private:

};
#endif // MECHTURN_H
