#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> v={2,4,6,8,10};
    v.push_front(12);
    v.push_front(14);
    v.pop_front();

// method 2 for iterating over the array
    forward_list<int>::iterator itr;
    cout<<"Using Iterator: "<<endl;

    for(itr = v.begin(); itr != v.end(); itr++)
        // cout<<*itr<<endl;
        cout<<++*itr<<endl; // we can modify the array values by writing this statement above

//method 1 for Using for each
    cout << "Using for each looP: "<<endl;
    for(int x : v)
        cout << x << endl;
}
