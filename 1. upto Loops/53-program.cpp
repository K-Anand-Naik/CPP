#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m: " << endl;
    cin >> m;

    cout << "Enter n: " << endl;
    cin >> n;
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    cout << "The GCD of m and n is: " << m << endl;

    return 0;
}