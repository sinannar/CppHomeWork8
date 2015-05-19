#include<vector>
#include<string>
#include<iostream>
#include "graduate.h"

using namespace std;

///getters
string Graduate::getUniGrad()
{
    return uniGrad;
}

double Graduate::getGpaGrad()
{
    return gpaGrad;
}

///setters
void Graduate::setUniGrad(string uniName)
{
    uniGrad=uniName;
}

void Graduate::setGpaGrad(double gpa)
{
    gpaGrad=gpa;
}


///constructors
Graduate::Graduate():
Undergraduate(),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name):
Undergraduate(name),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money):
Undergraduate(name,money),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money,char *ssnum,int sizeOfSsn):
Undergraduate(name,money,ssnum,sizeOfSsn),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName):
Undergraduate(name,money,ssnum,sizeOfSsn,uniUndName),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd):
Undergraduate(name,money,ssnum,sizeOfSsn,uniUndName,gpaUnd),
uniGrad("-"),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd,string uniName):
Undergraduate(name,money,ssnum,sizeOfSsn,uniUndName,gpaUnd),
uniGrad(uniName),
gpaGrad(0.0)
{
/*no code necessary*/
}

Graduate::Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd,string uniName,double gpaGrad):
Undergraduate(name,money,ssnum,sizeOfSsn,uniUndName,gpaUnd),
uniGrad(uniName),
gpaGrad(gpaGrad)
{
/*no code necessary*/
}


///big three
Graduate& Graduate::operator =(const Graduate& rightSide)
{
    Undergraduate::operator=(rightSide);
    uniGrad=rightSide.uniGrad;
    gpaGrad=rightSide.gpaGrad;

    return *this;
}

Graduate::Graduate(const Graduate &rigtSide):
Undergraduate(rigtSide.getName(),rigtSide.getSalary(),rigtSide.getSsn(),rigtSide.getSsnSize(),rigtSide.getUniUndGrad(),rigtSide.getGpaUndGrad()),
uniGrad(rigtSide.uniGrad),
gpaGrad(rigtSide.gpaGrad)
{

}

Graduate::~Graduate()
{

}

/*OUTPUTS REWRITING*/
void Graduate::output()
{
    cout<<"Graduate student name:"<<getName()<<endl;
    cout<<"Graduate student ssn:"<<getSsn()<<endl;
    cout<<"Graduate student salary:"<<getSalary()<<endl;
    cout<<"Graduate students undergraduate university :"<<getUniUndGrad()<<endl;
    cout<<"Graduate student undergraduategpa:"<<getGpaUndGrad()<<endl;
    cout<<"Graduate student graduate university:"<<uniGrad<<endl;
    cout<<"Graduate student graduate gpa:"<<gpaGrad<<endl;
}
