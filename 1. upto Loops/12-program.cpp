#include <iostream>
using namespace std;

enum day
{
    mon = 1,
    tus,
    wed = 4,
    thu,
    fri = 8,
    sat,
    sun
}; //const so cant modified
enum dept
{
    cs,
    mt,
    mech,
    civil
};

int main()
{

    day d;
    d = mon;

    dept s;
    s = cs;
    cout << d << endl;
    cout << mon << endl;

    cout << s << endl;

    return 0;
}