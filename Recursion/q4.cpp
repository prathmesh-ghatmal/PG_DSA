// print 1 to n without using additional variable using recursion

#include <iostream>
using namespace std;

void recursive(int n)
{
    if (n==0) return;
    recursive(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    recursive(n);
}