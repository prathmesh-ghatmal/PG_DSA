// sort elemets or array using quicksort

#include <iostream>
#include<vector>
using namespace std;

int partition(vector <int> &a,int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;

    while (i<j)
    {
        while (a[i]<=pivot&&i<=high)
        {
            i++;
        }
        while (a[j]>pivot&&j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
        
        
    }
    swap(a[low],a[j]);
    return j;
    
}

void quicksort(vector<int> &a, int low,int high)
{
    if(low<high) 
    {
      int  pivot=partition(a,low,high);
      quicksort(a,low,pivot-1);
      quicksort(a,pivot+1,high);
    }

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

    quicksort(a,0,n-1);

     for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}