#include <iostream>
using namespace std;

int main()
{
    
    int x, y;
    cout << "Enter the values of x and y" << endl;
    cin >> x >> y;
    if (x > y)
    {
        cout << "maximum value is:" << x;
    }
    else
    {
        cout << "maximum value is:" << y;
    }
    return 0;
}