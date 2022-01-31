#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Good";
    char s2[20]="";

    strcpy(s2,s1);
    //strncpy(s1,s2,4);
    cout <<s2; //Good is copied in s2
    return 0;
}