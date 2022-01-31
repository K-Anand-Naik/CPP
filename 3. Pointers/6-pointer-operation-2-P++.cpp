#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;
    // cout<<*p<<endl;

    // p++;
    // cout<<*p<<endl;

    // p--;
    // cout<<*p<<endl;

    // cout<<p+2<<endl; //will give the address of the data in array A
    cout << *p << endl;
    cout << *(p + 2) << endl; // barckets must be there (p+2)

    return 0;
}
