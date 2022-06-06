#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int cli = 0;
    int cl = prices[cli];
    int ansl = cli;
    int ansh = cli+1;
    int ans  = 0;
    for(int i=1;i<prices.size();i++)
    {
        if(cl>prices[i])
        {
            cl = prices[i];
            cli = i;
        }
        if(i!=cli && prices[i]-cl>ans)
        {
            ans = prices[i]-cl;
            ansh = i;
        }
    }
    return ans;
}
