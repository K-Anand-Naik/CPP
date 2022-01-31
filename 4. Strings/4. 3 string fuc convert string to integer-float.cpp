#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[20];
    cout<<"Enter the string: ";
    cin>>str1;

    char str2[20];
    cout<<"Enter the string: ";
    cin>>str2;

    long int x = strtol(str1,NULL,10);
    float y = strtof(str2,NULL);

    //cout<<x<<endl<<y<<endl;
    cout<<x+10<<endl<<y+10<<endl;

    

    return 0;
}