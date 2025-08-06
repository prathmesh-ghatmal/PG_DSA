// Q: Find all unique triplets in the array which gives the sum of zero.
// Approach 2: Brute-force with three nested loops and set to avoid duplicates.
// Time Complexity: O(n^3), Space Complexity: O(n * 3) for storing unique triplets in a set.

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> find_3sum(vector<int>&v)
{
    int n=v.size();
    set<vector<int>> store;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(v[i]+v[j]+v[k]==0)
                {
                    vector<int> triplet = {v[i], v[j], v[k]};
                    sort(triplet.begin(), triplet.end());
                    store.insert(triplet);
                }
            }
            
        }
        
    }

    vector<vector<int>> ans;
    ans.insert(ans.end(),store.begin(),store.end());
    return ans;
    
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

    vector<vector<int>> res = find_3sum(nums);

    for (auto triplet : res) {
        for (int num : triplet)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
