#include <iostream>
using namespace std;

void recursive(int n)
{   if (n==0){
    return;
}
    cout<<n;
    recursive(--n);
}

int main(){
    int n=0;
    cin>>n;
    recursive(n);
}
