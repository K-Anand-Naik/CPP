#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Programming"; // main string
    char s2[20]="k"; //sub string
    if(strstr(s1,s2)!=NULL)
        cout<<strstr(s1, s2)<<endl;
    else
        cout<<"Not found";
    return 0;
}