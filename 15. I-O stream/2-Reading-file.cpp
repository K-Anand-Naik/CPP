#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My.txt");

    if(ifs.is_open())cout<<"file is opened:"<<endl;
    string name;
    string value;
    ifs>>name>>value;
    int package;
    cout<<"Name: "<<name<<endl<<"Value: "<<value<<endl<<"Package: "<<package;
}