// print 1 to n linearly using recursion
#include<iostream>
using namespace std;

void recursive(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    recursive(i+1,n);
}

int main()
{
    int n;
    cin>>n;
    recursive(1,n);
}