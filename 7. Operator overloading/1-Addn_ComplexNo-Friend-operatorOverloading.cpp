#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout<<real<<"+i"<<imag;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

int main()
{
    Complex c1(5,6),c2(3,9),c3;
    c3=c1+c2;
    c3.display(); // how to diplay complex number without using display()-> next code
    cout<<endl;
    
    c1.display();
    
}
