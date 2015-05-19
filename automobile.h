#ifndef AUTOMOBILEHEADER
#define AUTOMOBILEHEADER

#include<vector>
#include<string>
#include<iostream>
#include "vehicle.h"

using namespace std;

class Automobile : public Vehicle
{
    public:
        ///getters
        int getNumOfDoors();

        ///setters
        void setNumOfDoors(int door);

        ///constructors
        Automobile();
        Automobile(string modell);
        Automobile(string modell,int money);
        Automobile(string modell,int money,char *eng,int engSize);
        Automobile(string modell,int money,char *eng,int engSize,int numDoors);

        ///big three
        Automobile& operator =(const Automobile& rightSide);
        Automobile(const Automobile &rigtSide);
        ~Automobile();

        ///output function that print all info about object on screen
        void output();

    private:
        int numOfDoors;

};

#endif
