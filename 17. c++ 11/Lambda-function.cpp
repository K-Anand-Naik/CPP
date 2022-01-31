#include<iostream>
using namespace std;

template<typename T>
void fun(T p)
{
    p();
}
int main()
{
    
    // [](){cout<<"Hello"<<endl;}();
    // [](int x, int y) {cout<<"Sum is: "<<x+y<<endl;}(10,3);
    // cout<<"Sum is: "<<[](int x, int y) {return x+y;}(10,3);
    // cout<<endl;
    // int a=[](int x, int y)->int {return x+y;}(10,3);
    // cout<<"Sum is: "<<a;

    int a=10;
    //[a](){cout<<a<<endl;}();
    // auto f=[&a](){cout<<a<<endl;};
    auto f=[&a](){cout<<a++<<endl;};
    // f();
    // a++;
    // f();

    // f();
    // a++;
    // f();

    fun(f);
    fun(f); 
}