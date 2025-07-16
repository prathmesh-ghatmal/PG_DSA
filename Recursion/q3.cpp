// print n to 1 using recursion
#include<iostream>
using namespace std;

void recursive(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    recursive(n-1);
}

int main()
{
    int n ;
    cin>>n;
    recursive(n);
}