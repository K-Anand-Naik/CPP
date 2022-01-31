#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class base
{
public:
    base(){cout<<"Non-param of base: "<<endl;}
    base(int x){cout<<"Param of base: "<<x<<endl;}
};

class derived:public base
{
public:
    derived(){cout<<"Non-param of derived: "<<endl;}
    derived(int y){cout<<"Param of derived: "<<y<<endl;}
    derived(int x,int y):base(x)
    {
        cout<<"Param of derived: "<<y<<endl;
    }
};

int main()
{
    // derived d; //going to to derived class and not printing it,
                // then going to base class there printing default(non-param of base),
                // and then coming to derived class and then printing non-param of derived:

    // derived d(10);
    derived d(12,34); // 12 ia for base class and 34 is for derived class
}

