#include<iostream>
using namespace std;

#define PI 3.145
#ifndef PI
    #define PI 3
#endif
#define SQR(x) (x*x)
#define max(x,y) (x>y?x:y)  // brackets are must
#define msg(x) #x


int main()
{
    cout << "The value of PI is: " << PI <<endl;
    cout<< "The value of SQR is: " <<SQR(6)<<endl;
    cout<< "The value of max is: " <<max(12,23)<<endl;
    cout<< "The msg is: " <<msg(Hello Anand)<<endl;
}