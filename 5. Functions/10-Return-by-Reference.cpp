#include<iostream>
using namespace std;

int & fun(int &x)
{
    return x;
}

int main()
{
    int a = 10;
    fun(a)=26;  // taking a value as reference and just printing it
    cout<<a<<endl;
}