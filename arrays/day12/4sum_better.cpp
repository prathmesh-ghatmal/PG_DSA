// Q: Find all unique quadruplets in the array whose sum is zero.
// Approach: Fix three elements using 3 nested loops and use a hash set to check for the fourth element (complement), storing sorted quadruplets in a set to avoid duplicates.
// Time: O(n^3 * log(k)) where k is the number of unique quadruplets (due to set insertions), Space: O(k + n) for storing results and hash set.

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> find_4sum(vector<int>&v)
{
    int n=v.size();
    set<vector<int>> store;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            set<int> hashset;
            for (int k = j+1; k < n; k++)
            {
                int sum=-(v[i]+v[j]+v[k]);
               if(hashset.find(sum)!=hashset.end())  
               {
                    vector<int> quadlet={v[i],v[j],v[k],sum};
                    sort(quadlet.begin(),quadlet.end());
                    store.insert(quadlet);
               }
               else
               {
                hashset.insert(v[k]);
               }
            }
            
        }
        
    }
   vector<vector<int>> answer;
   answer.insert(answer.end(),store.begin(),store.end());
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
