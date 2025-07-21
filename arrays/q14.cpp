// find missing no from an array using xor
#include <iostream>
using namespace std;

int find_missing(int arr[],int n)
{
    int xor1=0;
    int xor2=0;
    for (int i = 0; i < n-1; i++)
    {
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    return xor1^xor2;
    
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