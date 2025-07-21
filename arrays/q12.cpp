// find missing no in the array which contains no 1 to n using hashing
#include <iostream>
using namespace std;

int find_missing(int arr[],int n)
{
    int hash[n+1]={0};
    for (int i = 0; i <n; i++)
    {   
        hash[arr[i]]=1;
    }

    for (int i = 1; i <= n; i++)
    {
       if(hash[i]==0)
       {
        return i;
       }
    }
    
    return -1;
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

    cout<<find_missing(arr,n);
    
}