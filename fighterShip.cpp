/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#include "fighterShip.h"

Fightership::Fightership() {
    setWeight(0);
    setEnginePower(0);
    setFightPower(0);
    setExtraSpeed(0);
}

Fightership::Fightership(int w, int eP, int fP, int eS) {
    setWeight(w);
    setEnginePower(eP);
    setFightPower(fP);
    setExtraSpeed(eS);
}

Fightership::~Fightership() {
    // not used for this assignment
}

int Fightership::getFightPower() {
    return fightPower;
}

int Fightership::getExtraSpeed() {
    return extraSpeed;
}

int Fightership::getSpeed() {
    // override original getSpeed
    // account for added speed of Fightership
    return enginePower-weight+extraSpeed;
}

void Fightership::setFightPower(int fP) {
    if (fP > 0) {
        fightPower = fP;
    } else {
        fightPower = 0;
    }
}

void Fightership::setExtraSpeed(int eS) {
    if (eS > 0) {
        extraSpeed = eS;
    } else {
        extraSpeed = 0;
    }
}