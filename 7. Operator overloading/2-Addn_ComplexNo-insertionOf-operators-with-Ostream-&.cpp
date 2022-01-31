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
    friend ostream & operator<<(ostream &out,Complex &c);   
};
ostream & operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.imag;
    return out;
    
}

int main()
{
    Complex c(4,6);
    cout<<c<<endl;
    operator<<(cout,c);//demonstration of above line
}