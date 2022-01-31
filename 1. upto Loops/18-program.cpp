#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values of a and b:";
    cin >> a >> b;

    if (b == 0)
    {
        cout << "division by Zero" << endl;
    }

    else
    {
        c = a / b;
        cout << c << endl;
    }

    return 0;
}