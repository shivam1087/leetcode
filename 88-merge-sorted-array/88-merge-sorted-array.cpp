class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        
//         int i=0,j=0,k=m-1;
//         while(i<=k and j<n)
//         {
//             if(nums1[i]>nums2[j])
//             {
//                 swap(nums2[j],nums1[k]);
//                 k--;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             continue;
//         }
            
//         }
//         sort(nums1.begin(),nums2.end());
//         sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++)
        {
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};