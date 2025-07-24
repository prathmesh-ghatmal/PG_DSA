// write a program to find out whether array contains two nos whose some is equal to target

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string two_sum(vector <int> arr,int target)
{
    int low =0;
    int high=arr.size()-1;
    sort(arr.begin(),arr.end());
    while (low<high)
    {
        int sum=arr[low]+arr[high];
        if(sum==target)
        {
            return "true";
        }
        if(sum<target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return "false";
}

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<two_sum(arr,k);
    
}