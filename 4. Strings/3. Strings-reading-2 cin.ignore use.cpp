#include<iostream>
using namespace std;
int main()
{
    char A[20];
    char B[20];
    cout<<"Enter your name: ";
    cin.get(A,20); 

    cout<<"Wellcome "<<A<<endl;

    cin.ignore();  //Try without cin.ignore();

    cout<<"Enter your name again: ";
    cin.get(B,20); 

    cout<<"Wellcome "<<B<<endl;

    return 0;
}