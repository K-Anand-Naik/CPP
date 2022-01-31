#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    // unique_ptr
    //  unique_ptr<Rectangle> ptr(new Rectangle(10,4));
    //  cout<<ptr->area()<<endl;

    // unique_ptr<Rectangle> ptr1;
    // ptr1=move(ptr1);
    // cout<<ptr1->area()<<endl;
    // cout<<ptr->area()<<endl;

    // shared_ptr
    shared_ptr<Rectangle> ptr(new Rectangle(10, 4));
    cout << ptr->area() << endl;

    shared_ptr<Rectangle> ptr1;
    ptr1 = ptr1;
    cout << ptr1->area() << endl;
    cout << ptr->area() << endl;
    cout << ptr.use_count() << endl;
}