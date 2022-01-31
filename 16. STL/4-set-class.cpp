#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> v={2,4,6,8,10,10}; // 10 get printed only one time as it is set
    v.insert(12);
    v.insert(14);
    // v.remove();
    

// method 2 for iterating over the array
    set<int>::iterator itr;
    cout<<"Using Iterator: "<<endl;

    for(itr = v.begin(); itr != v.end(); itr++)
        // cout<<*itr<<endl;
        cout<<*itr<<endl; //we can not modify the set

//method 1 for Using for each
    cout << "Using for each looP: "<<endl;
    for(int x : v)
        cout << x << endl;
}
