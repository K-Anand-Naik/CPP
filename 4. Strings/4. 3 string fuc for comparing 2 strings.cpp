#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // char str1[20]="anand";
    // char str2[20]="naik";

    // cout <<strcmp(str1,str2)<<endl;
    // //it returns -1 i.e, anand comes first int the dic

    // char str1[20]="anand";
    // char str2[20]="anand";
    // cout<<strcmp(str1,str2)<<endl;
    // // it returns 0 i.e, both strings are same

    char str1[20];
    cout<<"Enter the 1st string: ";
    cin >> str1;

    char str2[20]="anand";
    cout<<"Enter the 2nd string: ";
    cin >> str2;
    
    cout<<strcmp(str1,str2);
    //it returns +1 i.e, naik comes last in the dic


    //know upper and lower case letters values and then compare according their values as if values of upper/lower letters is high it comes last in the dic

    return 0;
}