#include <iostream>
using namespace std;
int main()
{
    int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;

    cout << "Enter the key for search: ";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "The key is found at index " << i;
            exit(0);
        }
    }
    cout << "The key is not found at index ";
    return 0;
}