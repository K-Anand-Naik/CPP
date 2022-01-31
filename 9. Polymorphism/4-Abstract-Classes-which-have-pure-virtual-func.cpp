//Abstract-Classes--> which have atleast one pure virtual fuctions in it

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class car
{
public:
    virtual void start()=0;// without =0 we can make an object of car in main fun
    virtual void stop()=0; // but with =0 we can not make object in main func
                           // but we can create only the poiter of that car class
   // the purpose of this pur virtual function is to make the car
   // the child/Derived classes to make them use this functions
   //i.e, derived classes should override these functions        
};

class innova:public car
{
public:
    void start(){cout<<"Innova Started:";}
    void stop(){cout<<"Innova Stopped:";}
};

class swift:public car
{
public:
    void start(){cout<<"Swift Started:";}
    void stop(){cout<<"Swift Stopped:";}
};

int main()
{
    car *p=new innova();
    p->start();

    cout<<endl;

    p = new swift();
    p->start();

    //which is known as Run time polymorphism

}