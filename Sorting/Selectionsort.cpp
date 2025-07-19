// write a program to sort an array using selection sort

#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=i;

        for (int j = i+1 ; j < n; j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i){
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        }
    }
}

int main()
{
    int n;
    // input no of elemets in array
    cin>>n;
    int arr[n];

    // input elements in array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // selection sort
    selectionsort(arr,n);
    

    // display elements in array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}