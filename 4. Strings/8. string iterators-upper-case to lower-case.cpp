#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string to be converted to lowercase: ";
    //can be converted to lower case by adding 32 to every letter in the string
    getline(cin,s1);

    for (int i = 0;s1[i] != '\0';i++)
    {
        if(s1[i]>=60 && s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
    }

    // string::iterator it;
    // int i = 0;
    // for(it=s1.begin();it!=s1.end();it++)
    // {
    //     if(s1[i]>=65 && s1[i]<=90)
    //         *it=*it+32;
    //         i++;
    // }

    cout<<"lowercase: "<<s1<<endl;

    return 0;
}