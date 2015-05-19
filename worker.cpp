#include<vector>
#include<string>
#include<iostream>
#include "worker.h"

using namespace std;

///getters
string Worker::getJob()
{
    return job;
}

///setters
void Worker::setJob(string workerjob)
{
    job=workerjob;
}

///constructors
Worker::Worker():
Person(),
job("-")
{
/*no code necessary*/
}

Worker::Worker(string name):
Person(name),
job("-")
{

}

Worker::Worker(string name,double money):
Person(name,money),
job("-")
{

}

Worker::Worker(string name,double money,char *ssnum,int ssnsize):
Person(name,money,ssnum,ssnsize),
job("-")
{

}

Worker::Worker(string name,double money,char *ssnum,int ssnsize,string workerjob):
Person(name,money,ssnum,ssnsize),
job(workerjob)
{

}


///big three
Worker& Worker::operator =(const Worker& rightSide)
{
    Person::operator=(rightSide);
    job=rightSide.job;
    return *this;
}

Worker::Worker(const Worker &rigtSide):
Person(rigtSide.getName(),rigtSide.getSalary(),rigtSide.getSsn(),rigtSide.getSsnSize()),
job(rigtSide.job)
{

}

Worker::~Worker()
{

}

/*OUTPUTS REWRITING*/
void Worker::output()
{
    cout<<"Worker name:"<<getName()<<endl;
    cout<<"Worker ssn:"<<getSsn()<<endl;
    cout<<"Worker salary:"<<getSalary()<<endl;
    cout<<"Worker job:"<<job<<endl;
}
