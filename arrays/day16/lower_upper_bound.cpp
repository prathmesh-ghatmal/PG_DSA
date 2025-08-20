// Problem: Find Lower and Upper Bound in a Sorted Array
// Approach: Binary Search for lower bound (>= x) and upper bound (> x)
// Time Complexity: O(log n), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int lower_bound(vector<int> &arr,int x)
{
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while (low<=high)
    {   
        int mid=low+(high-low)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
  return ans;  
}

int upper_bound(vector<int> &arr,int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = n;

    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>x)
        {
            ans=mid;
            high=mid-1;
        }
        else{
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
    cout<<"lower bound index = "<<lower_bound(v,x)<<endl;
    cout<<"upper bound index = "<<upper_bound(v,x)<<endl;
    
}