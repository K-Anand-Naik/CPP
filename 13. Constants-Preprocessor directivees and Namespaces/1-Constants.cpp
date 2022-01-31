#include<iostream>
using namespace std;

// class Demo
// {
// public:
//     int x=10;
//     int y=20;
//     void Display() const // by using const here we can not modify the x and y values
//     {
//         // x++;
//         // y++;
//         cout<<x<<" "<<y<<endl;
//     } 
// };

// int main()
// {
//     Demo d;
//     d.Display();
// }
void fun(const int &a, const int &b) // if we use const inside the function we cant modify a and b
{
    cout<<a<<" "<<b<<endl;
    //a++; // modifying a is nothing but modifying x in the next function
}
int main()
{
    int x=10;
    int y=20;
    fun(x,y);
    cout<<"Main: "<<x<<" "<<y<<endl;
}