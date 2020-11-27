/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#include "spaceship.h"

Spaceship::Spaceship() {
    setWeight(0);
    setEnginePower(0);
}

Spaceship::Spaceship(int w, int eP) {
    setWeight(w);
    setEnginePower(eP);
}

Spaceship::~Spaceship() {
    // not used in this assignment
}

int Spaceship::getWeight() {
    return weight;
};

int Spaceship::getEnginePower() {
    return enginePower;
}

int Spaceship::getSpeed() {
    return enginePower-weight;
}

void Spaceship::setWeight(int w) {
    if (w > 0) {
        weight = w;
    } else {
        weight = 0;
    }
}

void Spaceship::setEnginePower(int eP) {
    if (eP > 0) {
        enginePower = eP;
    } else {
        enginePower = 0;
    }
}

