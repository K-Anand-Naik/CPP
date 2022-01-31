#include<iostream>    
#include<cstring>
#include<cmath>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area" << endl;
    }
};
class cuboid:public Rectangle
{
public:
    void volume()
    {
        cout << "Cuboid volume" <<endl;
    }
    
};

int main()
{
    cuboid c;
    Rectangle *p=&c; //creating pointer of Rectangle, 
                        //and to that assigning object of cuboid
    p->area();
    // p->volume();//'class Rectangle' has no member named 'volume'
                //p->volume();
                //we are getting this kind of error
                // because fun2 is not a member of Rectangle class
    
    
    // Rectangle r;
    // cuboid *q=&r;//which is not possible
}