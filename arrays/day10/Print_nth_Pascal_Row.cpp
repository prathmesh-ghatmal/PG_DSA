// Problem: Find the N-th row of Pascal's Triangle
// Approach: Iterative Computation using Binomial Coefficient Formula (nCr)
// Time Complexity: O(n), Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

vector<long long> get_pascal_row(int row)
{
    long long ans=1;
    vector<long long> v;
    v.push_back(1);
    for (int i = 0; i < row-1; i++)
    {
        ans=ans*(row-i-1)/(i+1);
        
        v.push_back(ans);
    }
    
return v;
}

int main()
{
 int n;
 cin>>n;
vector<long long> v= get_pascal_row(n);
    for(auto x :v)
{
    cout<<x<<" ";
}
}