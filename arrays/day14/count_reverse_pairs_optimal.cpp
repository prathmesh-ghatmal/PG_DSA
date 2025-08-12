// Problem: Count Reverse Pairs in an array
// Approach: Modified Merge Sort with two-pointer counting
// Time: O(N log N), Space: O(N)

#include<iostream>
#include<vector>
using namespace std;
int count_pairs(vector<int>&v,int low,int mid,int high)
{
    int right=mid+1;
    int cnt=0;
    for (int i = low; i <= mid; i++)
    {
        while (right<=high&&v[i]>2*v[right])
        {
            right++;
        }
        
        cnt=cnt+(right-mid-1);
    }
    return cnt;
}

void merge(vector<int>&v,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid&&right<=high)
    {
        if(v[left]<v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else{
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
  for (int  i = low; i <= high; i++)
  {
    v[i]=temp[i-low];
  }
    
    
}
int mergesort(vector<int> &v , int low ,int high)
{
    if (low>=high) return 0;

    int mid=low+(high-low)/2;
    int cnt=0;
    cnt+=mergesort(v,low,mid);
    cnt+=mergesort(v,mid+1,high);
    cnt+=count_pairs(v,low,mid,high);
    merge(v,low,mid,high);
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