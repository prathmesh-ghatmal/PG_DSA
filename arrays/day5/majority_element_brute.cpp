// find out majority element which occurs more than n/2 times
// brute force
//Time Complexity O(n*n)
// Space Complexity O(1)

#include<iostream>
using namespace std;

int majority_element(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==arr[i])
            {
                cnt++;   
            }
        }
        
        if(cnt>n/2) return arr[i];
    }
    return -1;
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
    cout<<majority_element(arr,n);
}