#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Employee
{
private:
    int eid;
    string name;
public:
    Employee(int e,string n)
    {
        eid = e;
        name = n;
    }
    int getEmployeeId()
    {
        return eid;
    }
    string getName()
    {
        return name;
    }
};

class fulltimeEmployee:public Employee
{
private:
    int salary;
public:
    fulltimeEmployee(int e, string n, int sal):Employee(e,n)
    {
        salary = sal;
    }
    int getSalary()
    {
        return salary;
    }
};

class parttimeEmployee:public Employee
{
private:
    int wage;
public:
    parttimeEmployee(int e, string n, int w):Employee(e,n)
    {
        wage = w;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    parttimeEmployee p1(1,"john",300);
    fulltimeEmployee p2(2,"raj",50000);
    cout<<p2.getSalary()<<endl;

    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
}