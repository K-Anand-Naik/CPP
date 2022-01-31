#include <iostream>
using namespace std;
int main()
{
    int hr;
    cout << "Enter the time:";
    cin >> hr;

    if (hr >= 9 && hr <= 18)
    {
        cout << "Working hours";
    }
    else
    {
        cout << "leisure hours";
    }
    return 0;
}