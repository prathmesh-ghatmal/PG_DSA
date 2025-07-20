// rotate the array by one place to left
#include <iostream>
using namespace std;

void rotate(int arr[],int n)
{
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    
arr[n-1]=temp;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    rotate(a,n);

    for (int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
