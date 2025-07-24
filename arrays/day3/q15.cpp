// find maximum no of consecutive ones in an array

#include <iostream>
using namespace std;

int find_maximum_ones(int arr[],int n)
{
    int cnt=0;
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            if(cnt>max)
            {
                max=cnt;
            }
        }
        else
        {
            cnt=0;
        }
    }
    return max;
}

int main()
{
    int n ; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }
    
    cout<<find_maximum_ones(arr,n);
    
}