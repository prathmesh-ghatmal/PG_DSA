// Hash a array to get occurances of a particular element
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],hash[1000000000]={0};
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]=hash[a[i]]+1;
    }
    int q;
    cin>>q;
    
    for (int i = 0; i < q; i++)
    {   
        int n;
        cin>>n;
        cout<<n<<"="<<hash[n]<<endl;
    }
    
    
}