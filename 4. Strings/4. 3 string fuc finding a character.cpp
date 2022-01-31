#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20] = "Programming";
    if(strchr(s1, 'k')!=NULL)
        //cout<<strrchr(s1, 'g'); //first occurrence of g from left
        cout<<strchr(s1, 'g'); // first occurrence of g from right

    else
        cout<<"Not Found";

    return 0;


}