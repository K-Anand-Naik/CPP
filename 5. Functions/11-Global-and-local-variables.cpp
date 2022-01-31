#include<iostream>
#include<cstring>
using namespace std;

//creating a global variable-->
int g=12;

// void fun()
// {
//     int a = 10;
//     a++;
//     g++;
//     cout << a <<" "<<g<<endl;
// }

// int main()
// {
//     //g++;
//     fun();
//     cout<<g;
// }


void fun()
{
    int g = 10;
    {
        int g = 0;
        g++;
        cout << g <<endl; //--> gives 1
    }
    cout<<g<<endl; //--> gives 10
}

int main()
{
    fun();
    cout<<g; //--> gives 12
}