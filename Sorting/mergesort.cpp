// write a program to sort the element of arrays using merger sort
#include <iostream>
#include<vector>
using namespace std;

void merge(vector <int> &a,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector <int> temp;
    while (left<=mid&&right<=high)
    {
        if(a[left]<a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }

    while (left<=mid)
    {
       temp.push_back(a[left]);
       left++;
    }
    while (right<=high)
    {
        temp.push_back(a[right]);
        right++;
    }
    
    for (int i = low; i <=high; i++)
    {
        a[i]=temp[i-low];
    }
}

void mergersort(vector<int> &a,int low,int high)
{
    if (low>=high) return;

    int mid=low+(high-low)/2;

    mergersort(a,low,mid);
    mergersort(a,mid+1,high);
    merge(a,low,mid,high);
}



int main()
{
    int n;
    int x;
    vector<int> a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    mergersort(a,0,n-1);

     for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}