#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string to be iterated: ";
    cin >> s1;

    // string::iterator it;
    // for(it=s1.begin();it!=s1.end();it++)    
    // {
    //     //cout<<*it<<" ";
    //     *it=*it-32; //which will convert every lower case letter to upper case letter
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<s1;

    // string::reverse_iterator it;
    // for(it=s1.rbegin();it!=s1.rend();it++)
    // {
    //     *it=*it-32; //which will convert every lower case letter to upper case letter
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<s1;

    // for(int i=0;s1[i]!='\0';i++)
    // {
    //     cout<<s1[i]<<" ";
    // }

    return 0;
}