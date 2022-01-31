#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;

    //if(a>b && ++i<=b) //output == 6
    //if(a<b && ++i<=b) //output == 5
    //if(a<b || ++i<=b) //output == 6
    if (a > b || ++i <= b) //output == 5
    {
    }
    cout << i << endl;

    return 0;
}