#include<iostream>
using namespace std;
template <class T>
T max(T&a , T&b)
{
    return a>b?a:b;
}
int main()
{
    int i = 5, j = 10, k;
    long l = 12, m = 3, n;
    k = max(i,j);
    n = max(l,m);
    cout << k<<endl;
    cout<<n<<endl;
}