class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        
        result.push_back(intervals[0]);
        int n=intervals.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
            
            if(result[j][1]>=intervals[i][0])
                result[j][1]=max(intervals[i][1],result[j][1]);
            else
            {
                j++;
                result.push_back(intervals[i]);
            }
            
        }
        return result;
        
        
        
        
        
    }
};