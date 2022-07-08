class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
            return 0;
        sort(nums.begin(),nums.end());
        int c=0,res=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                    continue;
            if( nums[i+1]-nums[i]==1)
                c++;
            else
            {
                res=max(c,res);
                c=0;
            }
                
        }
        res=max(c,res);
        return res+1;
    }
};