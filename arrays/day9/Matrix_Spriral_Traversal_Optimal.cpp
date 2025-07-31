// Problem Name: Spiral Order Traversal of a Matrix
// Time Complexity: O(n × m), Space Complexity: O(1) (excluding input/output)
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiral_traversal(vector<vector<int>>&matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    int left=0,top=0,right=m-1,bottom=n-1;
    vector<int> result;

    while(left<=right&&top<=bottom){
        for (int i = left; i <= right; i++)
    {
        result.push_back(matrix[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++)
    {
        result.push_back(matrix[i][right]);
    }
    right--;
    if(top<=bottom){
        for (int i = right; i >= left; i--)
    {
        result.push_back(matrix[bottom][i]);
    }
    }
    
    bottom--;
    if(left<=right){
    for (int i = bottom; i >= top; i--)
    {
        result.push_back(matrix[i][left]);
    }
}
    left++;
    }
    return result;  
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

    vector<int> result = spiral_traversal(matrix);
    cout << "\nThe spiral order traversal is:\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

