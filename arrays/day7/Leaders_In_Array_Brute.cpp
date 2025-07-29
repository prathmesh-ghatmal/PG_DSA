// Problem: Leaders in an Array
// Approach: Brute force (for each element, scan right side)
// Time: O(n²) | Space: O(1)

#include<iostream>
#include<vector>
using namespace std;

vector<int> find_leadears(vector <int> &arr)
{
    vector<int> leaders;
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        bool leader=true;
        for (int j=i+1; j < n; j++)
        {
            if(arr[i]<arr[j])
            {
                
                leader=false;
                break;
                
            }
        }
        
        if (leader==true) {leaders.push_back(arr[i]);}
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