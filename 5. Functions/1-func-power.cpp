#include<iostream>
#include<cstring>
using namespace std;

int pow(int m, int n)
{
    int p=1;
    for (int i=0;i<n;i++)
    {
        p=p*m;
    }
    return p;
}

int main()
{
    int m,n;
    cout<<"Enter the value of m: ";
    cin >> m;

    cout<<"Enter the value of n: ";
    cin >> n;
    cout << pow(m,n);
}