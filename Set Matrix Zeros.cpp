#include <bits/stdc++.h> 


void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int firstRow = 0;
    int firstCol = 0;
    for(int i=0;i<matrix[0].size();i++){
        if(matrix[0][i] == 0)
        {
            firstRow = 1;
            break;
        }
    }
    for(int i=0;i<matrix.size();i++){
        if(matrix[i][0] == 0)
        {
            firstCol = 1;
            break;
        }
    }
    for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[0][j]==0 || matrix[i][0]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    if(firstRow)
    {
        for(int i=0;i<matrix[0].size();i++){
            matrix[0][i] = 0;
        }
    }
    if(firstCol)
    {
        for(int i=0;i<matrix.size();i++){
            matrix[i][0] = 0;
        }
    }

}
