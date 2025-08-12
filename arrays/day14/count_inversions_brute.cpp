// Problem: Count Inversions in an array
// Approach: Brute Force comparison of all element pairs
// Time: O(N^2), Space: O(1)

#include<iostream>
#include<vector>
using namespace std;

int count_inversions(vector<int> &v)
{
    int cnt=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]>v[j])
            {
                cnt++;
            }
        }
        
    }
    return cnt;
}

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<count_inversions(v);
}