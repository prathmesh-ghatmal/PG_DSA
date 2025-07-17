// hash lowercase characters and count occurances of given characters
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int hash[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']=hash[s[i]-'a']+1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<ch<<"="<<hash[ch-'a']<<endl;
    }
}