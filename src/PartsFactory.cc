#include "PartsFactory.h"
#include "Parts.h"

Parts* PartsFactory::SmallLaser = nullptr;
Parts* PartsFactory::MediumLaser = nullptr;
Parts* PartsFactory::LargeLaser = nullptr;
Parts* PartsFactory::SmallRocket = nullptr;
Parts* PartsFactory::MediumRocket = nullptr;
Parts* PartsFactory::LargeRocket = nullptr;


 Parts* PartsFactory::getPart(Type t)
 {
     switch(t)
     {
        case SMALL_LASER:
            if(SmallLaser == nullptr)
            SmallLaser = new Parts(2,3);
        return SmallLaser;
        break;

        case MEDIUM_LASER:
            if(MediumLaser == nullptr)
                MediumLaser = new Parts(4,6);
        return MediumLaser;
        break;

        case LARGE_LASER:
            if(LargeLaser == nullptr)
                LargeLaser = new Parts(8,12);
        return LargeLaser;
        break;

        case SMALL_ROCKET:
            if(SmallRocket == nullptr)
                SmallRocket = new Parts(3,5);
        return SmallRocket;
        break;

         case MEDIUM_ROCKET:
            if(MediumRocket == nullptr)
                MediumRocket = new Parts(6,10);
        return MediumRocket;
        break;

        case LARGE_ROCKET:
            if(LargeRocket == nullptr)
                LargeRocket = new Parts(12,20);
        return LargeRocket;
        break;
     }
 }

 PartsFactory::~PartsFactory()
{
if(SmallLaser != nullptr)
    delete SmallLaser;
if(MediumLaser != nullptr)
    delete MediumLaser;
if(LargeLaser != nullptr)
    delete LargeLaser;
if(SmallRocket != nullptr)
    delete SmallRocket;
if(MediumRocket != nullptr)
    delete MediumRocket;
if(LargeRocket != nullptr)
    delete LargeRocket;

    SmallLaser = nullptr;
    MediumLaser = nullptr;
    LargeLaser = nullptr;
    SmallRocket = nullptr;
    MediumRocket = nullptr;
    LargeRocket = nullptr;

}
