// write a program to find out whether array contains two nos whose some is equal to target

#include<iostream>
#include<vector>
using namespace std;

string two_sum(vector<int> arr,int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return "yes";
            }
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