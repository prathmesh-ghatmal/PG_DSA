// Q: Given a square matrix, set entire row and column to 0 if any cell is 0
// Approach: Optimal in-place using first row & column as markers
// Time: O(n^2), Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

void mark_zeroes(vector<vector<int>> &matrix)
{
    int col0=1;
    int n =matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] = 0;
                
                if(j!=0){
                  matrix[0][j] = 0; // Mark column
                }
                else{
                    col0=0;
                }                
            }
        }
        
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(matrix[i][0]==0||matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
        
    }

    if(matrix[0][0]==0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[0][i]=0;
        }
        
    }
   
    if(col0==0)
    {
        for (int i = 0; i < n; i++)
        {   
            matrix[i][0]=0;
          
        }
        
    }
    
}
int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nThe matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    mark_zeroes(matrix);

    cout << "\nThe result matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

