// find the length of the string WELCOME


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    int count=0;
    cout << "Enter the string of which length to be finded: ";
    getline(cin,s1);

    
    
    // for(int i = 0 ; s1[i]!=0;i++)
    // {
    //     count++;
    // }
    // cout << "Length is: "<<count;

    string::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
    {
        count++;
    }

    cout << "Length is: "<<count;

    
    
    return 0;
}