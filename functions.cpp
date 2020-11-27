/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#include "functions.h"

void displaySpaceship(Spaceship *mySpaceship) {
    cout << "Weight: " << mySpaceship->getWeight() << endl;
    cout << "Engine Power: " << mySpaceship->getEnginePower() << endl;
    cout << "Speed: " << mySpaceship->getSpeed() << endl;
}

void displayFightership(Fightership *myFightership) {
    cout << "Weight: " << myFightership->getWeight() << endl;
    cout << "Engine Power: " << myFightership->getEnginePower() << endl;
    cout << "Speed: " << myFightership->getSpeed() << endl;
    cout << "Fighter Power: " << myFightership->getFightPower() << endl;
}