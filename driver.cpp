#include <iostream>
#include <string>

#include "automobile.h"
#include "graduate.h"
#include "person.h"
#include "truck.h"
#include "undergraduate.h"
#include "vehicle.h"
#include "worker.h"

//#define TESTVEHİCLE
//#define TESTPERSON
//#define TESTUNDERGRADUATE
//#define TESTAUTOMOBILE
//#define TESTGRADUATE
//#define TESTTRUCK
//#define TESTWORKER
//#define TESTINGREDEFINITIONFORPERSON
//#define TESTINGREDEFINITIONFORVEHİCLE

void testForPerson(Person &testObject);
void testForVehicle(Vehicle &testObject);



int main()
{
#ifdef TESTVEHİCLE
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Vehicle a;
    Vehicle b("aaa");
    Vehicle c("aaa",2);
    Vehicle d("aaa",2,"bbb",3);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<d.getModel()<<endl;
    cout<<d.getEngineNo()<<endl;
    cout<<d.getEngSize()<<endl;
    cout<<d.getPrice()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    a.setModel("asd");
    a.setPrice(100.20);
    a.setEngineNo("wh298al",7);
    a.setEngSize(7);
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    d=a;
    cout<<d.getModel()<<endl;
    cout<<d.getEngineNo()<<endl;
    cout<<d.getEngSize()<<endl;
    cout<<d.getPrice()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    d.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;

#endif

#ifdef TESTPERSON
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Person a;
    Person b("aliveli");
    Person c("alivelihıyar",100);
    Person d("alialiali",100,"123321123321",12);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<d.getName()<<endl;
    cout<<d.getSsn()<<endl;
    cout<<d.getSalary()<<endl;
    cout<<d.getSsnSize()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    d.setName("asd");
    d.setSalary(100.200);
    d.setSsn("asd",3);
    cout<<d.getName()<<endl;
    cout<<d.getSsn()<<endl;
    cout<<d.getSalary()<<endl;
    cout<<d.getSsnSize()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    cout<<"before assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    a=d;
    cout<<"after assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    a.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTUNDERGRADUATE
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Undergraduate a;
    Undergraduate b("bbb");
    Undergraduate c("ccc",100);
    Undergraduate d("ddd",100,"asd",3);
    Undergraduate e("eee",100,"cbg",3,"cambridge");
    Undergraduate g("ggg",100,"ssg",3,"cge",2.2);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<g.getName()<<endl;
    cout<<g.getSsn()<<endl;
    cout<<g.getSalary()<<endl;
    cout<<g.getSsnSize()<<endl;
    cout<<g.getUniUndGrad()<<endl;
    cout<<g.getGpaUndGrad()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    b.setName("asd");
    b.setSalary(100.200);
    b.setSsn("asd",3);
    b.setUniUndGrad("asddsa");
    b.setGpaUndGrad(2.3);
    cout<<b.getName()<<endl;
    cout<<b.getSsn()<<endl;
    cout<<b.getSalary()<<endl;
    cout<<b.getSsnSize()<<endl;
    cout<<b.getUniUndGrad()<<endl;
    cout<<b.getGpaUndGrad()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    cout<<"before assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getUniUndGrad()<<endl;
    cout<<a.getGpaUndGrad()<<endl;
    a=d;
    cout<<"after assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getUniUndGrad()<<endl;
    cout<<a.getGpaUndGrad()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    a.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTGRADUATE

    cout<<"TESTING CONSTRUCTORS"<<endl;
    Graduate a;
    Graduate b("bbb");
    Graduate c("ccc",100);
    Graduate d("ddd",100,"asd",3);
    Graduate e("eee",100,"cbg",3,"cambridge");
    Graduate g("ggg",100,"ssg",3,"cge",2.2);
    Graduate h("ggg",100,"ssg",3,"cge",2.2,"GYTE");
    Graduate k("ggg",100,"ssg",3,"cge",2.2,"MIT",3.0);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<g.getName()<<endl;
    cout<<g.getSsn()<<endl;
    cout<<g.getSalary()<<endl;
    cout<<g.getSsnSize()<<endl;
    cout<<g.getUniUndGrad()<<endl;
    cout<<g.getGpaUndGrad()<<endl;
    cout<<g.getUniGrad()<<endl;
    cout<<g.getGpaGrad()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    b.setName("asd");
    b.setSalary(100.200);
    b.setSsn("asd",3);
    b.setUniUndGrad("asddsa");
    b.setGpaUndGrad(2.3);
    b.setUniGrad("GYYT");
    b.setGpaGrad(5.5);
    cout<<b.getName()<<endl;
    cout<<b.getSsn()<<endl;
    cout<<b.getSalary()<<endl;
    cout<<b.getSsnSize()<<endl;
    cout<<b.getUniUndGrad()<<endl;
    cout<<b.getGpaUndGrad()<<endl;
    cout<<b.getUniGrad()<<endl;
    cout<<b.getGpaGrad()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    cout<<"before assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getUniUndGrad()<<endl;
    cout<<a.getGpaUndGrad()<<endl;
    cout<<a.getUniGrad()<<endl;
    cout<<a.getGpaGrad()<<endl;
    a=b;
    cout<<"after assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getUniUndGrad()<<endl;
    cout<<a.getGpaUndGrad()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    a.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTWORKER
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Worker a;
    Worker b("bbb");
    Worker c("ccc",100);
    Worker d("ddd",100,"asd",3);
    Worker e("eee",100,"cbg",3,"EMPLOYEE");
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<e.getName()<<endl;
    cout<<e.getSsn()<<endl;
    cout<<e.getSalary()<<endl;
    cout<<e.getSsnSize()<<endl;
    cout<<e.getJob()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    b.setName("asd");
    b.setSalary(100.200);
    b.setSsn("asd",3);
    b.setJob("asddsa");
    cout<<b.getName()<<endl;
    cout<<b.getSsn()<<endl;
    cout<<b.getSalary()<<endl;
    cout<<b.getSsnSize()<<endl;
    cout<<b.getJob()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    cout<<"before assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getJob()<<endl;
    a=e;
    cout<<"after assignment"<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getSsn()<<endl;
    cout<<a.getSalary()<<endl;
    cout<<a.getSsnSize()<<endl;
    cout<<a.getJob()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    a.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTTRUCK
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Truck a;
    Truck b("aaa");
    Truck c("aaa",2);
    Truck d("aaa",2,"bbb",3);
    Truck e("aaa",2,"bbb",3,100);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;


    cout<<"TESTING GETTERS"<<endl;
    cout<<e.getModel()<<endl;
    cout<<e.getEngineNo()<<endl;
    cout<<e.getEngSize()<<endl;
    cout<<e.getPrice()<<endl;
    cout<<e.getCapacity()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<a.getCapacity()<<endl;
    a.setModel("asd");
    a.setPrice(100.20);
    a.setEngineNo("wh298al",7);
    a.setEngSize(7);
    a.setCapacity(123321);
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<a.getCapacity()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    b=a;
    cout<<b.getModel()<<endl;
    cout<<b.getEngineNo()<<endl;
    cout<<b.getEngSize()<<endl;
    cout<<b.getPrice()<<endl;
    cout<<b.getCapacity()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    b.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTAUTOMOBILE
    cout<<"TESTING CONSTRUCTORS"<<endl;
    Automobile a;
    Automobile b("aaa");
    Automobile c("aaa",2);
    Automobile d("aaa",2,"bbb",3);
    Automobile e("aaa",2,"bbb",3,2);
    cout<<"IF YOU SEE THIS:CONSTRUCTORS WORK WELL"<<endl;

    cout<<"TESTING GETTERS"<<endl;
    cout<<e.getModel()<<endl;
    cout<<e.getEngineNo()<<endl;
    cout<<e.getEngSize()<<endl;
    cout<<e.getPrice()<<endl;
    cout<<e.getNumOfDoors()<<endl;
    cout<<"IF YOU SEE THIS:GETTERS WORK WELL"<<endl;

    cout<<"TESTING SETTERS"<<endl;
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<a.getNumOfDoors()<<endl;
    a.setModel("asd");
    a.setPrice(100.20);
    a.setEngineNo("wh298al",7);
    a.setEngSize(7);
    a.setNumOfDoors(5);
    cout<<a.getModel()<<endl;
    cout<<a.getEngineNo()<<endl;
    cout<<a.getEngSize()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<a.getNumOfDoors()<<endl;
    cout<<"IF YOU SEE THIS:SETTERS WORK WELL"<<endl;

    cout<<"TESTING ASSIGNMENT"<<endl;
    b=a;
    cout<<b.getModel()<<endl;
    cout<<b.getEngineNo()<<endl;
    cout<<b.getEngSize()<<endl;
    cout<<b.getPrice()<<endl;
    cout<<b.getNumOfDoors()<<endl;
    cout<<"IF YOU SEE THIS:ASSIGNMENT WORK WELL"<<endl;

    cout<<"TESTING OUTPUT FUNCTION"<<endl;
    b.output();
    cout<<"END OF TESTING OUTPUT FUNCTION"<<endl;
#endif

#ifdef TESTINGREDEFINITIONFORPERSON
    Person a("aaaaaaaa",100,"123321123321",12);
    Undergraduate b("bbbbb",100,"ssg",3,"cge",2.2);
    Graduate c("cccccc",100,"ssg",3,"cge",2.2,"MIT",3.0);
    Worker d("dddd",100,"cbg",3,"EMPLOYEE");

    cout<<"------"<<endl;
    cout<<"person"<<endl;
    testForPerson(a);
    cout<<"------"<<endl;
    cout<<"undergraduate"<<endl;
    testForPerson(b);
    cout<<"------"<<endl;
    cout<<"graduate"<<endl;
    testForPerson(c);
    cout<<"------"<<endl;
    cout<<"worker"<<endl;
    testForPerson(d);
    cout<<"------"<<endl;

#endif

#ifdef TESTINGREDEFINITIONFORVEHİCLE
    Vehicle a("aaa",2,"aaa",3);
    Truck b("bbb",2,"bbb",3,100);
    Automobile c("ccc",2,"ccc",3,2);

    cout<<"------"<<endl;
    cout<<"vehicle"<<endl;
    testForVehicle(a);
    cout<<"------"<<endl;
    cout<<"truck"<<endl;
    testForVehicle(b);
    cout<<"------"<<endl;
    cout<<"automobile"<<endl;
    testForVehicle(c);
    cout<<"------"<<endl;
#endif
 return 0;
}



void testForPerson(Person &testObject)
{
        testObject.output();
}

void testForVehicle(Vehicle &testObject)
{
        testObject.output();
}
