// Q: How to merge two sorted arrays in-place without extra space efficiently?  
// Approach: Use the Gap method (Shell Sort idea) to compare and swap distant elements, reducing gap each pass.  
// Time & Space Complexity: O((n+m) log(n+m)) time, O(1) space.  

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> merge_two_sorted_arrays(vector<int>&v1,vector<int>&v2)
{
    int n=v1.size();
    int m=v2.size();

    int len=n+m;
    int gap=len/2+(len%2);

    while (gap>0)
    {
        int left=0;
        int right=left+gap;
        while (right<len)
        {
           if(right<n)
           { if(v1[left]>v1[right])
            {
                swap(v1[left],v1[right]);
            }
             
           }else if (left<n && right>=n)
           {
            if(v1[left]>v2[right-n])
            {
                swap(v1[left],v2[right-n]);
            }
             
           }
           else if(left>=n)
           {
            if (v2[left-n]>v2[right-n])
            {
                swap(v2[left-n],v2[right-n]);
            }
            
             
           }
           left++; right++;
           
        }
         if(gap==1) break;
        gap=gap/2+(gap%2);
    }
    
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