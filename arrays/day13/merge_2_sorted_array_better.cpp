// Q: How can we merge two sorted arrays without using extra space?  
// Approach: Compare largest of v1 with smallest of v2, swap if needed, then sort both arrays.  
// Time & Space Complexity: O((n+m) log(n+m)) time, O(1) extra space.  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> merge_two_sorted_arrays(vector<int> &v1,vector<int>&v2)
{
    int n=v1.size();
    int m=v2.size();
    int i=n-1;
    int j=0;
    while (i>=0&&j<m)
    {
        if(v1[i]>v2[j])
        {
            swap(v1[i],v2[j]);
            i--;
            j++;
        }
        else{break;}
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    return{v1,v2};
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<vector<int>> answer=merge_two_sorted_arrays(v1,v2);
    for(auto x:answer)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}