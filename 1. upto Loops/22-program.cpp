#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a";
    cin >> a;

    cout << "Enter b";
    cin >> b;

    cout << "Enter c";
    cin >> c;

    d = pow(b, 2) - 4 * a * c;

    if (d == 0)
    {
        cout << "The roots are real and equal" << endl;
        cout << endl
             << (-b / (2 * a)) << endl;
    }
    else if (d > 0)
    {
        cout << "The roots are real and unequal" << endl;
        cout << "the 1st root is:" << (-b + sqrt(d) / (2 * a)) << endl;
        cout << "the 1st root is:" << (-b - sqrt(d) / (2 * a)) << endl;
    }
    else
        cout << "Imaginary";

    return 0;
}