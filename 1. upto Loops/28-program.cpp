#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int d;
    cout << "Enter the number of day: ";
    cin >> d;

    switch (d)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid number of day.";
        //default: can be written anywhere in the code inside switch
        return 0;
    }
}
