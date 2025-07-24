// write a program to find union of two sorted arays

#include<iostream>
#include<vector>
using namespace std;

void get_union(vector<int> v1,vector <int> v2)
{
    int l1=v1.size();
    int l2=v2.size();
    vector <int> u;
    int i=0,j=0;
    while (i<l1&&j<l2)
    {
        if(v1[i]<=v2[j])
        {   
            if(u.empty()||u.back()!=v1[i])
            {
            u.push_back(v1[i]);
            cout<<"first"<<endl;
            }
            i++;
            
        }
        else{
            if(u.empty()|| v2[j]!=u.back())
            {
                u.push_back(v2[j]);
                cout<<"second"<<endl;
            }
            j++;
            
        }
    }
    while(i<l1)
    {
        
       if(u.empty()||u.back()!=v1[i])
            {
            u.push_back(v1[i]);
            cout<<"first"<<endl;
            }
            i++;
    }

    while(j<l2)
    {
         if(u.empty()|| v2[j]!=u.back())
            {
                u.push_back(v2[j]);
                cout<<"second"<<endl;
            }
            j++;
    }

    for(auto x:u)
    {
        cout<<x<<" ";
    }

}

int main()
{
    int a,b,x;
    vector <int> v1;
    vector <int> v2;
    cin>>a;
    cin>>b;

    for (int i = 0; i < a; i++)
    {
        cin>>x;
        v1.push_back(x);
    }

    for (int i = 0; i < b; i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    
    get_union(v1,v2);
}