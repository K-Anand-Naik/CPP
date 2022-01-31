#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cout << "Enter the value of n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << n << " is prime number";
    else
        cout << n << " is Not a prime number";
    return 0;
}