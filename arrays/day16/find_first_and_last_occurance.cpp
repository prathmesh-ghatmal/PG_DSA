// Problem: Find First and Last Occurrence of a Number in a Sorted Array
// Approach: Binary Search to find first and last positions, then calculate count
// Time Complexity: O(log n), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int find_first_occurance(vector<int> &arr,int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = -1;

    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>=x)
        {   
           if (arr[mid]==x) ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
   
    return ans;
}

int find_last_occurance(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = -1;

    while (low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]<=x)
        {
            if(arr[mid]==x) ans=mid;
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
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
    int first=find_first_occurance(v,x);
    if(first== -1)
    {
        cout<<"no not present";
    }
    else
    {
        int last=find_last_occurance(v,x);
        cout<<"first occurnce = "<<first<<endl;
        cout<<"last occurance ="<<last<<endl;
        int count = last-first+1;
        cout<<"no of occurances ="<<count;
    }
    
    
}