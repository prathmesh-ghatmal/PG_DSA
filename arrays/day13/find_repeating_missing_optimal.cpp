// Q: Find the repeating and missing numbers in an array of size n containing numbers 1 to n.
// Approach: Use sum and sum of squares difference to form equations and solve for repeating & missing.
// Time: O(n), Space: O(1)

#include<iostream>
#include<vector>
using namespace std;

vector<int> find_repeating_missing(vector<int>&v)
{
    int n=v.size();
    int s=0;
    int s2=0;
    for (int i = 0; i < n; i++)
    {
        s=s+v[i];
        s2=s2+v[i]*v[i];
    }
    int sn= (n*(n+1))/2;
    int sn2=((n*(n+1))*(2*n+1))/6;

    int val1=s-sn;
    int val2=s2-sn2;
    val2=val2/val1;
    int x=(val1+val2)/2;
    int y=x-val1;
    return{x,y};
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int> answer=find_repeating_missing(v);

    for(auto x: answer)
    {
        cout<<x<<" ";
    }
}