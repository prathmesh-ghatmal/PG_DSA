// Question: Count the number of subarrays whose XOR is equal to a given value k.
// Approach: Brute-force approach using two nested loops to calculate XOR for all subarrays.
// Time Complexity: O(n^2), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int count_subarray_xor(vector<int>&v,int k)
{
    int n=v.size();
    int cnt=0;
    
    for (int i = 0; i < n; i++)
    {
        int xr=0;
        for (int j = i; j < n; j++)
        {
            xr=xr^v[j];
            if(xr==k)
            {
                cnt++;
            }
        }
        
    }
  return cnt;  
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<count_subarray_xor(v,k);
}