#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int max;
    max = A[0]; //assign the maximum value as A[0]

    for (int i = 0; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "The maximum value is: " << max << endl;

    return 0;
}