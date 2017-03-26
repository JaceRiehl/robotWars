#ifndef MECHBUILDER_H
#define MECHBUILDER_H
#include "Programming.h"
#include <string>
#include "Mech.h"
using std::string;
/**
*Builder pattern for Mech
*/
class Mech::MechBuilder
{
public:
    /**
    *Constructor for Mech
    *@param Programming pointer to a strategy style
    */
    MechBuilder(Programming* p) : fightingStyle(p) {}

    /**
    *Small Mech setter
    *@return MechBuilder reference
    */
    MechBuilder& setSmallMech() {this->roboArms = 2; this->roboLegs = 2; this->defence = 15; return *this;}

    /**
    *Medium Mech setter
    *@return MechBuilder reference
    */
    MechBuilder& setMediumMech() {this->roboArms = 4; this->roboLegs = 2; this->defence = 25; return *this;}

    /**
    *Large Mech setter
    *@return MechBuilder reference
    */
    MechBuilder& setLargeMech() {this-> roboArms = 6; this->roboLegs = 4; this->defence = 35; return *this;}

    /**
    *Builds the Mech object
    *@return Mech object
    */
    Mech build();

    /**
    *getter for testing
    */
    int getArmor();
    /**
    *getter for testing
    */
    int getArms();
    /**
    *getter for testing
    */
    int getLegs();
    /**
    *getter for testing
    */
    string getStrategy();


private:
    /**
    *Programming pointer to a fighting style
    */
    Programming* fightingStyle;

    /**
    *Variable for setting armor
    */
    int defence = -1;

    /**
    *Variable for setting the Mechs number of arms
    */
    int roboArms = -1;

    /**
    *Variable for setting the Mechs number of legs
    */
    int roboLegs = -1;
};
#endif // MECHBUILDER_H
