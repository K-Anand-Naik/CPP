#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Ente the size of an array: ";
    cin >> size;
    int *p = new int[size];

    // creating new array by deleting the fisrt one
    cout << "Enter the size of an array: ";
    cin >> size;
    p = new int[size];

    cout << "The size of an array final: " << size << endl;

    return 0;
}