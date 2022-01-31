#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    //string s1=nullptr;//this function wont work for this nullptr
    cout<<"Enter the string of your interest: ";
    getline(cin, s1);
    s1.resize(50);
    cout<<s1.capacity();
    //cout<<s1.resize(30);
    return 0;
}