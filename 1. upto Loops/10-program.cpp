#include <iostream>
using namespace std;
int main()
{

    //char x=128; // will print -128
    char x = 130; //will give -125
    x++;          //vale overflows and print the output as -128
    cout << (int)x << endl;
    return 0;
}