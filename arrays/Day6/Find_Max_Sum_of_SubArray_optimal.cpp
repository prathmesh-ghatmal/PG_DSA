// Find max sum of subarray 
// Kadane's Algorithm (Optimal Solution)
// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
#include <climits>
#include<algorithm>
using namespace std;

int max_sum(int arr[],int n)
{
    int maxi=INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        if(sum<0)
        {
            sum=0;
        }
       maxi=max(maxi,sum);
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
    
    cout<<max_sum(arr,n);
}