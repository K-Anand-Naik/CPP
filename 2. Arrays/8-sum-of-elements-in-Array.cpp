#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }
    cout << sum << endl;
    return 0;
}