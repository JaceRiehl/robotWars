#include "MechBuilder.h"


    Mech Mech::MechBuilder::build()
    {
        return Mech(this->defence, this->roboLegs, this->roboArms, this->fightingStyle);
    }

    int Mech::MechBuilder::getArmor()
    {
      return defence;
    }

    int Mech::MechBuilder::getArms()
    {
        return roboArms;
    }

    int Mech::MechBuilder::getLegs()
    {
        return roboLegs;
    }

    string Mech::MechBuilder::getStrategy()
    {
        return fightingStyle->getName();
    }
