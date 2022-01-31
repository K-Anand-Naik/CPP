#include<iostream>
using namespace std;
//how to make class as template?
template<class T>
class stack
{
private:
    T *stk;
    int top;
    int size;
public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk= new T[size];
    }
    void push(T x);
    T pop();
};

template<class T>
void stack<T>::push(T x)
{
    if(top==size-1) 
        cout << "Stack is full";
    else
    {
        top++;
        stk[top] = x;
    }
}

template<class T>
T stack<T>::pop()
{
    T x=0;
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<int> s(10);
    s.push(23);
    s.push(33);
    s.push(12);
    cout<<s.pop();

}
