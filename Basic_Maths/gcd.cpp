#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(a>0 && b>0){
        if(a==min(a,b))b=b%a;
        else a=a%b;
    }
    if(a==0) return b;
    return a;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
 
    cout << GCD(a,b);
}