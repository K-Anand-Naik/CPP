#include <iostream>
using namespace std;
int main()
{
    int i, n, fact = 1;
    cout << "Enter the value for n:";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << n << "!"
         << "=" << fact;

    return 0;
}