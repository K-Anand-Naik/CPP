#include <iostream>
using namespace std;
int main()
{
    int A[9], n = 9, key;
    cout << "Enter the number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "(" << i << "," << j << ")";
            cout << "=" << A[i] << " ";
        }

        cout << endl;
    }

    return 0;
}