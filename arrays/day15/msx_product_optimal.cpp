// Program Name: Maximum Product Subarray (Optimized Prefix-Suffix Method)
// Approach: Traverse from both ends keeping prefix and suffix products, reset on zero
// Time Complexity: O(n), Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int find_max_product(vector<int> &v)
{
    
    int n=v.size();
    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix*v[i];
        suffix=suffix*v[n-i-1];
        maxi=max(maxi,max(prefix,suffix));
    }
    
    return maxi;
}

int main()
{
    int n ;
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