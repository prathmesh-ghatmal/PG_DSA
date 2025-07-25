// Program: Rearrange signed array elements (equal positives & negatives)
// Approach: Brute Force using extra space (split into positives & negatives, then merge alternately)
// Time Complexity: O(n)
// Space Complexity: O(n)
#include<iostream>
#include<vector>
using namespace std;

void rearranged(int arr[],int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {   
        if(arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < n/2; i++)
    {
        arr[i*2]=pos[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        arr[i*2+1]=neg[i];
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
    rearranged(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}