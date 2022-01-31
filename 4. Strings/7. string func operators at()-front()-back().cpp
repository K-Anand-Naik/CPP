#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "Hello";
    //cout<<str.at(3);// prints l which is at the index 3
    //cout<<str[3]; //will give same output as the above str.at(3) // which is a  number function though it works on classes as it is overloaded operator
    //[] is and overload operator which can also work on the classes like string

    str[4]='M';
    cout<<str;
    // cout<<str.back()<<endl;
    // cout<<str.front();
    
    return 0;
}