#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0; //inplace of sum insert rev
    cout << "enter n: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
        switch (r)
        {
        case 1:
            cout << "One\n";
            break;
        case 2:
            cout << "Two\n";
            break;
        case 3:
            cout << "Three\n";
            break;
        case 4:
            cout << "Four\n";
            break;
        case 5:
            cout << "Five\n";
            break;
        case 6:
            cout << "Six\n";
            break;
        case 7:
            cout << "Seven\n";
            break;
        case 8:
            cout << "Eight\n";
            break;
        case 9:
            cout << "Nine\n";
            break;
        case 0:
            cout << "Zero\n";
            break;
        }
    }
    cout << "The sum of digits is: " << rev << " ";

    return 0;
}