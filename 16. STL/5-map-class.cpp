#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1,"Anand"));
    m.insert(pair<int, string>(2,"Swathi"));
    m.insert(pair<int, string>(3,"Kshitika"));
    m.insert(pair<int, string>(4,"Kshitic"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end();itr++)
    {
        cout<<itr->first <<". "<<itr->second <<endl;
    }

    cout<<endl;

    map<int, string>::iterator itr1;
    cout<<"Value found:"<<endl;
    itr1=m.find(2);
    cout<<itr1->first <<". "<<itr1->second <<endl;
}