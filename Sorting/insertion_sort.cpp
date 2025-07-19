// write a program to sort an array using insertion sort

#include <iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && a[j-1]>a[j])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
        
        
    }
    
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
    
    insertion_sort(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}