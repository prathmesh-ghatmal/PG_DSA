// Program: Maximum Subarray Sum with Subarray Extraction
// Approach: Kadane's Algorithm (Optimal)
// Time Complexity: O(n)
// Space Complexity: O(1) for calculation, O(k) for output subarray

#include<iostream>
#include<vector>
using namespace std;

pair<int,vector<int>> max_sum(int arr[],int n)
{
    int maxi=arr[0];
    int sum=arr[0];
    int start=0;
    int end=0;
    int tempstart=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>sum+arr[i])
        {
            sum=arr[i];
            tempstart=i;
        }
        else{
            sum+=arr[i];
        }

        if(sum>maxi)
        {
            maxi=sum;
            end=i;
            start=tempstart;
        }
    }
    
    vector<int> v;
    for(int i=start;i<=end;i++)
    {
        v.push_back(arr[i]);
    }
    return {maxi,v};
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    pair<int,vector<int>> p =max_sum(arr,n);

    cout<<"sum="<<p.first<<endl;
    cout<<"subarray=";
    for(auto x:p.second)
    {
        cout<<x<<" ";
    }
}