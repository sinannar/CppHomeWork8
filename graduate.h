#ifndef GRADUATEHEADER
#define GRADUATEHEADER

#include<vector>
#include<string>
#include<iostream>
#include "undergraduate.h"

using namespace std;

class Graduate : public Undergraduate
{
    public:
        ///getters
        string getUniGrad();
        double getGpaGrad();

        ///setters
        void setUniGrad(string uniName);
        void setGpaGrad(double gpa);

        ///constructors
        Graduate();
        Graduate(string name);
        Graduate(string name,double money);
        Graduate(string name,double money,char *ssnum,int sizeOfSsn);
        Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName);
        Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd);
        Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd,string uniName);
        Graduate(string name,double money,char *ssnum,int sizeOfSsn,string uniUndName,double gpaUnd,string uniName,double gpaGrad);

        ///big three
        Graduate& operator =(const Graduate& rightSide);
        Graduate(const Graduate &rigtSide);
        ~Graduate();

        ///output function that print all info about object on screen
        void output();

    private:
        string uniGrad;
        double gpaGrad;

};

#endif
