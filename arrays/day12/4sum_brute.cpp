// Q: Find all unique quadruplets in the array whose sum is equal to 0.
// Approach: Brute-force with 4 nested loops, using a set to avoid duplicates and sorting each quadruplet.
// Time: O(n^4 * log k), Space: O(k * 4), where k is number of unique quadruplets.

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> find_4sum(vector<int>&v)
{
    int n = v.size();
    set<vector<int>> hashset;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    if(v[i]+v[j]+v[k]+v[l]==0)
                    {
                        vector<int> quadlet={v[i],v[j],v[k],v[l]};
                        sort(quadlet.begin(),quadlet.end());
                        hashset.insert(quadlet);
                    }
                }
                
            }
            
        }
        
    }
    vector<vector<int>> answer;
    answer.insert(answer.end(),hashset.begin(),hashset.end());
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

    for (auto triplet : res) {
        for (int num : triplet)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
