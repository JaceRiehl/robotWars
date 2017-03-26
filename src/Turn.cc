#include "Turn.h"


bool Turn::runTurn(Mech& m1, Mech& m2)
{
    initalize();
    takeTurn(m1,m2);
    bool isDone = endTurn();
    return isDone;
}

