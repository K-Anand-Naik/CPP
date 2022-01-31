#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex add(Complex c) //creating a function to add complex numbers
    {
        Complex temp;
        temp.real = real+c.real;
        temp.imag = imag+c.imag;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3;
    c1.real=5;c1.imag=3;
    c2.real=5;c2.imag=6;
    // c3 = c1.add(c2);
    c3 = c2.add(c1);
    cout<<c3.real<<" + i"<<c3.imag<<endl;
}