#include<iostream>
#include<cstring>
using namespace std;

int maximum(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int main()
{
    int x,y,z;
    cout << "Enter value x: ";
    cin >> x;

    cout << "Enter value y: ";
    cin >> y;

    cout << "Enter value z: ";
    cin >> z;

    cout<<"The maximum value is: "<<maximum(x,y,z);


}