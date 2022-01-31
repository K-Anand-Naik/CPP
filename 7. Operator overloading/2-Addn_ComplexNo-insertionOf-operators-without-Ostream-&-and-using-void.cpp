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
    friend void operator<<(ostream &out,Complex &c);   
};
void operator<<(ostream &out,Complex &c)
{
    out<<c.real<<"+i"<<c.imag;
    //return out;
    
}

int main()
{
    Complex c(4,6);
    //cout<<c<<endl; // we cant not over write if we remove ostream & from previous code
    //i.e, insertion is imposible, like adding <<endl;
    cout<<c;
    operator<<(cout,c);//demonstration of above line
}