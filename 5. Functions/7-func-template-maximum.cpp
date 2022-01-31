#include<iostream>
using namespace std;
template <class T>
T maxim(T x, T y) 
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int c = maxim(10,4);
    float d = max(12.3f,13.4f);

    cout << c << " " << d << " ";
}