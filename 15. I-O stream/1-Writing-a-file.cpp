#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"Hello"<<endl;
    ofs<<"World"<<endl;
    ofs<<"32"<<endl;

    ofs.close();
}
