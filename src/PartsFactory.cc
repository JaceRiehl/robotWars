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

        case MEDIUM_LASER:
            if(MediumLaser == nullptr)
                MediumLaser = new Parts(4,6);
        return MediumLaser;

        case LARGE_LASER:
            if(LargeLaser == nullptr)
                LargeLaser = new Parts(8,12);
        return LargeLaser;

        case SMALL_ROCKET:
            if(SmallRocket == nullptr)
                SmallRocket = new Parts(3,5);
        return SmallRocket;

         case MEDIUM_ROCKET:
            if(MediumRocket == nullptr)
                MediumRocket = new Parts(6,10);
        return MediumRocket;

        case LARGE_ROCKET:
            if(LargeRocket == nullptr)
                LargeRocket = new Parts(12,20);
        return LargeRocket;

     }
 }
