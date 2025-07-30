// Q: Given a square matrix, set entire row and column to 0 if any cell is 0
// Approach: Better approach using hashing (extra row & column vectors)
// Time: O(n^2), Space: O(n)
#include<iostream>
#include<vector>
using namespace std;

void mark_zeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<int> rows(n,1);
    vector<int> columns(n,1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==0)
            {
                rows[i]=0;
                columns[j]=0;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(rows[i]==0||columns[j]==0)
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

