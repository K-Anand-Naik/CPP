#include<iostream>
#include<cstring>
using namespace std;

char pol(string s, string rev=" ")
{
    int len=(int)s.length();
    rev.resize(len);
    for(int i = 0,j=len-1;i<len;i++,j--)
    {
        rev[i]=s[j];
    }
    rev[len]='\0';

    if(s.compare(rev)==0)
        cout<<"polindrome";
    else
        cout<<"Not a polindrome";
}


int main()
{
    string s1;
    string rev=" ";
    cout<<"Enter the string to check Polindrome: ";
    getline(cin,s1);

    cout<<pol(s1,rev);
}