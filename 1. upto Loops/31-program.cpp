#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year of your interest: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is leap year" << endl;
            else
                cout << year << " is not leap year" << endl;
        }
        else
            cout << year << " is leap year";
    }
    return 0;
}