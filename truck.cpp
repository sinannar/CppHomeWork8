#include<vector>
#include<string>
#include<iostream>
#include "truck.h"

using namespace std;

///getters
int Truck::getCapacity()
{
    return capacity;
}

///setters
void Truck::setCapacity(int cpcty)
{
    capacity=cpcty;
}

///constructors
Truck::Truck():
Vehicle(),
capacity(0)
{
//No code necessary
}

Truck::Truck(string modell):
Vehicle(modell),
capacity(0)
{
//No code necessary
}

Truck::Truck(string modell,int money):
Vehicle(modell,money),
capacity(0)
{
//No code necessary
}

Truck::Truck(string modell,int money,char *eng,int engSize):
Vehicle(modell,money,eng,engSize),
capacity(0)
{
//No code necessary
}

Truck::Truck(string modell,int money,char *eng,int engSize,int capacity):
Vehicle(modell,money,eng,engSize),
capacity(capacity)
{
//No code necessary
}


///big three
Truck& Truck::operator =(const Truck& rightSide)
{
    Vehicle::operator =(rightSide);
    capacity=rightSide.capacity;
    return *this;
}

Truck::Truck(const Truck &rigtSide):
Vehicle(rigtSide.getModel(),rigtSide.getPrice(),rigtSide.getEngineNo(),rigtSide.getEngSize()),
capacity(rigtSide.capacity)
{

}

Truck::~Truck()
{

}

/*OUTPUTS REWRITING*/
void Truck::output()
{
    cout<<"truck model:"<<getModel()<<endl;
    cout<<"truck price:"<<getPrice()<<endl;
    cout<<"truck engine no:"<<getEngineNo()<<endl;
    cout<<"truck capacity:"<<capacity<<endl;
}
