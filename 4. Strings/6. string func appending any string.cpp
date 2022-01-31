#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="Hello ";
    cout<<s1.capacity()<<endl;
    
    string s2;
    cout<<"Enter the string that you wanted to append: ";
    getline(cin,s2);
    

    s1.append(s2);
    cout<<s1<<endl;
   
    cout<<s1.capacity()<<" "<<s1.length()<<endl;

    return 0;
}