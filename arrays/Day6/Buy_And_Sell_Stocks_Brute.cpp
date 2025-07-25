// Program: Best Time to Buy and Sell Stocks
// Approach: Brute Force (Check all buy/sell pairs)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<iostream>
#include<algorithm>
using namespace std;

int max_profit(int arr[],int n)
{
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int profit=arr[j]-arr[i];
            maxi=max(maxi,profit);
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
    cout<<max_profit(arr,n);
}