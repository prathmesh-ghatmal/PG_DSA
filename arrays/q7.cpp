// move zeros to end of the array

#include<iostream>
using namespace std;

void move_zeroes_to_end(int arr[],int n)
{
    int zero=n;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
        {
            zero=i;
            break;
        }
    }

    if (zero==n) return;

    for (int i = zero+1; i < n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[zero]);
            zero++;
        }
    }
    
    
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
    
    move_zeroes_to_end(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}