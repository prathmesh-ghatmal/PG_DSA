// Rearrange_Signed_ArrayElements_Unequal.cpp
// Approach: 
// 1. Separate positive and negative numbers into two vectors.
// 2. Alternate elements from both vectors until one runs out.
// 3. Append the remaining elements from the larger vector.
// 
// Time Complexity: O(n)  → single pass to separate + single pass to rearrange
// Space Complexity: O(n) → extra space for pos[] and neg[]

#include<iostream>
#include<vector>
using namespace std;

void rearange(int arr[],int n)
{
    vector <int> pos;
    vector <int> neg;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    
    if(pos.size()<neg.size())
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[i+pos.size()]=neg[i];
        }      
    }
    else
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[neg.size()+i]=pos[i];
        }
        
        
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
    rearange(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}