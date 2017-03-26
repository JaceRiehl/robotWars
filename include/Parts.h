#ifndef PARTS_H
#define PARTS_H
/**
*Flyweight class to implement the weapons
*/
class Parts
{
public:
    /**
    *Constructor for Part
    */
    Parts(int, int);
    /**
    *Getter for recharge time
    */
    int getRechargeTime();
    /**
    *Getter for recharge time
    */
    int getDamage();
    /**
    *Assignment Overloading
    */
    //operator=();

protected:
    /**
    *Weapons damage
    */
    int damage;
    /**
    *Weapons recharge time
    */
    int rechargeTime;
};
#endif // PARTS_H
