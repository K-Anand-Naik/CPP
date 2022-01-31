#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *s;
    cout << "Enter the string";
    cin.getline(s,100);
    cout<<"Length: "<<strlen(s)<<endl;
    return 0;
}