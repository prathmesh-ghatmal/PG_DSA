// Problem: Find the element at a specific position in Pascal's Triangle
// Approach: Efficient Calculation using nCr = (n-1)! / [(r-1)! * (n-r)!] (Iterative Multiplicative Method)
// Time Complexity: O(col), Space Complexity: O(1)

#include<iostream>
using namespace std;

int find_pascal_element(int row,int col)
{
    if (col>row || col<1) return -1;
    long long num=1,den=1,ans;
    for(int i=0;i<col-1;i++)
    {  
         num=(row-1-i)*num;
         den=(i+1)*den;
    }
   
    return num/den;
}

int main()
{
    int row;
    int column;
    cin>>row;
    cin>>column;
    cout<<find_pascal_element(row,column);
}