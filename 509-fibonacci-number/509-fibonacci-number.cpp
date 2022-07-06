class Solution {
public:
    int fib(int n) 
    {
        
        int f=0,s=1,ans=0;
        if(n==0)
            return 0;
        else
            if(n==1)
                return 1;
        // else if(n==2)
        //     return 1;
        else
        {
        
        for(int i=2;i<=n;i++)
        {
            ans=f+s;
        
            f=s;
            s=ans;
        }
        return ans;
        }
        
    }
};