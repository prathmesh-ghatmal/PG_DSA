// print name n times using recursion

#include<iostream>
using namespace std;

void recursive(int n)
{
    if (n==0) return;
    cout<<"name"<<endl;
    recursive(--n);
}

int main()
{   
    int n ;
    cin>>n;
    recursive(n);
}