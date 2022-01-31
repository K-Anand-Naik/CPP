//#Function overriding ia nothing but 
//writing the same function for both parent and child class


#include<iostream>
using namespace std;

class parent 
{
public:
    void display()
    {
        cout<<"Good Morning,Parents!";
    }
};
class child:public parent
{
public:
    void display() // this function should not be void display(int x)
    {
        cout<<"Good Morning,Children!";
    }
};
int main()
{
    parent p;
    p.display();// which will display the parent class statement

    cout<<endl;

    child c;
    c.display(); // which will display the child class statement
    return 0;
}
