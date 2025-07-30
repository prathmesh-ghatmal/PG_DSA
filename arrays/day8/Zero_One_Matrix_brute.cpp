// Q: Given a matrix, set entire row and column to 0 if any cell is 0
// Approach: Brute force using in-place marking with -1, then convert -1 to 0
// Time: O(n³), Space: O(1)


#include <iostream>
#include <vector>
using namespace std;

void mark_row(int i,vector<vector<int>> &matrix)
{
    int n=matrix.size();
    for (int j = 0; j < n; j++)
    {
        matrix[i][j]=-1;
    }
    
}
void mark_column(int j,vector<vector<int>> &matrix)
{
    int n =matrix.size();
    for (int i = 0; i < n; i++)
    {
        matrix[i][j]=-1;
    }
    
}
void mark_Zeroes(vector<vector<int>> &matrix)
{   
   
    int n =matrix.size();
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==0)
            {
                mark_row(i,matrix);
                mark_column(j,matrix);
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==-1)
            {
                matrix[i][j]=0;
            }
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

    mark_Zeroes(matrix);

    cout << "\nThe result matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

