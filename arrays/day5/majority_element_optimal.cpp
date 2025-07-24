// Finds majority element (> n/2 times)
// Approach: Boyer–Moore Voting Algorithm (optimal)
// Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
using namespace std;

int majority_element(int arr[],int n)
{
    int ele=arr[0];
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele)
        {
            cnt++;
        }
        else{
            cnt--;
        }

        if(cnt==0)
        {
            ele=arr[i];
            cnt=1;
        }
    }
    cnt=0;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]==ele)
        {
            cnt++;
        }
    }
    
    if(cnt>n/2) return ele;
    else return -1;
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