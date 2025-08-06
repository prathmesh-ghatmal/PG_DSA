// Q: Find all unique triplets in the array which gives the sum of zero.
// Approach 3: Optimal Two Pointer after sorting the array
// Time Complexity: O(n^2), Space Complexity: O(1) (excluding output space)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> find_3sum(vector<int>&v)
{
    int n=v.size();
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(i!=0&&v[i]==v[i-1]) continue;
        else {
            int j=i+1;
            int k=n-1;
            while (j<k)
            {
                int sum=v[i]+v[j]+v[k];
                if(sum==0)
                {
                    vector<int> triplet={v[i],v[j],v[k]};
                    ans.push_back(triplet);
                    j++;
                    k--;
                    while(j<k&&v[j]==v[j-1]) j++;
                    while(j<k&&v[k]==v[k+1]) k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
            
        }
    }
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
