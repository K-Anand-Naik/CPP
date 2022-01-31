#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // string str="Anand";
    // cout << str << endl;

    string str;
    cout<<"Enter the string: ";
    //cin>>str; //print only starting word instead entire sentence
    getline(cin, str); // print entire sentence given by us

    cout<<str << endl;
    return 0;
}