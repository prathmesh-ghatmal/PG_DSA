// Problem: Find Floor and Ceil in a Sorted Array
// Approach: Binary Search to find floor (<= x) and ceil (>= x) positions
// Time Complexity: O(log n), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int find_floor(vector<int> & arr,int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans=-1;

    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]<=x)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
   return ans; 
}

int find_ceil(vector<int> & arr,int x)
{
    int n = arr.size();
    int low = 0 ;
    int high = n-1;
    int ans = -1;

    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
   return ans; 
}

int main()
{
    int n;
    vector<int> v;
    int x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    cin>>x;
    cout<<"floor position = "<<find_floor(v,x)<<endl;
    cout<<"ceil position = "<<find_ceil(v,x)<<endl;
}