/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#include "main.h"

int main() {
    string line = "***********************************\n";

    cout << endl;
    cout << line;
    cout << "Start Spaceship Program." << endl;
    cout << line;

    cout << "Creating new Spaceship w/o attributes." << endl;
    Spaceship ship1;

    cout << "Creating new Spaceship with attributes." << endl;
    Spaceship ship2(3, 10);

    cout << endl;
    cout << "Displaying characteristics of Ship 1: " << endl;
    displaySpaceship(&ship1);
    cout << endl;
    cout << "Displaying characteristics of Ship 2: " << endl;
    displaySpaceship(&ship2);
    cout << endl;

    cout << "Creating new Fightership w/o attributes." << endl;
    Fightership ship3;

    cout << "Creating new Fightership with attributes." << endl;
    Fightership ship4(3, 10, 2, 4);

    cout << endl;
    cout << "Displaying characteristics of Ship 3: " << endl;
    displayFightership(&ship3);
    cout << endl;
    cout << "Displaying characteristics of Ship 4: " << endl;
    displayFightership(&ship4);
    cout << endl;

    cout << "fin." << endl;

    return 0;
}