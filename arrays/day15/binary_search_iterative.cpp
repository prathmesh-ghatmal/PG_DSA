// Program Name: Binary Search (Iterative)
// Approach: Repeatedly divide the sorted array in half to locate the target element
// Time Complexity: O(log n), Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> &v,int target)
{
    int n=v.size();
    int low=0;
    int high=n-1;
    
    while (low<=high)
    {  
        int mid=low+(high-low)/2;
       if (v[mid]==target) return mid;
       else if (target>v[mid])
       {
            low=mid+1;
       }
       else if(target<v[mid])
       {
            high=mid-1;
       }
        
    }
    return -1;
}

int main()
{
    int n;
    int target;
    vector<int> v;
    cin>>n;
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<binary_search(v,target);
    
}