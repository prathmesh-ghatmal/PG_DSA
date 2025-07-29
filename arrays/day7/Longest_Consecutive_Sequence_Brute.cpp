// Problem: Longest Consecutive Sequence (LeetCode 128)
// Approach: Brute force using sorting and linear scan
// Time Complexity: O(n log n)
// Space Complexity: O(1) extra space
// Handles: Unsorted input, duplicates, and gaps
// Limitation: Not optimal, better O(n) approach exists using HashSet


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_longest_consecutive_sequence(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int maxi=0;
    int curl=1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1]) // Skip duplicates
        {
            continue;
        }
        if(arr[i]==arr[i+1]-1)
        {
            curl++;
        }
        else{
            curl=1;
        }
        maxi=max(maxi,curl);
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<find_longest_consecutive_sequence(v);
  
    
}