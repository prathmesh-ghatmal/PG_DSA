// print sum of n nos using parameterized recursion

#include <iostream>
using namespace std;

void recursive(int n,int sum)
{
    if (n==0){
        cout<<sum;
        return;
    }

    recursive(n-1,sum+n);
}

int main()
{
    int n;
    cin>>n;
    recursive(n,0);
}