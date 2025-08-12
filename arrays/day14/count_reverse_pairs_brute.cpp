#include<iostream>
#include<vector>
using namespace std;

int count_reverse_pairs(vector<int> &v)
{
    int cnt=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]>2*v[j])
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
    cout<<count_reverse_pairs(v);
}