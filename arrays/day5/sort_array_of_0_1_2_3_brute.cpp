// sort arrays of `0`, `1`, `2` using brute force
#include<iostream>
using namespace std;

void mergesort(int arr[],int low,int high)
{
    if(low>=high) return;

    int mid=low+high/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);
}

void merge(int arr[],int low,int high,int mid)
{
    int i=low;
    int j=high;

    while (i<j)
    {
        if(arr[i]<arr[j])
        {
            i++;
        }
    }
    
}
