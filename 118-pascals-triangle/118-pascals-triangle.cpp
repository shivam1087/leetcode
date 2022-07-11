class Solution {
public:
    vector<vector<int>> generate(int numrows) 
    {
       vector<vector<int>> pascals(numrows);
        for(int i=0;i<numrows;i++)
        {
            pascals[i].resize(i+1);
            pascals[i][0]=pascals[i][i]=1;
            for(int j=1;j<i;j++)
            {
                pascals[i][j]=pascals[i-1][j]+pascals[i-1][j-1];
            }
        }
        return pascals;
       
        
    }
};