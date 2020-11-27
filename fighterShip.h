/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#ifndef FIGHTER_SHIP_H
#define FIGHTER_SHIP_H

#include "spaceship.h"

class Fightership : public Spaceship {
public:
    Fightership();
    Fightership(int, int, int, int);
    ~Fightership();

    // Getters
    int getFightPower();
    int getExtraSpeed();
    int getTurboSpeed();

    // Setters
    void setFightPower(int);
    void setExtraSpeed(int);

private:
    int fightPower;
    int extraSpeed;

};

#endif