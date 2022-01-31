#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, area;
    cout << "Enter Radius";
    cin >> r;
    area = 3.14f * r * r;
    //area = (float)22 / 7 * r * r;
    //area = 22 / 7.0 * r * r;
    //area = 22 / 7 * r * r; ---> which will not give us correct value
    cout << "Area:" << area;
    return 0;
}