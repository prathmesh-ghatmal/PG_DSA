// Q: Find all unique triplets in the array which gives the sum of zero.
// Approach 2: Improved brute-force using hashing (2-sum + 1 loop) and set to avoid duplicates.
// Time Complexity: O(n^2), Space Complexity: O(n) for hashset + O(k*3) for storing k unique triplets.

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
        set<int> hashset;
        for (int j = i+1; j < n; j++)
        {
            if(hashset.find(-(v[i]+v[j]))!=hashset.end())
            {
                vector<int> triplet={v[i],v[j],-(v[i]+v[j])};
                sort(triplet.begin(),triplet.end());
                store.insert(triplet);
            }
            else{
                hashset.insert(v[j]);
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
