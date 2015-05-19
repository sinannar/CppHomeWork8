#include<iostream>
#include<string>
#include"vehicle.h"

using namespace std;

///getters
string Vehicle::getModel()const
{
    return model;
}

char* Vehicle::getEngineNo()const
{
    return engineNo;
}

int Vehicle::getPrice()const
{
    return price;
}

int Vehicle::getEngSize()const
{
    return engSize;
}


///setters
void Vehicle::setModel(string carModel)
{
    model=carModel;
}

void Vehicle::setPrice(int money)
{
    price=money;
}

void Vehicle::setEngineNo(char *eng,int engineSize)
{

    if(engineNo!=NULL)
    delete[] engineNo;

    engineNo=new char[engineSize];
    engSize=engineSize;
    for(int i=0;i<engSize;++i)
    engineNo[i]=eng[i];
}

void Vehicle::setEngSize(int engsize)
{
    engSize=engsize;
}

///constructors
Vehicle::Vehicle()
{
    engineNo = NULL;//initializing with NULL is importnt firstly
    setModel("-");
    setPrice(0);
    setEngSize(1);
    setEngineNo("-",1);
}

Vehicle::Vehicle(string modell)
{
    engineNo = NULL;//initializing with NULL is importnt firstly
    setModel(modell);
    setPrice(0);
    setEngSize(1);
    setEngineNo("-",1);
}

Vehicle::Vehicle(string modell,int money)
{
    engineNo = NULL;//initializing with NULL is importnt firstly
    setModel(modell);
    setPrice(money);
    setEngSize(1);
    setEngineNo("-",1);
}

Vehicle::Vehicle(string modell,int money,char *eng,int engSize)
{
    engineNo = NULL;//initializing with NULL is importnt firstly
    setModel(modell);
    setPrice(money);
    setEngSize(engSize);
    setEngineNo(eng,engSize);
}


///big three
Vehicle& Vehicle::operator =(const Vehicle& rightSide)
{
    if(engSize!=rightSide.engSize)
    {
        engSize=rightSide.engSize;
        delete[] engineNo;
        engineNo=new char[engSize];
    }
    model=rightSide.model;
    price=rightSide.price;

    for(int i=0;i<engSize;++i)
    engineNo[i]=rightSide.engineNo[i];

    return *this;
}

Vehicle::Vehicle(const Vehicle &rigtSide):
model(rigtSide.getModel()),
engSize(rigtSide.getEngSize()),
price(rigtSide.getPrice())
{
    engineNo=new char[engSize];
    for(int i=0;i<engSize;++i)
    engineNo[i]=rigtSide.engineNo[i];
}

Vehicle::~Vehicle()
{

    if (engineNo)
    delete[] engineNo;

}

/*OUTPUTS REWRITING*/
void Vehicle::output()
{
    cout<<"vehicle model:"<<model<<endl;
    cout<<"vehicle price:"<<price<<endl;
    cout<<"vehicle engine no:"<<engineNo<<endl;
}
