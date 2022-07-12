class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        //vector<int,int>v;
    
        int n=s.size();
        int m=t.size();
        //vector<int>v(n,0);
         int v[26];
        for(int i=0;i<26;i++)
        {
            v[i]=0;
        }
        if(n!=m)
            return false;
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]!=0)
                return false;
        }
        return true;
    }
    
};