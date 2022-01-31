#include<iostream>
#include<cstring>
using namespace std;
int Max(int x, int y)
{
    return x>y?x:y;
}

// int minim(int x, int y)
// {
//     return x<y?x:y;
// }

int main()
{
    int (*fp)(int a, int b);

    fp=Max;
    (*fp)(10,25);

    // fp=minim;
    // (*fp)(10,5);


}