// Problem: Find Insert Position in a Sorted Array
// Approach: Binary Search to find the index where x can be inserted to maintain order
// Time Complexity: O(log n), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int find_insert_position(vector<int> & arr,int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans=n;

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
    cout<<"insert position = "<<find_insert_position(v,x);
    
}