#ifndef PARTSFACTORY_H
#define PARTSFACTORY_H
#include <string>
#include "Parts.h"
using namespace std;

class PartsFactory
{
public:
    enum Type{SMALL_ROCKET, SMALL_LASER, MEDIUM_ROCKET, MEDIUM_LASER, LARGE_ROCKET, LARGE_LASER};
    static Parts* getPart(Type);
    Type type;

private:
     static Parts* SmallRocket;
     static Parts* SmallLaser;
     static Parts* MediumRocket;
     static Parts* MediumLaser;
     static Parts* LargeRocket;
     static Parts* LargeLaser;
};
#endif // PARTSFACTORY_H
