// Problem: Find elements that appear more than ⌊n/3⌋ times in an array
// Approach: Boyer-Moore Voting Algorithm (optimized for two candidates)
// Time Complexity: O(n), Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> find_nby3_majority_element(vector<int>v)
{
    int cnt1=0, cnt2=0;
    int ele1=INT_MIN, ele2=INT_MIN;
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        if(cnt1==0&&ele2!=v[i])
        {
            cnt1=1;
            ele1=v[i];
        }
        else if(cnt2==0&&ele1!=v[i])
        {
            cnt2=1;
            ele2=v[i];
        }
        else if(v[i]==ele1)
        {
            cnt1++;
        }
        else if(v[i]==ele2)
        {
            cnt2++;
        }
        else{cnt1--;cnt2--;}
    }
    
    cnt1=0;cnt2=0;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==ele1) cnt1++;
        if(v[i]==ele2) cnt2++;
    }
    
    if (cnt1>n/3) ans.push_back(ele1);
    if(cnt2>n/3) ans.push_back(ele2);
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