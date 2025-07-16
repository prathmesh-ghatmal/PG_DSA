#include<iostream>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    while(n>0){
        cnt++;
        n=n/10;
    }
    cout<<cnt;
}