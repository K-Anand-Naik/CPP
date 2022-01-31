#include<iostream>
#include<cstring>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        // cout << n <<endl;
        // fun(n-1); // which will print from 10 to 1
    
        fun(n-1);
        cout << n <<endl; // which will print from 1 to 10

    }
}

int main()
{
    int x = 10;
    fun(x);
}