// find missing no from 1 to n using optimal solution 
#include <iostream>
using namespace std;

int find_missing(int arr[],int n)
{
    int sum1=n*(n+1)/2;
    int sum2=0;
    for (int i = 0; i < n-1; i++)
    {
        sum2+=arr[i];
    }
    return sum1-sum2;
}

int main()
{
    int n ; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
            cin>>arr[i];
    }

    cout<<find_missing(arr,n);
    
}