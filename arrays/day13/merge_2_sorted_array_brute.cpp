// Q: Merge two sorted arrays into sorted order without using extra sorting
// Approach: Use two-pointer merge to create temp array, then copy back into v1 and v2
// TC & SC: O(n+m) time, O(n+m) space

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> merge_two_sorted_arrays(vector<int>&v1,vector<int>&v2)
{
    int n=v1.size();
    int m=v2.size();
    int i=0;
    int j=0;
    vector<int> temp;
    while (i<n&&j<m)
    {
        if(v1[i]<v2[j])
        {
            temp.push_back(v1[i]);
            i++;
        }
        else{
            temp.push_back(v2[j]);
            j++;
        }
    }

    while (i<n)
    {
        temp.push_back(v1[i]);
        i++;
    }

    while (j<m)
    {
        temp.push_back(v2[j]);
        j++;
    }

    for (int i = 0; i < n+m; i++)
    {
        if(i<n)
        {
            v1[i]=temp[i];
        }
        else
        {
            v2[i-n]=temp[i];
        }
    }
    
    
    return {v1,v2};
    
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