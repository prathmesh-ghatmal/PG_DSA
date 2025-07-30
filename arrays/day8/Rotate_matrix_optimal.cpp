// Q: Rotate a square matrix by 90 degrees clockwise
// Approach: Optimal in-place → transpose + reverse each row
// Time: O(n^2), Space: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
   int n= matrix.size();
   for (int i = 0; i < n-1; i++)
   {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
   }

   for (int i = 0; i < n; i++)
   {
     reverse(matrix[i].begin(),matrix[i].end());
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

   rotate(matrix);

    cout << "\nThe result matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

