#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Menu:\n";
    cout << "1.add\n"
         << "2.sub\n"
         << "3.mul\n"
         << "4.div\n";

    int option;
    cout << "Enter your choice :";
    cin >> option;

    int a, b, c;
    cout << "Enter Two numbers: ";
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    }
    cout << "The Result: " << c;

    return 0;
}