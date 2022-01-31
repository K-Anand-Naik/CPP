#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car started!"<< endl;
    }
};

class AdvanceCar:public BasicCar
{
public:
    void PlayMusic()
    {
        cout << "Plays Music!"<< endl;
    }
};

int main()
{
    // AdvanceCar a;
         // a.start();
         // a.PlayMusic();

    // BasicCar *p=&a;
    // p->start();
        // p->PlayMusic();// can not be accessed, 
        //because it is not a function base class

    // BasicCar b;
    // AdvanceCar *q=&b;

    // q->start();
    // q->PlayMusic();

    // The above code from 35 to 39 which is not possible

}