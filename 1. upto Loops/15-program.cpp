#include <iostream>
using namespace std;

int main()
{

    float b, pA, pD, nS;

    cout << "Enter the Basic salary:";
    cin >> b;

    cout << "Enter the percentage of Allowances:";
    cin >> pA;

    cout << "Enter the percentage of Deductions:";
    cin >> nS;

    nS = b + b * pA / 100 - b * pD / 100;

    cout << "The Net Salary is:" << nS << endl;
    return 0;
}