#include<iostream>
#include<cstring>
using namespace std;

// int v = 0; //which is GLobal variable

void fun()
{
    static int v=0; // which is static variable, which called again and again every time,
    // just try without static you will get 1 only for every time. not 1,2,3
    int a = 5;
    v++;
    cout<<a<<" "<<v<<endl;
}

int main()
{
    fun();
    fun();
    fun();
}