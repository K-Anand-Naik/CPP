#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    for (int x : A)
        //cout<<++x<<endl;  //prints +1 values
        cout << x++ << endl; //just prints the exact values in arrays
    return 0;
}