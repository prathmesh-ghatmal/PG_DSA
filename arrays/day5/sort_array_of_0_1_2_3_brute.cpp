// sort arrays of `0`, `1`, `2` using brute force
// solved using mergesort 
// time complexity= O(n log n)
// space complexity= O(n) 
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int high,int mid)
{
    vector<int> temp;
    int i=low;
    int j=mid+1;
    while (i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {    
        temp.push_back(arr[i]);
        i++;
       
    }
    while (j<=high)
    {  
        temp.push_back(arr[j]);
         j++;
        
    }

    for (int i = low; i <=high; i++)
    {
        arr[i]=temp[i-low];
    }   
    
}

void mergesort(vector <int> &arr,int low,int high)
{
    
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);
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

    mergesort(a,0,n-1);

     for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}