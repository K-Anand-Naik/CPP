#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the email ID: "; 
    getline(cin,s1);

    //Finding the index of @ in the user email id
    int i=(int)s1.find('@');

    //create a new user name
    string userName=s1.substr(0,i);

    //print the new user name
    cout << "User Name is: "<<userName;

    return 0;
}