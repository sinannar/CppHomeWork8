#ifndef UNDERGRADUATEHEADER
#define UNDERGRADUATEHEADER

#include<vector>
#include<string>
#include<iostream>
#include"person.h"

using namespace std;

class Undergraduate : public Person
{
    public:
        ///getters
        string getUniUndGrad()const;
        double getGpaUndGrad()const;

        ///setters
        void setUniUndGrad(string uniName);
        void setGpaUndGrad(double gpa);

        ///constructors
        Undergraduate();
        Undergraduate(string name);
        Undergraduate(string name,double money);
        Undergraduate(string name,double money,char *ssnum,int sizeOfSsn);
        Undergraduate(string name,double money,char *ssnum,int sizeOfSsn,string uniName);
        Undergraduate(string name,double money,char *ssnum,int sizeOfSsn,string uniName,double gpa);

        ///big three
        Undergraduate& operator =(const Undergraduate& rightSide);
        Undergraduate(const Undergraduate &rigtSide);
        ~Undergraduate();

        ///output function that print all info about object on screen
        void output();

    private:
        string uniUndGrad;
        double gpaUndGrad;
};

#endif
