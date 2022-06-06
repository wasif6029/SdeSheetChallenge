#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    intervals.push_back({INT_MAX,INT_MAX});
    vector<int>start = *(intervals.begin());
    for(auto &cur:intervals)
    {
        if(cur[0]>start[1])
        {
            ans.push_back(start);
            start = cur;
            continue;
        }
        start[1] = max(start[1],cur[1]);
    }
    return ans;
}
