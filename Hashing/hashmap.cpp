// use map for array hashing and counting occurances
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int a[100],n;
    unordered_map<int,int> freq;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<x<<"="<<freq[x]<<endl;
    }
    
    
}