// sort arrays of `0`, `1`, `2` optimal approach
// solved using Dutch National Flag logic 
// time complexity= O(n)
// space complexity= O(1) 

#include<iostream>
#include<vector>
using namespace std;

void sort_012(vector<int> &arr,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while (mid<=high)
    {   
        if(arr[mid]==0)
        {   if(low!=mid) // To avoid unnecessary swaps
            {
                swap(arr[mid],arr[low]);
            }
            low++;
            mid++;

        }
       else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
            
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort_012(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}