#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    // then creating the array of size of our interest;

    int A[size];
    cout << sizeof A << endl;

    // will return size*4 (because it is int type which stores only 4 bits )

    // size cant not be modified

    return 0;
}