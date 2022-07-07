class Solution {
public:
    vector<int> majorityElement(vector<int>& num) 
    {
        
        map<int,int> m;
        int n=num.size();
        for(int i=0;i<num.size();i++)
        {
            m[num[i]]++;
        }
        
        vector<int> v;
        for(auto e:m)
        {
            if(e.second>n/3)
                v.push_back(e.first);
        }
        return v;
        
    }
};