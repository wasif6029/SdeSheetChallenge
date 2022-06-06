#include <bits/stdc++.h> 

int findDuplicate(vector<int> &arr, int n){
    // Write your code here.
    int s = 1;
    while(true)
    {
        if(s<=n && arr[s-1]>n)
        {
            s++;
            continue;
        }
        int i = arr[s-1];
        arr[s-1]=n;
        if(arr[s-1] == s)
        {
            arr[s-1] = n+1;
            s++;
            continue;
        }
        while(true)
        {
            // cout<<i<<" "<<arr[i-1]<<endl;
            if(arr[i-1] == i)
            {
                return i;
            }
            else if(arr[i-1] > n)
            {
                return i;
            }
            else
            {
                int k = arr[i-1];
                arr[i-1] = n+1;
                i = k;
            }
        }
    }
}
