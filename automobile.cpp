#include<vector>
#include<string>
#include<iostream>
#include "automobile.h"

///getters
int Automobile::getNumOfDoors()
{
    return numOfDoors;
}

///setters
void Automobile::setNumOfDoors(int door)
{
    numOfDoors=door;
}

///constructors
Automobile::Automobile():
Vehicle(),
numOfDoors(0)
{

}
Automobile::Automobile(string modell):
Vehicle(modell),
numOfDoors(0)
{

}

Automobile::Automobile(string modell,int money):
Vehicle(modell,money),
numOfDoors(0)
{

}

Automobile::Automobile(string modell,int money,char *eng,int engSize):
Vehicle(modell,money,eng,engSize),
numOfDoors(0)
{

}

Automobile::Automobile(string modell,int money,char *eng,int engSize,int numDoors):
Vehicle(modell,money,eng,engSize),
numOfDoors(numDoors)
{

}


///big three
Automobile& Automobile::operator =(const Automobile& rightSide)
{
    Vehicle::operator =(rightSide);
    numOfDoors=rightSide.numOfDoors;
}

Automobile::Automobile(const Automobile &rigtSide):
Vehicle(rigtSide.getModel(),rigtSide.getPrice(),rigtSide.getEngineNo(),rigtSide.getEngSize()),
numOfDoors(rigtSide.numOfDoors)
{

}

Automobile::~Automobile()
{

}

/*OUTPUTS REWRITING*/
void Automobile::output()
{
    cout<<"automobile model:"<<getModel()<<endl;
    cout<<"automobile price:"<<getPrice()<<endl;
    cout<<"automobile engine no:"<<getEngineNo()<<endl;
    cout<<"automobile num of doors no:"<<numOfDoors<<endl;
}
