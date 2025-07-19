// write a program to sort elements of  array using bubble sort

#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int didswap=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0)
        {
            break;
        }
       
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
            cout<<arr[i]<<" ";
    }
    
    
}