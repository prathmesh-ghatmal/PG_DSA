// print sum of n nos using functional recursion

#include<iostream>
using namespace std;

int recursive(int n)
{
    if (n==0)
    {
        return 0; 
    }

    return n+recursive(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<recursive(n);
}