#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class BasicCar
{
public:
    virtual void start()
    {
        cout << "BasicCar started:";
    }
};
class AdvancedCar:public BasicCar
{
public:
    void start()
    {
        cout << "AdvancedCar started:";
    }
};

int main()
{
    // BasicCar *p=new AdvancedCar();// BasicCar Pointer poiting to AdvanceCar object
    //                                // so it will start as basicCar only 
    // // the function is called based on pointer not on object, 
    // // here pointer is of BasicCar
    // p->start();//--> this will give the basicCar function
    //upto this line in main function without virtual function, se below

    BasicCar *p=new AdvancedCar();
    p->start(); //--> this will give advancedCar function


}
