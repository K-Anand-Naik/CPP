#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout<<&a<<" "<<&b<<endl;// address of a and be are same as x and y
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//Note: we should not write any complex codes inside void main funtions like loops and all 

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout<<&x<<" "<<&y<<endl; // same address as a and b (formal variables)
    cout << x << " " << y << endl;
}