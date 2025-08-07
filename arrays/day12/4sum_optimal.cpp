// Given an array `v`, find all unique quadruplets (v[i], v[j], v[k], v[l])
// such that i != j != k != l and v[i] + v[j] + v[k] + v[l] == 0.

// Approach:
// 1. Sort the array to handle duplicates easily and use two-pointer technique.
// 2. Use 2 nested loops for the first two elements of quadruplet.
// 3. For remaining two elements, apply two-pointer approach (k, l) such that i < j < k < l.
// 4. Skip duplicate elements at every level to ensure only unique quadruplets are added.
// 5. Whenever sum equals 0, add to result and move both pointers while avoiding duplicates.

// Time Complexity: O(n^3)
// Explanation: Outer two loops run in O(n^2), and for each pair, the two-pointer runs in O(n)
// So overall: O(n^2 * n) = O(n^3)
// Space Complexity: O(1) (excluding output list), O(k) if considering result storage where k = number of quadruplets

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> find_4sum(vector<int>&v)
{
    int n=v.size();
    sort(v.begin(),v.end());
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        if(i!=0&&v[i]==v[i-1]) continue;
        for (int j = i+1; j < n; j++)
        {
            if(j>i+1&&v[j]==v[j-1]) continue;
            int k=j+1;
            int l=n-1;

        while (k<l)
        {
            int sum=v[i]+v[j]+v[k]+v[l];
            if(sum==0)
            {
                vector<int> quadruplet={v[i],v[j],v[k],v[l]};
                answer.push_back(quadruplet);
                k++;
                l--;
                continue;
            }
            if(sum<0)
            {
                k++;
            }
            else{
                l--;
            }
            while (k<l&& v[k]==v[k-1])
            {
                k++;
            }
            while (k<l&& v[l]==v[l+1])
            {
                l--;
            }
            
        }
        }
        
    }
    return answer;
}

int main() {
   int n;
   vector<int>nums;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    nums.push_back(x);
}

    vector<vector<int>> res = find_4sum(nums);

    for (auto quadruplet : res) {
        for (int num : quadruplet)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
