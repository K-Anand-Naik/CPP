#include <iostream>
using namespace std;
int main()
{
    int A[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    for (int x : A) //another syntex for displaying elements of A[]
        cout << x << endl;

    return 0;
}