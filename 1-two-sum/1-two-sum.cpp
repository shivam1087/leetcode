class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
         vector<int>ans;
        vector<pair<int,int>> v;
        for(int i=0;i<a.size();i++)
            v.push_back({a[i],i});
         //sort(a,a+n);
        sort(v.begin(),v.end());
         int i=0;
         int j=a.size()-1;
         while(i<j)
         {
             if(v[i].first+v[j].first==target)
             {
                 ans.push_back(v[i].second);
                 ans.push_back(v[j].second);
                //return ans;
                 break;
             }
             else
                 if(v[i].first+v[j].first>target)
                     j--;
             else
                 i++;
             
             
                 
         }
         return ans;
        
    }
};