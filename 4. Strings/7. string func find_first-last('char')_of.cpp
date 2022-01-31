#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string to be tested: ";
    getline(cin,s1);

    cout<<s1.find_first_of('r')<<endl;
    // cout<<s1.find_first_of('r',3); //it will find from a specific index of our interest
    // cout<<s1.find_first_of('ro'); //it will find for either r or o

    cout<<s1.find_last_of('r');
    return 0;
}
