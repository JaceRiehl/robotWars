#include "MechBuilder.h"


    Mech Mech::MechBuilder::build()
    {
        return Mech(this->defence, this->roboLegs, this->roboArms, this->fightingStyle);
    }
