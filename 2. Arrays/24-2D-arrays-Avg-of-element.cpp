#include <iostream>
using namespace std;
int main()
{
    int n;
    float num[100], sum = 0.0, avg;
    cout << "Enter the number of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter the number: ";
        cin >> num[i];
        sum += num[i];
    }

    avg = sum / n;
    cout << "Avg: " << avg;

    return 0;
}