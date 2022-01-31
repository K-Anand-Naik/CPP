#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle(int l, int b)
    // {
    //     length = l;
    //     breadth = b;
    // }
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth; // assigning same variable so using this
    //that is using same variables in data members in private:
    }
    int area()
    {
        return length*breadth;
    }
    int peremeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1(10,30);
    cout << "Rectangle area: "<<r1.area() << endl;
}