// sort arrays of `0`, `1`, `2` better approach
// solved using counter 
// time complexity= O(2n)
// space complexity= O(1) 

#include<iostream>
using namespace std;

void sort_012 (int arr[],int n)
{
    int cnt0=0,cnt1=0,cnt2=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
        {
            cnt0+=1;
        }
        else if(arr[i]==1)
        {
            cnt1+=1;
        }
        else if(arr[i]==2)
        {
            cnt2+=1;
        }
    }

    int j=0;

    for (int i = 0; i < cnt0; i++,j++)
    {
        arr[j]=0;
    }
    for (int i = 0; i < cnt1; i++,j++)
    {   
        arr[j]=1;
    }
    for (int i = 0; i < cnt2; i++,j++)
    {  
        arr[j]=2;
    }
    
    
    
}

int main  ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort_012(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}