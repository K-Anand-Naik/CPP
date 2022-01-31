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
        cout << "Matric multiplication is not possible.";
        return 0;
    }

    cout << "Matrix A" << endl;
    cout << "Enter the values of matrix A and storing them as: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter elements A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
    }

    cout << "Matrix B" << endl;
    cout << "Enter the values of matrix B and storing them as: " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter elements B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }
    }

    cout << "multiplication of A and B and storing their values";
    for (int i = 0; i < r1; i++) // iteration upto no of rows in A
    {
        for (int j = 0; j < c2; j++) // Iteration upto no of columns in B
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++) // Iteration upto no of columns in A
            {
                mul[i][j] = A[i][k] * B[k][j];
            }
        }
    }

    cout << "The final multiplication matrix is: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << " " << mul[i][j];
            if (j == c2 - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}