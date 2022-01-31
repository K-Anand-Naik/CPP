#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    for (int i = 0; i < 5; i++)
    {
        // cout<<A<<" "<<endl; // prints address
        // cout<<p[i]<<" ";
        // cout<<A[i]<<endl;
        // cout<<i[A]<<endl;
        // cout<<*(A+i)<<endl; //* without the * we get the address of the element in the array
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl;
        p++;
    }

    return 0;
}
