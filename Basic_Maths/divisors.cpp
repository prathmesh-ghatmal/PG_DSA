#include<math.h>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=1;i*i<=n;i++)
        {
            if(n%i==0){
                if(n/i!=i)
                {
                    v.emplace_back(i);
                    v.emplace_back(n/i);
                }
                else{ v.emplace_back(i);}
                
            }
            }
    sort(v.begin(),v.end());
    for(int x: v){
        cout<<x<<endl;
    }
}