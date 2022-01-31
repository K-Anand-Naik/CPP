#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the rollNo;";
    cin >> r;

    if (r < 1)
    {
        cout << "Error!";
    }
    else
    {
        cout << "valid rollNo";
    }
    return 0;
}