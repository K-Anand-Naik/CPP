#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value for n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "The sum of factors is: " << sum;

    return 0;
}