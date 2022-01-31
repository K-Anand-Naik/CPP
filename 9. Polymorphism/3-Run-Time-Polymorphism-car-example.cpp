#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class car
{
public:
    virtual void start()=0;
    virtual void stop()=0;
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