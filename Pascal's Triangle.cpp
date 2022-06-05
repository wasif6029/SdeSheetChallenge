#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>ncr(n);
    for(int i=1;i<=n;i++)
    {
        int r = i-1;
        for(int j=1;j<=i;j++)
        {
            int c = j-1;
            if(i==1)
            {
                ncr[r].push_back(1);
                continue;
            }
            if(j==1 || j==i)
            {
                ncr[r].push_back(1);
                continue;
            }
            ncr[r].push_back(ncr[r-1][c-1]+ncr[r-1][c]);
        }
    }
    return ncr;
}
