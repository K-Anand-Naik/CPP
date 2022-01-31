#include<iostream>
using namespace std;
int main()
{
    char S[10] = "Anand";
    cout<<S<<endl;

    char D[] = {'H','e','l','l','o','\0'};
    cout<<D<<endl;

    char C[] = {'H','e','l','l','o','\0','w','e'};
    cout<<C<<endl;//it will not print the charecters beyond the Null Char \0

    char A[]={65,66,67,68,69,'\0'};
    cout<<A<<endl;
    return 0;
}