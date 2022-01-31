#include <iostream>
using namespace std;
int main()
{
    int n;
    int A[5] = {1, 2, 3, 4, 5};

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cout << n << "X" << A[i] << "=" << A[i] * n << " " << endl;
    }

    return 0;
}