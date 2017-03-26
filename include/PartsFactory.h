#ifndef PARTSFACTORY_H
#define PARTSFACTORY_H
#include <string>
#include "Parts.h"
using namespace std;
/**
*Holds the instances of different weapons
*/
class PartsFactory
{
public:
    /**
    *Enumeration for different weapons
    */
    enum Type{SMALL_ROCKET, SMALL_LASER, MEDIUM_ROCKET, MEDIUM_LASER, LARGE_ROCKET, LARGE_LASER};

    /**
    *Turns an instance of a particular kind of weapon based on the enumeration entered
    *@param enumeration Type
    *@return Parts pointer, the desired weapon
    */
    static Parts* getPart(Type);

    /**
    *Class destructor
    */
    ~PartsFactory();

private:
    /**
    *static pointer weapon with the parameters of a small rocket
    */
     static Parts* SmallRocket;

    /**
    *static pointer weapon with the parameters of a small laser
    */
     static Parts* SmallLaser;

    /**
    *static pointer weapon with the parameters of a medium rocket
    */
     static Parts* MediumRocket;

    /**
    *static pointer weapon with the parameters of a medium laser
    */
     static Parts* MediumLaser;

    /**
    *static pointer weapon with the parameters of a large rocket
    */
     static Parts* LargeRocket;

    /**
    *static pointer weapon with the parameters of a large laser
    */
     static Parts* LargeLaser;

};
#endif // PARTSFACTORY_H
