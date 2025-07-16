// check if string is palindrome or not using recursion

#include<iostream>
using namespace std;

bool ispalindrome(string s,int len,int i)
{
    if(i>=len/2) return true;
    if (s[i]!=s[len-i-1]) return false;
    return ispalindrome(s,len,i+1);
}

int main(){
    string s;
    cin>>s;
    cout<<ispalindrome(s,s.length(),0);

}