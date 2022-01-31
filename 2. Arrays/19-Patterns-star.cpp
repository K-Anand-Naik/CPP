#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << " ";
            }
            else if (i > j)
            {
                cout << count << "*";
                count = count + 1;
            }
            else if (i < j)
            {
                cout << count << "@";
            }
        }
        cout << endl;
    }

    return 0;
}