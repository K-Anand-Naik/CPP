#include <iostream>
using namespace std;
int main()
{
    //perfect number
    //sum of fact of of number = double the num 
    //then it is called Perfect number

    int n, sum = 0;
    cout << "Enter the value for n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (2 * n == sum)
    {
        cout << n << " is Perfect number";
    }
    else
    {
        cout << "Not a perfect number";
    }

    return 0;
}