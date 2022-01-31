//Reverse a string and check a string is a polindrome or not

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    string rev=" ";
    cout<<"Enter the string to check Polindrome: ";
    getline(cin,s1);

    int len=(int)s1.length();

    rev.resize(len);

    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=s1[j];
    }
    rev[len]='\0';

    if(s1.compare(rev)==0)
        cout<<"Polindrome";
    else
        cout<<"Not a Polindrome";
    return 0;
}