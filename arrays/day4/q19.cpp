// find length of longest sub array with sum k

#include<iostream>
#include<vector>
using namespace std;

int count_longest_subarray(vector <long long>arr,long long k)
{
    int max_len=0;
    int left=0;
    int right=0;
    long long sum=arr[0];
    while(right<arr.size())
    {
        while (sum>k&&left<=right)
        {
            sum=sum-arr[left];
            left++;
        }
        
        if(sum==k)
        {   
           max_len=max(max_len,right-left+1);  
        }
        right++;
        if(right<arr.size()){sum=sum+arr[right];}
        
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