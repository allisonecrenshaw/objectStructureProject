/*********************
Name: Allison Crenshaw
Coding 02
Purpose: Classes and objects refresher assignment.
**********************/

#ifndef SPACESHIP_H
#define SPACESHIP_H

class Spaceship {

public:
    // constructors & destructor
    Spaceship();
    Spaceship (int, int);
    ~Spaceship();

    // Getters
    int getWeight();
    int getEnginePower();
    int getSpeed();

    // Setters
    void setWeight(int);
    void setEnginePower(int);

protected:
    // private variables that define spaceship
    int weight, enginePower;

}; // end class Spaceship

#endif