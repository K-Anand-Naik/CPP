#include<iostream>
using namespace std;
int sum(int n, ...)
{
    va_list list;
    va_start(list,n);

    int x;
    int s=0;
    for(int i=0;i<n;i++)
    {
        x=va_arg(list,int);
        s=s+x;
    }
    return s;
}

int main()
{
    cout<<sum(2,4,5)<<endl;
    // cout<<sum(3,2,4,5)<<endl;
    // cout<<sum(4,3,2,4,5)<<endl;
    // cout<<sum(4,2,3,2,4,5)<<endl;
}