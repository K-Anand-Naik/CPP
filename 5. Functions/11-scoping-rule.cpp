#include<iostream>
#include<cstring>
using namespace std;

int x = 10;

int main()
{
    int x = 12;
    {
        int x = 13;
        cout << x <<endl; //--> gives 13
    }
    cout << x <<endl; //--> gives 12

    cout<<::x<<endl; // :: = scope resolution x -- which is accessing the global variable
}