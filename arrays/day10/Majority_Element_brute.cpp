// Problem: Find all elements that appear more than ⌊n/3⌋ times in an array
// Approach: Brute-force method using nested loops for frequency counting
//           and deduplication by checking if the element is already in the result vector
// Time Complexity: O(n^2) due to nested loops
// Space Complexity: O(k), where k is the number of elements appearing more than n/3 times

#include<iostream>
#include<vector>
using namespace std;

vector<int> find_nby3_majority_element(vector<int> v)
{
    int n =v.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int cnt=1;
         bool counted=false;
        for(auto x:ans)
        {
           if(v[i]==x) 
           {
           
            counted=true;
           }

        }
        if(counted==true) continue;
        for (int j = i+1; j < n; j++)
        {
            
            if(v[i]==v[j])
            {
                cnt++;
            }
        }
       
        if(cnt>n/3)
        {  
            ans.push_back(v[i]);
        }
    }
    
    return ans;
}

int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> result = find_nby3_majority_element(v);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
}