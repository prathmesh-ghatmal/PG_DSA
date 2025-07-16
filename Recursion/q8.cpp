// reverse an array usig two pointer recursion

#include<iostream>
using namespace std;

void recursive(int start,int end,int a[])
{
    if(start>=end) return;
    swap(a[start],a[end]);
    recursive(start+1,end-1,a);
}

int main()
{
    int n,a[5];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    recursive(0,n-1,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}