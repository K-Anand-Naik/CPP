#include<iostream>
#include<cstring>
using namespace std;

int Search(int A[], int n, int key) 
{
    for (int i = 0; i < n; i++)
    {
        if(key == A[i])
        {
            return i;
        }
        
    }
    return 0;
}

int main()
{
    int A[]={2,45,65,7,54,43,56};
    int m;
    m = sizeof(A);
    int k;
    cout << "Enter the element to be searched: ";
    cin >>k;
    int index=Search(A,m,k);
    cout<<"Element found at index: "<<index;
}