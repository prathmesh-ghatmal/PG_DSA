// Problem: Count the number of subarrays with sum equal to k.
// Approach: Brute force using two nested loops to check all subarrays.
// Time: O(n²), Space: O(1)

#include<iostream>
#include<vector>
using namespace std;

int Subarraysum(vector<int>&arr,int k)
{
    int n=arr.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                cnt++;
            }
        }
        
    }
   return cnt; 
}

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
           cin>>arr[i];
    }
    cout<<Subarraysum(arr,k);
}