// Problem: Leaders in an Array
// Approach: Traverse from right, track running max
// Time: O(n) | Space: O(1) extra

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> find_leadears(vector<int> &arr)
{
    int maxi=INT_MIN;
    vector <int> leaders;

    for (int i = arr.size()-1; i >=0 ; i--)
    {
        if(arr[i]>maxi)
        {
            leaders.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    return leaders;   
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector <int>ans=find_leadears(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}