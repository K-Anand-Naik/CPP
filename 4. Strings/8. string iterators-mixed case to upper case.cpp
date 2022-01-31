//converting from upper case to lower case vise versa

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    cout << "Enter the string to be converted to uppercase:";
    getline(cin,s1);

    for (int i = 0; s1[i]!='\0';i++) 
    {
        if(s1[i]>=97 && s1[i]<=122)
        {
            s1[i]-=32;
        }
    }
    cout<<s1;
    return 0;
}