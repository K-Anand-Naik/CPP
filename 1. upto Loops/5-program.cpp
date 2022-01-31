#include <iostream>
#include <math.h>

using namespace std;
int main()
{

    float a, b, c, r1, r2;
    cout << "enter the parameters:";
    cin >> a >> b >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The root is:" << r1 << " " << r2;
    return 0;
}