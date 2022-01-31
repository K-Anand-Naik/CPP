#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="Programming";
    string s2="Language";
    // cout<<s1.replace(3,2,"NAIK")<<endl;

    // s1.push_back('H'); //dont use "" quotes here it will throw an ERROE
    
    // s1.pop_back(); //act as a backspace and eleminates the last word from the string
    
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2;
   
    
    return 0;
}