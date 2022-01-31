#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c;
    cout << "Enter the values for base and height: ";

    cin >> a >> b;
    c = (a * b) / 2;
    cout << "The area of triangle: " << c;
    return 0;
}