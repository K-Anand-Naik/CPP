#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float bA, discount = 0.0;

    cout << "Enter BillAmount: ";
    cin >> bA;

    if (bA >= 500)
    {
        discount = bA * 0.2;
    }
    else if (bA >= 100 && bA <= 500)
    {
        discount = bA * 0.1;
    }

    cout << "BillAmount: " << bA << endl;
    cout << "Discount: " << discount << endl;
    cout << "Discounted amount is: " << bA - discount << endl;
    return 0;
}