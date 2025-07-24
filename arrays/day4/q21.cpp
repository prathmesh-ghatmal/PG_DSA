// write a program to find out whether array contains two nos whose some is equal to target

#include <iostream>
#include <vector>
#include <map>
using namespace std;

string two_sum(vector <int> arr,int k)
{
    map<int,int> check;
    for (int i = 0; i < arr.size(); i++)
    {
        int rem=k-arr[i];
        if(check.find(rem)!=check.end())
        {  
            return "true";
        }
        if(check.find(arr[i])==check.end())
        {
            cout<<arr[i]<<endl;
            check[arr[i]]=i;
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