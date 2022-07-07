class Solution {
public:
    int majorityElement(vector<int>& num) 
    {
        int count=1;
        int res=0;
        int n=num.size();
        for(int i=1;i<n;i++)
        {
            if(num[i]==num[res])
                count++;
            else
                count--;
            
            if(count==0)
            {
                res=i;
                count=1;
            }
        }
        count=1;
        for(int i=0;i<n;i++)
        {
            if(num[i]==num[res])
                count++;
            
        }
        if(count>n/2)
            return num[res];
        
        return 0;
    }
};