#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5]; // creating an new pointer and then below assigning their values
    p[0] = 0;
    p[1] = 1;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout << p[0] << endl;

    delete[] p;
    //{Above} first we need to delete and array and then, if you don't want p then assign it as NULL, like this
    p = nullptr;

    // in modern C++ don't use NULL, instead use 'nullptr' litereal

    cout << p[3] << endl;

    return 0;
}