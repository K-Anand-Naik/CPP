#include<iostream>
using namespace std;

void swap(int *a, int *b)// here a and b are pointers, and derefering by the * sign
// here formal variables are pointers

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x=10,y=20;
    swap(&x , &y); // here in call by address method 
    //we can modify the actual value
    //we are passing adderesses of x ad y

    cout<<x<<" "<<y<<endl;
}