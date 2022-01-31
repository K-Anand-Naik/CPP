#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    cout<<"ENter the string: ";
    getline(cin,s1);
    //cout<<s1.max_size()<<endl;
    

    if(s1.empty())
    {
        cout<<"String is empty!";
    }
    else
    {
        cout<<"The entered string is "<<s1;
    }
    
    
    // s1.clear();

    // cout<<s1<<endl;
    // cout<<s1.length()<<endl;
    
    
    
    
    return 0;
}