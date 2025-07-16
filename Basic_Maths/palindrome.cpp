#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,temp,rem;
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    rev==temp?cout<<true:cout<<false;
}