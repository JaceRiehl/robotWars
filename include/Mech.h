#ifndef MECH_H
#define MECH_H
#include <stdexcept>
#include <vector>
#include <string>
#include "Programming.h"
#include "Parts.h"
using namespace std;
using std::runtime_error;

class Mech
{
public:
    /**
    *Class for the Builder
    */
    class MechBuilder;
    /**
    *Adds weapons to the arms
    *@param Programming pointer to a strategy style
    */
    void addPart(Parts*);
private:
    /**
    *Vector of weapons
    */
    vector<Parts*> parts;
    /**
    *The Mechs armor
    */
    int armor;
    /**
    *Mechs number of legs
    */
    int legs;
    /**
    *Mechs number of arms
    */
    int arms;
    /**
    *Maximum number of weapons
    */
    int maxWeapons;
    /**
    *The Programming style
    */
    Programming* fightingStyle;

    /**
    *Constructor for Mech supplied by Mech builder
    *@param Armor
    *@param Legs
    *@param Arms
    *@param Fighting Style
    */
    Mech(int defence, int pegs, int roboArms, Programming* f) : armor(defence), legs(pegs), arms(roboArms), fightingStyle(f) {}

};
#endif // MECH_H
