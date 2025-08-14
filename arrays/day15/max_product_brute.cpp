// Program Name: Maximum Product Subarray (Brute Force)
// Approach: Check product of all possible subarrays using nested loops
// Time Complexity: O(n^2), Space Complexity: O(1)
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int find_max_product(vector<int> &v)
{
    int maxi=INT_MIN;
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        int prod=1;
        for (int j = i; j < n; j++)
        {
            prod=prod*v[j];
            maxi=max(maxi,prod);
        }
        
    }
    return maxi;
}

int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<find_max_product(v);
}