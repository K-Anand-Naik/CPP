#include<iostream>
using namespace std;
int main()
{
    char A[20];
    cout<<"Enter your name: ";
    //cin.get(A,20);
    cin.getline(A,20);
    cout<<"Wellcome: "<<A;
    return 0;
}