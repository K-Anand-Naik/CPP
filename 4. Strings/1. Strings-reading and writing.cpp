#include<iostream>
using namespace std;

int main()
{
    char S[20];

    //cout << "Enter the name of user: ";
    //cin >> S;
    //cout<<S<<endl;// this print only ANAND in ANAND NAIK(wont display entire name entered by the user)
    
    char D[50];
    cout << "Enter the name of the user: ";
    cin.get(D,50); //this will print the entire sentence with spaces also
    //cin.getline(D,50);
    cout<<"Wellcome: "<<D;
   
    
    return 0;
}