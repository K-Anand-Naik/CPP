#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter the value for n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum * i; // for sum of n natural numbers

        //mul = mul*i //for factorial of n. where mul = 1 not 0
    }
    cout << "The sum of n natural numbers is: " << sum;
    return 0;
}