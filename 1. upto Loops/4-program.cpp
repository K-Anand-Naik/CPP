#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum;
    cout << "enter the value of n:";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "sum:" << sum;
    return 0;
}