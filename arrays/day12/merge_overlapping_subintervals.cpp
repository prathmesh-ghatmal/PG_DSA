// Question: Merge all overlapping intervals from a list of intervals.
// Approach: Sort intervals by start time, then iterate and merge if overlapping.
// Time Complexity: O(n log n) for sorting + O(n) for merging; Space Complexity: O(n) for output.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> merge_overlapping_subintervals(vector<vector<int>>&v)
{
    int start=v[0][0];
    int end=v[0][1];
    int n =v.size();
    vector<vector<int>> answer;
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if(v[i][0]<=end)
        { 
           end=max(end,v[i][1]);
        }
         else{
                vector<int>subinterval={start,end};
                answer.push_back(subinterval);
                start=v[i][0];
                end=v[i][1];
            }
       
    }
    answer.push_back({start,end});
   return answer; 
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18},{9,11}};
    vector<vector<int>> merged = merge_overlapping_subintervals(intervals);

    for (auto interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}
