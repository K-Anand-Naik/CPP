#include <iostream>
using namespace std;
int main()
{
    int A[10][10], B[10][10], mul[10][10], r1, c1, r2, c2;
    cout << "Enter the Rows and Columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter the Rows and Columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "1. Matrix A: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter elements A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << "2. Matrix B: " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter elements B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }
        cout << endl;
    }

    cout << "3. Matrix multiplications: " << endl;
    int sum;
    for (int i = 0; i < r1; i++) // iteration upto no of Rows in A
    {
        for (int j = 0; j < c2; j++) // iteration upto no of columns in B
        {
            sum = 0;
            for (int k = 0; k < c1; k++) // iteration upto no of columns in A
            {
                sum = sum + A[i][k] * B[k][j];
            }
            cout << sum << "\t";
        }
        cout << endl;
    }

    return 0;
}
