#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="x=10;y=20;z=30";
    //cout<<strtok(s1, "=;"); // will return the starting token only
    
    //char *token=strtok(s1,"=;");
    char *token=strtok(s1,";");

    while(token!=NULL)
    {
        cout<<token<<";"<<endl;
        //token = strtok(NULL,"=;");
        token = strtok(NULL,";");
    }
    

    return 0;
}