// Problem: Find all elements that appear more than ⌊n/3⌋ times in an array
// Approach: Frequency counting using unordered_map (HashMap)
// Time Complexity: O(n), Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> find_nby3_majority_element(vector<int> v)
{
    vector<int>ans;
    unordered_map<int, int> hash;
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        hash[v[i]]++;
    }
    
    for(auto x:hash)
    {
        if(x.second>n/3)
        {
            ans.push_back(x.first);
        }
        if(ans.size()==2)
        {
            break;
        }
    }
    return ans;
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
    vector<int> result = find_nby3_majority_element(v);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
}