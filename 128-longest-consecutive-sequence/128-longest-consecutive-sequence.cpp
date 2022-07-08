class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }int res=1;
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {int curr=1;
                while(s.find(nums[i]+curr)!=s.end())
                {
                    curr++;
                    res=max(curr,res);
                }
            }
        }
        return res;
    }
};