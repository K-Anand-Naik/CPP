#include <iostream>
using namespace std;
int main()
{
    int n, r, m, rev = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    cout << "The Reverse number of " << n << " is: " << rev << endl;

    if (rev == m)
    {
        cout << "Polindrome";
    }
    else
    {
        cout << "Not a Polindrome";
    }

    return 0;
}