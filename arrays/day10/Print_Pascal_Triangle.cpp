// Problem: Print the first N rows of Pascal's Triangle
// Approach: Iterative nCr computation using multiplicative formula
// Time Complexity: O(n^2), Space Complexity: O(n^2)

#include<iostream>
#include<vector>
using namespace std;

vector<vector<long long>> print_pascal(int n)
{
    
    vector <vector<long long>> answer;

    for (int i = 1; i <= n; i++)
    {
        vector<long long> v;
        long long ans=1;
        v.push_back(ans);
        for (int j = 0; j < i-1; j++)
        {
            ans=ans*(i-j-1)/(j+1);
            v.push_back(ans);
        }
        answer.push_back(v);
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<long long>> v=print_pascal(n);

    for (int i = 0; i < n; i++)
    {
       for(auto x:v[i])
       {
        cout<<x<<" ";
       }
       cout<<endl;
    }
    
}