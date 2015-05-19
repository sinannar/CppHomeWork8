#include<vector>
#include<string>
#include<iostream>
#include"undergraduate.h"

using namespace std;

///getters
string Undergraduate::getUniUndGrad()const
{
    return uniUndGrad;
}

double Undergraduate::getGpaUndGrad()const
{
    return gpaUndGrad;
}


///setters
void Undergraduate::setUniUndGrad(string uniName)
{
    uniUndGrad=uniName;
}

void Undergraduate::setGpaUndGrad(double gpa)
{
    gpaUndGrad=gpa;
}


///constructors
Undergraduate::Undergraduate():
Person(),
uniUndGrad("-"),
gpaUndGrad(0.0)
{
/*no code necessary*/
}

Undergraduate::Undergraduate(string name):
Person(name),
uniUndGrad("-"),
gpaUndGrad(0.0)
{
/*no code necessary*/
}

Undergraduate::Undergraduate(string name,double money):
Person(name,money),
uniUndGrad("-"),
gpaUndGrad(0.0)
{
/*no code necessary*/
}

Undergraduate::Undergraduate(string name,double money,char *ssnum,int sizeOfSsn):
Person(name,money,ssnum,sizeOfSsn),
uniUndGrad("-"),
gpaUndGrad(0.0)
{
/*no code necessary*/
}

Undergraduate::Undergraduate(string name,double money,char *ssnum,int sizeOfSsn,string uniName):
Person(name,money,ssnum,sizeOfSsn),
uniUndGrad(uniName),
gpaUndGrad(0.0)
{
/*no code necessary*/
}

Undergraduate::Undergraduate(string name,double money,char *ssnum,int sizeOfSsn,string uniName,double gpa):
Person(name,money,ssnum,sizeOfSsn),
uniUndGrad("-"),
gpaUndGrad(gpa)
{
/*no code necessary*/
}


///big three
Undergraduate& Undergraduate::operator =(const Undergraduate& rightSide)
{
    Person::operator=(rightSide);
    uniUndGrad=rightSide.uniUndGrad;
    gpaUndGrad=rightSide.gpaUndGrad;
    return *this;
}

Undergraduate::Undergraduate(const Undergraduate &rigtSide):
Person(rigtSide.getName(),rigtSide.getSalary(),rigtSide.getSsn(),rigtSide.getSsnSize()),
uniUndGrad(rigtSide.uniUndGrad),
gpaUndGrad(rigtSide.gpaUndGrad)
{

}

Undergraduate::~Undergraduate()
{
/*nothing to done cause there is no pointer*/
}

/*OUTPUTS REWRITING*/
void Undergraduate::output()
{
    cout<<"undergraduate student name:"<<getName()<<endl;
    cout<<"undergraduate student ssn:"<<getSsn()<<endl;
    cout<<"undergraduate student salary:"<<getSalary()<<endl;
    cout<<"undergraduate student university:"<<uniUndGrad<<endl;
    cout<<"undergraduate student gpa:"<<gpaUndGrad<<endl;
}

