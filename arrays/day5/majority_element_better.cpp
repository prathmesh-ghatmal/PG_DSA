// Finds majority element (> n/2 times)
// Approach: Using map frequency count (better)
// Time Complexity: O(n log n) with std::map (balanced tree)
// Space Complexity: O(n)


#include <iostream>
#include<map>
using namespace std;

int majority_element(int arr[],int n)
{
    map<int,int> hash;
    for (int  i = 0; i < n; i++)
    {
        if(hash.find(arr[i])==hash.end())
        {
            hash[arr[i]]=1;
        }
        else{
            hash[arr[i]]++;
        }
        
    }
    
    for(auto x:hash)
    {
        if(x.second>n/2) return x.first;
    }
    return -1;
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

    cout<<majority_element(arr,n);
    
}