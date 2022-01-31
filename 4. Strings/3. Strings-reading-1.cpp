#include<iostream>
using namespace std;
int main()
{
    char A[20];
    char B[20];
    cout<<"Enter your name: ";
    cin.getline(A,20); //try with cin.get(A,20);

    cout<<"Wellcome "<<A<<endl;

    cout<<"Enter your name again: ";
    cin.getline(B,20); //try with cin.get(A,20);

    cout<<"Wellcome "<<B<<endl;

    
    
    
    
    return 0;
}