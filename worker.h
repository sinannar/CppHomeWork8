#ifndef WORKERHEADER
#define WORKERHEADER

#include<vector>
#include<string>
#include<iostream>
#include "person.h"

using namespace std;

class Worker : public Person
{
    public:
        ///getters
        string getJob();

        ///setters
        void setJob(string workerjob);

        ///constructors
        Worker();
        Worker(string name);
        Worker(string name,double money);
        Worker(string name,double money,char *ssnum,int ssnsize);
        Worker(string name,double money,char *ssnum,int ssnsize,string workerjob);

        ///big three
        Worker& operator =(const Worker& rightSide);
        Worker(const Worker &rigtSide);
        ~Worker();

        ///output function that print all info about object on screen
        void output();

    private:
        string job;

};

#endif
