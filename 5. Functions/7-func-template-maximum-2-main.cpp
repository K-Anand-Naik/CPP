#include<iostream>
using namespace std;
template <class T>
T maxim(T x, T y) 
{
    return x>y?x:y; //if x>y then x otherwise y
}

int main()
{
    cout << maxim(10.4,23.4)<<endl; // these are doubles not floats
    cout << maxim(12,34)<<endl;
    cout << maxim(12.3f,12.5f);   // these are floats
}