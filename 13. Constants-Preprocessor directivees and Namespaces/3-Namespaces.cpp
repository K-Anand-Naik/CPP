#include<iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "First: " <<endl;
    }
};

namespace second
{
    void fun()
    {
        cout << "Second: " <<endl;
    }
};

// int main()
// {
//     first::fun();
//     second::fun();
// }

using namespace first; //second
int main()
{
    fun();
    second::fun(); // first::fun(); 
}