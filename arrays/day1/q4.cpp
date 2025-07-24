// remove duplicates in place in sorted array

#include <iostream>
using namespace std;

int remove_duplicates(int arr[],int n)
{
    int unique=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[unique])
        {
            arr[unique+1]=arr[i];
            unique++;
        }
    }
    return unique+1;
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
   int count= remove_duplicates(a,n);
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
