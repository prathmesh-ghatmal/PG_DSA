// Problem: Longest Consecutive Sequence (LeetCode 128)
// Approach: HashSet-based optimal solution (O(n))
// Logic: For each number, check if it's the start of a sequence (num - 1 not in set), then count forward
// Time Complexity: O(n) – each number is processed once
// Space Complexity: O(n) – for storing elements in unordered_set
// Edge Case Handled: Empty array returns 0

#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int longest_consecutive(vector <int> &arr)
{
    unordered_set<int> hasset;
    int n=arr.size();
    if (n==0) return 0;
    int maxi=1;
    for (int i = 0; i < n; i++)
    {
        hasset.insert(arr[i]);
    }
    for(int it :hasset)
    {
        if(hasset.find(it-1)==hasset.end())
        {
            int cnt=1;
            int x=it;
            while (hasset.find(x+1)!=hasset.end())
        {
            cnt++;
            x++;
        }
         maxi=max(maxi,cnt);
        }
       
        
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
    cout<<longest_consecutive(v);
  
    
}