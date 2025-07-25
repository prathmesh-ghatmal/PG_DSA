// Program: Best Time to Buy and Sell Stocks with Buy/Sell Days
// Approach: Single Pass (Optimal Kadane-like)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

pair<int,pair<int,int>> max_profit(int arr[],int n)
{
    int maxprofit=0;
    int minprice=arr[0];
    int buy=0;
    int sell=0;
    int tempbuy=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<minprice)
        {
            minprice=arr[i];
            tempbuy=i;
        }
        int profit=arr[i]-minprice;

        if(maxprofit<profit)
        {
            maxprofit=profit;
            buy=tempbuy;
            sell=i;
        }
    }
    pair <int,int> p;
    p.first=buy;
    p.second=sell;
    
    return {maxprofit,p};
    
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

    pair<int,pair<int,int>> p=max_profit(arr,n);

    cout<<"Max Profit: "<<p.first<<endl;
    cout<<"Buy on day: "<<p.second.first<<endl;
    cout<<"Sell on day: "<<p.second.second<<endl;
}