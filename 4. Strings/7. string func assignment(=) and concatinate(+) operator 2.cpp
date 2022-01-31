#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter the 1st string: ";
    getline(cin,s1);

    string s2;
    cout<<"Enter the 2nd string: ";
    getline(cin,s2);

    //s1=s1+s2;
    
    // s1=s1+" Naik";
    // cout<<s1;

    s1=s2;
    cout<<s2;
    
    return 0;
}