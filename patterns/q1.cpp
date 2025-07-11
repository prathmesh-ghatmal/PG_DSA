#include <iostream>
using namespace std;
void pattern1(int n){
  for(int i=0;i<=n;i++){
    for(int j=1;j<=i+1;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
      for(int j=1;j<i+1;j++)
      {
          cout<<i<<" ";
      }
      cout<<endl;
    }
  }

void pattern3(int n){             
    for(int i=n;i>0;i--){
      for(int j=1;j<i;j++)
      {
          cout<<"* ";
      }
      cout<<endl;
    }
  }

void pattern4(int n){
    for(int i=n;i>0;i--){
      for(int j=1;j<i;j++)
      {
          cout<<j<<" ";
      }
      cout<<endl;
    }
  }

void pattern5(int n){
    for(int i=1;i<=n;i++){
      for(int j=0;j<n-i;j++)
      {
          cout<<" ";
      }
      for(int k=0;k<i+(i-1);k++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
  }

void pattern6(int n){
    for(int i=n;i>0;i--){
      for(int j=0;j<n-i;j++)
      {
          cout<<" ";
      }
      for(int k=0;k<(2*i)-1;k++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
  }

  void pattern7(int n){
    for(int i=1;i<=(2*n)-1;i++){
      int stars=i;
      if(i>n){
        stars=(2*n)-i;
      }
     for (int j = 0; j < stars; j++)
     {
      cout<<"* ";
     }
     cout<<endl;
    }
  }

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
     
        pattern7(n);
    }
    
   
}
