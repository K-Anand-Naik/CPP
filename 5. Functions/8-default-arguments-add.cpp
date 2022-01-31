#include<iostream>
using namespace std;

int add(int x, int y, int z=0) 
//here z parameter become optional i.e, it is default argument,
// start making default arguments from right side, 
// we combined the add(x,y) and add(x,y,z) funtions. 
{
    return x + y + z;
}

int main()
{
    cout <<add(2,3)<<endl;
    cout <<add(1,2,3);
}