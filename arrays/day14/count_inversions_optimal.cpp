// Problem: Count Inversions in an array
// Approach: Merge Sort with inversion counting during merge step
// Time: O(N log N), Space: O(N)

#include<iostream>
#include<vector>

using namespace std;
int merge(vector<int>&v,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    int cnt=0;

    while (left<=mid&&right<=high)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left]);
            left++;    
        }
        else{
            cnt=cnt+(mid-left+1);
            temp.push_back(v[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(v[right]);
        right++;
    }
    
    for (int i = low; i <=high; i++)
    {
        v[i]=temp[i-low];
    }
    
    return cnt;
}
int mergesort(vector<int>&v,int low,int high)
{
    if (low>=high) return 0;
    int mid=low+(high-low)/2;
    int cnt=0;
    cnt+=mergesort(v,low,mid);
    cnt+=mergesort(v,mid+1,high);
    cnt+=merge(v,low,mid,high);
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
    cout<<mergesort(v,0,n-1);
}