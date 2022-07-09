class Solution {
public:
    
   
    int uniquePaths(int m, int n) 
    {
       int N=m+n-2;
        int c=m-1;
        double ans=1;
        for(int i=1;i<=c;i++)
        {
            ans=ans*(N-c+i)/i;
        }
        return (int)ans;
    }
    
};