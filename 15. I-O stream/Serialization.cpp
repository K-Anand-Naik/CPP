#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ifstream & operator>>(ifstream &ifs, Student &s)// overloading of file input stream 
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs; 
}
ofstream & operator<<(ofstream &ofs, Student &s)
{
    ofs <<s.name <<endl;
    ofs <<s.roll <<endl;
    ofs <<s.branch <<endl;
    return ofs;
}
int main()
{
    Student s1;
    // s1.name="Anand";s1.roll=1;s1.branch="MEMS"; // initialization part
    
    // ofstream ofs("Student.txt",ios::trunc); //writing
    ifstream ifs("Student.txt");
    // ofs<<s1;
    ifs>>s1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll: "<<s1.roll<<endl;
    cout<<"branch: "<<s1.branch<<endl;
    ifs.close();
}