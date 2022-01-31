#include<iostream>
using namespace std;
class apple
{
public:
    int roll;
    apple() // constructor
    {
        roll = 5;
        cout << "Roll is: "<<roll << endl;
    }
    ~apple() // destructor
    {
        roll = -5;
        cout << "Roll is: "<<roll << endl;
    }

};

int main()
{
    apple object1;
    return 0;
}