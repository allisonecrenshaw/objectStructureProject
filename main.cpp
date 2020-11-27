/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#include "main.h"

int main() {
    string line = "***********************************\n";

    cout << line;
    cout << "Start Spaceship Program." << endl;
    cout << line;

    cout << "Creating new Spaceship w/o attributes: ";
    Spaceship ship1;

    cout << "Creating new Spaceship with attributes: ";
    Spaceship ship2(3, 10);


    return 0;
}