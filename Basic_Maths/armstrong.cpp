#include<iostream>

using namespace std;

int main()
{
    int n,temp , rem,sum=0;
    cin>>n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    temp==sum?cout<<"armstrong":cout<<"not";
}