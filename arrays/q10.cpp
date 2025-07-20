// get union of two arrays
#include <iostream>
#include <vector>
using namespace std;

void get_intersection(vector <int> v1,vector <int> v2)
{
    int l1=v1.size();
    int l2=v2.size();
    int i=0;
    int j=0;
    vector <int> intersect;

    while (i<l1&&j<l2)
    { 
        if(v1[i]==v2[j])
        {
            if(intersect.empty()||intersect.back()!=v1[i])
            {
            intersect.push_back(v1[i]);
            }
            
            i++;
            j++;
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    
    for (int x:intersect)
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
    
    get_intersection(v1,v2);
}