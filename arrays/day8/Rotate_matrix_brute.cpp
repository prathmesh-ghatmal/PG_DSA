// Q: Rotate a square matrix by 90 degrees clockwise
// Approach: Brute-force using an extra matrix for storing rotated values
// Time: O(n^2), Space: O(n^2)

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    vector<vector<int>> answer(n,vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            answer[i][j]=matrix[n-j-1][i];
        }
        
    }
    return answer;
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

    vector<vector<int>>answer=rotate(matrix);

    cout << "\nThe result matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

