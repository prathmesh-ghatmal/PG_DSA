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

  void pattern8(int n){
    int flag=1;
    for (int i = 1; i <=n; i++)
    { i%2==0?flag=0:flag=1;
      for (int j = 0; j < i; j++)
      {
        
       cout<<flag;
       flag=!flag;
        
      }
      cout<<endl;
    }
    
  }

  void pattern9(int n){
    for (int i = 1; i <=n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        cout<<j;
      }
      for (int k = 0; k <( n-i)*2; k++)
      {
        cout<<" ";
      }
      for (int l = i; l > 0; l--) 
      {
        cout<<l;
      }
      
      
      cout<<endl;
      
    }
    
  }

void pattern10(int n){
  int count=1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <=i; j++)
    {
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }
  
}

void pattern11(int n){
  
  for (int i = 0; i < n; i++)
  { char ch='A';
    for (int j = 0; j <=i; j++)
    {
      cout<<ch;
      ch+=1;
    }
    cout<<endl; 
  }
  
}

void pattern12(int n){
  for (int i = n; i > 0; i--)
  {
    for (char ch = 'A'; ch < 'A'+i; ch++)
    {
      cout<<ch;
    }
    cout<<endl;
  }
  
}

void pattern13(int n){
  for (int i = 0; i < n; i++)
  {
    char ch='A'+i;
    for (int j = 0; j <= i; j++)
    {
      cout<<ch;
    }
    cout<<endl;
  }
  
}

void pattern14(int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i; j++)
    {
      cout<<" ";
    }
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for (int j = 0; j <(2*i)+1; j++)
    {
      cout<<ch;
      if(j<breakpoint){
        ch++;
      }
      else ch--;
    }
    
    cout<<endl;
  }
  
}

void pattern15(int n){
  for (int i = 0; i < n; i++)
  { char ch='E';

    for (char j = ch-i; j <=ch; j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
  
}

void pattern16(int n){
  int space=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i; j++)
    {
      cout<<"*";
    }
    for (int j = 0; j < space; j++)
    {
      cout<<" ";
    }
       for (int j = 0; j < n-i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
    space+=2;
    
  }
  
  int bspace=8;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i+1; j++)
    {
      cout<<"*";
    }
    for (int j = 0; j < bspace; j++)
    {
      cout<<" ";
    }
    for (int j = 0; j < i+1; j++)
    {
      cout<<"*";
    }
     cout<<endl;
    bspace-=2;   
  }
  
  
}

void pattern17(int n){
  for (int i = 1; i <= 2*n-1; i++)
  {
    int stars=i;
    int spaces=(n-i)*2;
    if(i>n){
      stars=2*n-i;
      spaces=(i-n)*2;
    }
    for (int j = 0; j < stars; j++)
    {
      cout<<"*";
    }

    for (int j = 0; j < spaces; j++)
    {
      cout<<" ";
    }

    for (int j = 0; j < stars; j++)
    {
      cout<<"*";
    }
    
     cout<<endl;
  }
 
  
}

void pattern18(int n){
  for (int i = 0; i < 2*n-1; i++)
  {
    for (int  j = 0; j < 2*n-1; j++)
    {
      int top=i;
      int left=j;
      int right=(2*n)-2-j;
      int bottom=(2*n)-2-i;
      cout<<n-min(min(top,bottom),min(right,left));
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
     
        pattern18(n);
    }
    
   
}
