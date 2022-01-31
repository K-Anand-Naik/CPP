#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Student 
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int cheMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        // this->roll = roll;
        // this->name = name;
        // this->mathMarks = mathMarks;
        // this->phiMarks = phyMarks;
        // this->cheMarks = cheMarks;

        //(Or)

        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        cheMarks = c;
    }
    int total() // we are reading them so no need to insert anything inside the bracket
    {
        return mathMarks+phyMarks+cheMarks;
    }
    char grade()
    {
        float avg=total()/3;
        if(avg>70)
            return 'A';
        else if(avg>=40 && avg<=70)
            return 'B';
        else
            return 'C';
    } 
};

int main()
{
    int roll;
    string name;
    int m,p,c;

    cout<<"Enter the roll number: "<<endl;
    cin>>roll;

    cout<<"Enter the name of the student: "<<endl;
    cin>>name;

    cout<<"Enter the marks of Maths: "<<endl;
    cin>>m;

    cout<<"Enter the marks of physics: "<<endl;
    cin>>p;

    cout<<"Enter the marks of chemistry: "<<endl;
    cin>>c;

    Student s(roll,name,m,p,c);
    cout<<"Total marks of "<<name<<" is "<<s.total()<<endl;
    cout<<"Grade is: "<<s.grade();
}