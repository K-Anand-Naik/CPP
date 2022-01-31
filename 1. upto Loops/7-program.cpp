#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float u, v, a, speed;
    cout << "Enter the values of u,v and a:";
    cin >> u >> v >> a;
    speed = (pow(v, 2) - pow(u, 2)) / (2 * a);
    cout << "the speed is:" << speed;
    return 0;
}