#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A; // creating a pointer and pointing on A; i.e, Address is given to p
    p++;
    cout << *p << endl;

    p = p + 3;
    cout << p[-4];
    return 0;
}