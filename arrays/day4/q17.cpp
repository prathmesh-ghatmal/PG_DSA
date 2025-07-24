// find length of longest sub array with sum k

#include <iostream>
using namespace std;

int count_length(int arr[],int n , int k)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {   
        int sum=0;
        int cnt=0;
        for (int j = i; j < n; j++)
        {   
            cnt++;
            sum=sum+arr[j];
           
            if(sum==k)
            {
                if(cnt>max)
                {   
                    max=cnt;
                }
            }
            else if(sum>k)
            {
                break;
            }
        }
        
    }

    return max;
    
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<count_length(arr,n,k);
    
}