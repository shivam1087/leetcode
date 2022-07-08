// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   

        //int n=a.size();
        int pre_sum=0,res=0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            pre_sum+=a[i];
            if(pre_sum==0)
            res=i+1;
            if(mp.find(pre_sum-0)==mp.end())
            mp.insert({pre_sum,i});
            if(mp.find(pre_sum-0)!=mp.end())
            res=max(res,i-mp[pre_sum-0]);
        }
        return res;
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends