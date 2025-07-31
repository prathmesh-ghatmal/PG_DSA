// Problem: Count the total number of subarrays with sum equal to k
// Approach: Prefix Sum + Hashmap to store frequency of prefix sums
// Time Complexity: O(n), Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarray_sum(vector<int> &arr,int k)
{
    int n =arr.size();
    unordered_map<int,int> hash;
    int presum=0;
    int cnt=0;
    hash[0]=1;
    for (int i = 0; i < n; i++)
    {
        presum=presum+arr[i];
        cnt+=hash[presum-k];
        hash[presum]++;
    }
  return cnt;  
}

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
           cin>>arr[i];
    }
    cout<<subarray_sum(arr,k);
}