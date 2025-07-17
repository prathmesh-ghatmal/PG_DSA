// hash string using map and count occurances
#include <iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    unordered_map<char,int> freq;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {   
        char x;
        cin>>x;
        cout<<x<<"="<<freq[x]<<endl;
    }
    
        
}