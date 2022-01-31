#include<iostream>
using namespace std;
float fun()
{
    return 2.3f;
}
int main()
{
    // double d=12.3;
    // int i=9;
    // // auto x=2*5.7+'a';
    // auto x=2*d+i;
    // cout<<x; 
    
    
    // auto x=fun();
    // cout<<x; 

    int x=10;
    float y=90.5;

    decltype(y) z=12.3; // which will take type from existing variable type
}