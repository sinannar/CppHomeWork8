#ifndef VEHİCLEHEADER
#define VEHİCLEHEADER

#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Vehicle
{
    public:

        ///getters
        string getModel()const;
        char* getEngineNo()const;
        int getPrice()const;
        int getEngSize()const;

        ///setters
        void setModel(string model);
        void setPrice(int money);
        void setEngineNo(char *eng,int engSize);
        void setEngSize(int engsize);
        ///constructors
        Vehicle();
        Vehicle(string modell);
        Vehicle(string modell,int money);
        Vehicle(string modell,int money,char *eng,int engSize);

        ///big three
        Vehicle& operator =(const Vehicle& rightSide);
        Vehicle(const Vehicle &rigtSide);
        ~Vehicle();

        ///output function that print all info about object on screen
        void output();

    private:
        string model;
        int price;
        char *engineNo;
        int engSize;
};

#endif
