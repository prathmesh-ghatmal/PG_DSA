// rotate element by d towards left

#include <iostream>
#include<algorithm>
using namespace std;

void rotate_d(int arr[],int n,int d)
{
    d=d%n;
  reverse(arr,arr+d);
  reverse(arr+d,arr+n);
  reverse(arr,arr+n);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int d;
    cin>>d;

    rotate_d(a,n,d);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}