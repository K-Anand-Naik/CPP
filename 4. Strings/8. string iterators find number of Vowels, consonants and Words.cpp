//find number of Vowels, consonants and Words

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    int vowels=0,consonants=0,spaces=0;
    cout << "Enter the string of your interest: ";
    getline(cin,s1);

    for(int i = 0;s1[i] != '\0';i++)
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
            vowels++;
        
        else if(s1[i]==' ')
            spaces++;

        else
            consonants++;
    }

    cout<<"No Of Vowels: "<<vowels<<endl;
    cout<<"No Of Consonants: "<<consonants<<endl;
    cout<<"No Of Words : "<<spaces+1<<endl;




    return 0;
}