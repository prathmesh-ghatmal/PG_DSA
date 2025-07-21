// in an array every no appears twice only one no appear once find it

#include <iostream>
using namespace std;

int find(int arr[],int n)
{
    int xor1=0;
    for (int i = 0; i < n; i++)
    {
        xor1=xor1^arr[i];
    }
    return xor1;
}

int main()
{
    int n ; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }
    
    cout<<find(arr,n);
    
}