#include <bits/stdc++.h> 
int pivot(vector<int>& a)
{
    int n = a.size();
    for(int i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            return i;
        }
    }
    return 0;
}
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int idx = pivot(nums);
    reverse(nums.begin()+idx,nums.end());
    if(idx == 0)return nums;
    int &thr = nums[idx-1];
    int next = upper_bound(nums.begin() + idx - 1, nums.end(), thr) - nums.begin();
    swap(thr,nums[next]);
    return nums;
}
