#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (;;) //infinite loop

    {
        cout << i << "Anand\n";
        i++;
        if (i > 10)
            break;
    }
}