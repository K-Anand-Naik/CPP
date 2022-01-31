#include<iostream>
#include<cstring>
using namespace std;

int * fun()
{
    int *p=new int[5];
    for(int i=1;i<=5;i++)
    {
        p[i]=i*5;
    }
    cout<<p<<endl;
    return p;
}

int main()
{
    int *q=fun();
    cout<<q<<endl;
    for(int i = 1; i <= 5 ; i++)
    {
        cout<<q[i]<<" "<<endl;
    }

}