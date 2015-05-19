#ifndef TRUCKHEADER
#define TRUCKHEADER

#include<vector>
#include<string>
#include<iostream>
#include "vehicle.h"

using namespace std;

class Truck : public Vehicle
{
    public:
        ///getters
        int getCapacity();

        ///setters
        void setCapacity(int capcty);

        ///constructors
        Truck();
        Truck(string modell);
        Truck(string modell,int money);
        Truck(string modell,int money,char *eng,int engSize);
        Truck(string modell,int money,char *eng,int engSize,int capacity);

        ///big three
        Truck& operator =(const Truck& rightSide);
        Truck(const Truck &rigtSide);
        ~Truck();

        ///output function that print all info about object on screen
        void output();

    private:
        int capacity;
};

#endif
