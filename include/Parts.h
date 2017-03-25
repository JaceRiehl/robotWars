#ifndef PARTS_H
#define PARTS_H
/**
*Flyweight class to implement the weapons
*/
class Parts
{
public:
    /**
    *
    */
    Parts(int, int);
    int getRechargeTime();
    int getDamage();

protected:
    int damage;
    int rechargeTime;
};
#endif // PARTS_H
