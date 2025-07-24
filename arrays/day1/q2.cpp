// Find the second largest and smallest elements

#include <iostream>
#include <climits>
using namespace std;

int Findslargest(int arr[],int n)
{
    if (n<2) return INT_MIN;
    int largest=arr[0],slargest=INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]!=largest&&arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    if(slargest==INT_MIN)
    {
        cout<<"no slargest element";
        return 0;
    }
    
    return slargest;
}

int Findssmallest(int arr[],int n)
{
    if(n<2) return 0;
    int smallest=arr[0];
    int ssmallest=INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

pair<int,int> Find_Second_largest_smallest(int arr[],int n)
{
    int slargest=Findslargest(arr,n);
    int ssmallest=Findssmallest(arr,n);
    return {slargest,ssmallest};
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    pair<int,int> output=Find_Second_largest_smallest(arr,n);
    cout<<"second largest="<<output.first<<endl<<"second smallest="<<output.second;
}