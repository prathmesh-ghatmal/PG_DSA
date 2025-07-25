// Find max sum of subarray 
// brute force solution
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int Max_sum(int arr[],int n)
{
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {   
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum=sum+arr[j];
            maxi=max(maxi,sum);
        }
        
    }
   return maxi; 
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<Max_sum(arr,n);
}