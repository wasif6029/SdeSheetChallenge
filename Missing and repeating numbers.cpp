#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int s = 1;
    int dup = 0;
    int mis = 0;
    while(s<=n)
    {
        if(s<=n && arr[s-1]>n)
        {
            s++;
            continue;
        }
        if(s<=n && arr[s-1] == s)
        {
            arr[s-1] = n+1;
            s++;
            continue;
        }
        int i = arr[s-1];
        // arr[s-1]=n+1;
        // cout<<"starting - "<<s<<" "<<i<<" "<<arr[i-1]<<endl;
        while(true)
        {
            // cout<<"init- "<<i<<" "<<arr[i-1]<<endl;
            if(arr[i-1] == i)
            {
                arr[i-1]=n+1;
                // cout<<"    final- "<<i<<" "<<arr[i-1]<<endl;
                if(!dup)dup = i;
                break;
            }
            else if(arr[i-1] > n /*&& i!=s*/)
            {
                // cout<<s-1<<" "<<arr[s-1]<<" "<<arr[arr[s-1]-1]<<endl;
                if(!dup)dup = i;
                break;
            }
            else
            {
                int k = arr[i-1];
                arr[i-1] = n+1;
                // cout<<"final- "<<i<<" "<<arr[i-1]<<endl;
                i = k;
                if(i == s)
                {
                    arr[s-1]=n+1;
                    break;
                }
            }
        }
        s++;
    }
    for(int i=0;i<arr.size();i++)if(arr[i]<=n)
    {
        mis=i+1;
        break;
    }
    return {mis,dup};
}
