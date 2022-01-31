#include<iostream>
using namespace std;
int maxim(int a=0,int b=0, int c=0)
{
    return a>b && a>c?a:(b>c?b:c);
}

int main()
{
    cout<<"Maximum of given number is: "<<maxim(12,23,21)<<endl;
    cout<<"Maximum of given number is: "<<maxim(12,24)<<endl;
    cout<<"Maximum of given number is: "<<maxim(12)<<endl;
    cout<<"Maximum of given number is: "<<maxim();

    return 0;
}