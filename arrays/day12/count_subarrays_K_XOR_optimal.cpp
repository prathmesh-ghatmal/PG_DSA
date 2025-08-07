// 1. Question: Count the number of subarrays in the given array whose XOR is equal to a given value `k`.
// 2. Approach: Prefix XOR + Hash Map
//    - Maintain the prefix XOR while iterating through the array.
//    - For each prefix XOR, check if there exists a prefix with XOR equal to `prefix_xor ^ k`.
//    - Use a hash map to store the frequency of each prefix XOR encountered so far.
// 3. Time Complexity: O(n), Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int count_subarray_xor(vector<int>&v,int k)
{
    int n=v.size();
    map<int,int> hash;
    int xr=0;
    int cnt=0;
    hash[xr]=1;
    for (int i = 0; i < n; i++)
    {
        xr=xr^v[i];

        int x=xr^k;
        cnt+=hash[x];
        hash[xr]++;
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
