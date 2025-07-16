// revrse array using single pointer using recursion
#include <iostream>
using namespace std;

void recursive(int i,int a[],int n)
{
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    recursive(i+1,a,n);
}

int main(){
    int n ,a[5];
    cin>>n;
    for (int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    recursive(0,a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}