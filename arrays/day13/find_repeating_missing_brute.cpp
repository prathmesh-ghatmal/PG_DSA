// Q: Find the repeating and missing numbers in an array of size n containing numbers 1 to n.
// Approach: Use hashing to count occurrences and identify repeating & missing elements.
// Time: O(n), Space: O(n)

#include<iostream>
#include<vector>

using namespace std;

vector<int> find_repeating_missing(vector<int>&v)
{
    int n=v.size();
    vector<int> hash(n+1,0);
    int missing=-1;
    int repeating=-1;
    for (int i = 0; i < n; i++)
    {
        hash[v[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if(hash[i]==0)
        {
            missing=i;
        }else if(hash[i]==2)
        {
            repeating=i;
        }
        if(missing!=-1&&repeating!=-1)
        {
            break;
        }
    }
    
  return {repeating,missing};  
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int> answer=find_repeating_missing(v);

    for(auto x: answer)
    {
        cout<<x<<" ";
    }
}