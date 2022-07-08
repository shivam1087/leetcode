class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int c=1,res=0;
        for(int i=0;i<n;i++)
        {
            if(i<n-1 and nums[i]==nums[i+1])
                    continue;
            if(i<n-1 and nums[i+1]-nums[i]==1)
                c++;
            else
            {
                res=max(c,res);
                c=1;
            }
                
        }
        return res;
    }
};