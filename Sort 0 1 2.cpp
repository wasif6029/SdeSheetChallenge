#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int fre[3]={0};
    for(int i=0;i<n;i++)fre[arr[i]]++;
    int idx = 0;
    for(int i=0;i<3;i++)
    {
        while(fre[i]--)
        {
            arr[idx++]=i;
        }
    }
}
