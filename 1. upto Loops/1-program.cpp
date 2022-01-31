#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "hello wolrd" << endl;
    cout << "may i ask your name?";
    //cin >> name;
    getline(cin, name);

    /*getline is use to print entire word of
     our name with space include */

    cout << "Welcome Mr.Ms:" << name << endl;

    return 0;
}