// Program Name: Binary Search (Recursive)
// Approach: Recursively divide the sorted array in half to locate the target element
// Time Complexity: O(log n), Space Complexity: O(log n) due to recursion stack

#include<iostream>
#include<vector>

using namespace std;

int binary_search(vector<int>&v,int low,int high,int target)
{
    if (low>high) return -1;
    int mid=low+(high-low)/2;

    if(v[mid]==target) return mid;

    else if(target>v[mid]) return binary_search(v,mid+1,high,target);

    else return binary_search(v,low,mid-1,target);
}

int main()
{
    int n;
    int target;
    cin>>n;
    cin>>target;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<binary_search(v,0,n-1,target);
}