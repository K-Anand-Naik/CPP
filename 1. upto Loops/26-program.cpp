#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    //cout<<c; if i access c outside the if loop-->error
    return 0;
}
