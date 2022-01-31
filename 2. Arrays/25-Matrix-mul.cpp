#include <iostream>
using namespace std;
int main()
{
    int A[3][2] = {{3, 2}, {4, 2}, {5, 2}};
    int B[2][3] = {{4, 5, 6}, {1, 3, 5}};

    int C[3][3];

    cout << "1. Matrix A: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "2. Matrix B: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "3. Matrix multiplications: " << endl;
    int sum;
    for (int i = 0; i < 3; i++) // iteration upto no of Rows in A
    {
        for (int j = 0; j < 3; j++) // iteration upto no of columns in B
        {
            sum = 0;
            for (int k = 0; k < 2; k++) // iteration upto no of columns in A
            {
                sum = sum + A[i][k] * B[k][j];
            }
            cout << sum << "\t";
        }
        cout << endl;
    }

    return 0;
}
