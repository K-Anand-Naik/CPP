#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter the values of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of factors is: " << sum << endl;
    if (sum == n * 2)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "not a Perfect number";
    }

    return 0;
}