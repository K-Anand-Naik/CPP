#include <iostream>
using namespace std;
int main()
{
    float A[5] = {1,2.2,3.5,4.3,5.3};
    char B[] = {'Q','T','R','D'};//we can creat and array without a size in the array
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
        cout << B[i] << endl;
    }
    return 0;
}