#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The max number is " << a;
    }
    else
    {
        if (b > c)
        {
            cout << "The max number is " << b;
        }
        else
        {
            cout << "The max number is " << c;
        }
    }
    return 0;
}