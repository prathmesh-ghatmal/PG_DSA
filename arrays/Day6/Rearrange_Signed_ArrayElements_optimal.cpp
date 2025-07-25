// Program: Rearrange signed array elements (equal positives & negatives)
// Approach: Single-pass placement using extra space
//           → Place positives at even indices, negatives at odd indices directly
// Time Complexity: O(n)
// Space Complexity: O(n)
#include<iostream>
#include <vector>
using namespace std;

vector<int> rearrange(int arr[],int n)
{   
    int pos_index=0;
    int neg_index=1;
    vector<int> answer(n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            answer[neg_index]=arr[i];
            neg_index+=2;
        }
        else
        {
            answer[pos_index]=arr[i];
            pos_index+=2;
        }
    }
    return answer;
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
    
    vector<int> v= rearrange(arr,n);

    for(auto x:v)
    {
        cout<<x<<" ";
    }

}