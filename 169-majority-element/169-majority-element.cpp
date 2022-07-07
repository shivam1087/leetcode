class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size(),count=1,res=0;
        for(int i=1;i<n;i++)   
        {
            if(nums[res]==nums[i])
                count++;
            else
                count--;
            if(count==0)
            {
                res=i;
                count=1;
            } 
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[res])
                count++;
        }
        if(count>n/2)
            return nums[res];
        return 0;   
    }
};