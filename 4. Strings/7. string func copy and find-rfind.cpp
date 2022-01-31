#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1="Programming";
    // char s2[10]; 
    // // s1.copy(s2,s1.length());
    // s1.copy(s2,4); //copies upto 4th index
    // s2[11]='\0'; //this line is imp to not get garbage values like ╔vⁿ■a
    // cout<<s2<<endl;


    string s2;
    cout<<"Enter the string s2; ";
    getline(cin,s2);
    cout<<s1.find(s2); //returns the position of the char/string in the parent string
    
    // cout<<s1.rfind(s2);//it returns the letter from the right side



    return 0;
}