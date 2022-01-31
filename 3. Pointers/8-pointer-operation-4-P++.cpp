#include <iostream>
using namespace std;
int main()
{
    // Difference between 2 pointers p and q
    int A[5]{2, 4, 6, 8, 10};
    int *p = A, *q = &A[4]; // q pointing on A of 4

    cout << q - p << endl;
    cout << p - q; //-4 output indicats that 1st element is nearer than the second

    return 0;
}