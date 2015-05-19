#include<vector>
#include<string>
#include<iostream>
#include"person.h"

using namespace std;

///getters
string Person::getName()const
{
    return name;
}

char* Person::getSsn()const
{
    return ssn;
}

double Person::getSalary()const
{
    return salary;
}

int Person::getSsnSize()const
{
    return ssnsize;
}

///setters
void Person::setName(string thename)
{
    name=thename;
}

void Person::setSsn(char* ssnum,int thesize)
{
    if(ssn!=NULL)
    delete[] ssn;

    ssn=new char[thesize];
    for(int i=0;i<thesize;++i)
    ssn[i]=ssnum[i];
    ssnsize=thesize;
}

void Person::setSalary(double money)
{
    salary=money;
}


///constructors
Person::Person()
{
    ssn=NULL;//initializing with NULL is importnt firstly
    setName("NONAME");
    setSsn("-",1);
    setSalary(0.0);
}

Person::Person(string name)
{
    ssn=NULL;//initializing with NULL is importnt firstly
    setName(name);
    setSsn("-",1);
    setSalary(0.0);
}

Person::Person(string name,double money)
{
    ssn=NULL;//initializing with NULL is importnt firstly
    setName(name);
    setSsn("-",1);
    setSalary(money);
}

Person::Person(string name,double money,char *ssnum,int ssnsize)
{
    ssn=NULL;//initializing with NULL is importnt firstly
    setName(name);
    setSsn(ssnum,ssnsize);
    setSalary(money);
}


///big three
Person& Person::operator =(const Person& rightSide)
{

    if(ssn!=rightSide.ssn)
    {
        delete[] ssn;
        ssn=new char[rightSide.ssnsize];
    }
    name=rightSide.name;
    salary=rightSide.salary;
    ssnsize=rightSide.ssnsize;

    for(int i=0;i<ssnsize;++i)
    ssn[i]=rightSide.ssn[i];

    return *this;

}

Person::Person(const Person &rightSide):
name(rightSide.getName()),
ssnsize(rightSide.getSsnSize()),
salary(rightSide.getSalary())
{
    ssn=new char[ssnsize];
    for(int i=0;i<ssnsize;++i)
    ssn[i]=rightSide.ssn[i];
}

Person::~Person()
{
    if(ssn)
    delete[] ssn;
}

/*OUTPUTS REWRITING*/
void Person::output()
{
    cout<<"person name:"<<name<<endl;
    cout<<"person ssn:"<<ssn<<endl;
    cout<<"person salary:"<<salary<<endl;
}

