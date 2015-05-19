#ifndef PERSONHEADER
#define PERSONHEADER

#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Person
{
    public:

        ///getters
        string getName()const;
        char* getSsn()const;
        double getSalary()const;
        int getSsnSize()const;


        ///setters
        void setName(string name);
        void setSsn(char* ssnum,int size);
        void setSalary(double money);

        ///constructors
        Person();
        Person(string name);
        Person(string name,double money);
        Person(string name,double money,char *ssnum,int ssnsize);

        ///big three
        Person& operator =(const Person& rightSide);
        Person(const Person &rigtSide);
        ~Person();

        ///output function that print all info about object on screen
        void output();

    private:
        string name;
        char *ssn;
        int ssnsize;
        double salary;
};

#endif
