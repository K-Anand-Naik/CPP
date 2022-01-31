#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number for table: ";
    cin >> n;

    for (i = 0; i <= 10; i++)
    {
        cout << n << "x" << i << "=" << n * i << endl;
    }
    return 0;
}