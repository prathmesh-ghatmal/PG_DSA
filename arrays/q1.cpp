// Find the largest element in an array

#include<iostream>
using namespace std;

int Findlargest(int a[],int n)
{
    int largest=a[0];

    for (int i = 1; i < n; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    return largest;
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
    
    cout<<Findlargest(arr,n);
    
}