#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Test 
{
public:
    int a;
    static int count;
    Test()
    {
        a=10;
        count++;// this is a common variable for both t1 and t2
    }
    static int getCount()
    {
        //a++; // by writing a++ we get an error of "invalid use of 'a' in static member function"
        // that is we cant use non-static member in static function
        return count;
    }
};
int Test::count=0;//just like global variable, accessible only inside the class

int main()
{
    Test t1, t2;
    // cout<<t1.count<<" "<<t2.count<<endl;
    // t1.count=25; // fixing t1 count and finding t2 count
    // cout<<t2.count;
    // cout<<Test::count; // same as above, but both t2 and t1 count will be displayed

    cout<<Test::getCount();// calling static function upon class name
    cout<<t1.getCount(); //calling static function upon class object
    cout<<t2.getCount();// calling static function upon class object
}
