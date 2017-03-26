#ifndef MECHTURN_H
#define MECHTURN_H
#include "Turn.h"
class MechTurn : public Turn
{
public:
    void initalize();
    void takeTurn(Mech&, Mech&);
    bool endTurn();
    int getDamage();
private:

};
#endif // MECHTURN_H
