#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string of your interest: ";
    getline(cin,s1);

    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    
    return 0;
}