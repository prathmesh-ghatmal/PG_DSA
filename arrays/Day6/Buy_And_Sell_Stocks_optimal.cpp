// Program: Best Time to Buy and Sell Stocks
// Approach: Single Pass (Optimal Kadane-like)
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <iostream>
#include <algorithm>
using namespace std;

int max_profit(int arr[],int n)
{
    int minprice=arr[0];
    int maxprofit=0;

    for (int i = 1; i < n; i++)
    {
        minprice=min(minprice,arr[i]);
        int profit=arr[i]-minprice;
        maxprofit=max(profit,maxprofit);
    }
    return maxprofit;
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