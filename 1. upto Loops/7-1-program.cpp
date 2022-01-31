#include <iostream>
using namespace std;

int main()
{
    int i = 5, j;
    //j=++i;
    //j=i++;
    j = 2 * i++ + 2 * ++i;
    //i is incremented 2 times so it will gives 5+1+1 = 7 as output
    cout << i << " " << j << endl;
    return 0;
}