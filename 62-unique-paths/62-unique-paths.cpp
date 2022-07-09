class Solution {
public:
    
    int countpaths(int i,int j,int m,int n,vector<vector<int>> &dp)
    {
        if(i==(m-1) or j==(n-1))
            return 1;
        if(i>(m-1) or j>(n-1))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
         return dp[i][j]=countpaths(i+1,j,m,n,dp)+countpaths(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) 
    {
       // vector<int>dp(m,vector<int>(-1,n));
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int i=0,j=0;
        return countpaths(i,j,m,n,dp);
        
    }
    
};