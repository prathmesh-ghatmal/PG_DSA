// // find length of longest sub array with sum k
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int count_longest_subarray(vector<long long > arr,long long k)
{
    map<long long,int> presum;
    long long sum=0;
    int max_len=0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum=sum+arr[i];
        if(sum==k)
        {
            max_len=max(max_len,i+1);
        }
        long long rem=sum-k;
        
        if(presum.find(rem)!=presum.end())
        {
            max_len=max(max_len,i-presum[rem]);
        }
        if(presum.find(sum)==presum.end())
        {
            presum[sum]=i;
        }
    }
    return max_len;
}

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector <long long> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<count_longest_subarray(arr,k);
    
}