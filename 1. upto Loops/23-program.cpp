#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float m1, m2, m3, avg;

    cout << "Enter m1: ";
    cin >> m1;

    cout << "Enter m2: ";
    cin >> m2;

    cout << "Enter m3: ";
    cin >> m3;

    avg = (m1 + m2 + m3) / 3;

    if (avg >= 30 && avg <= 60)
    {
        cout << "B grade";
    }
    else if (avg > 60)
    {
        cout << "A grade";
    }
    else
    {
        cout << "C grade";
    }

    return 0;
}