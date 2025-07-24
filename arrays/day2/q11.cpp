// find missing no from 1 to n with brute force method

#include <iostream>
using namespace std;

int find_missing(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for (int j = 0; j <=n-1; j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
                
            }
            
        }
        if (flag==0) 
        {return i;}
    }
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