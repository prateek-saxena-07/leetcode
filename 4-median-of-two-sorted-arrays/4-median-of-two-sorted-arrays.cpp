// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> v;
//         for(auto &x:nums1) v.push_back(x);
//         for(auto &x:nums2) v.push_back(x);
//         sort(v.begin(),v.end());
//         int n = v.size();
//         if(n&1) return v[n/2];
//         return (v[n/2]+v[n/2 - 1])/2.0;
//     }
// };

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) v.push_back(nums1[i++]);
            else v.push_back(nums2[j++]);
        }
        for(int k=i;k<nums1.size();k++) v.push_back(nums1[k]);
        for(int k=j;k<nums2.size();k++) v.push_back(nums2[k]);
        int n = v.size();
        if(n&1) return v[n/2];
        return (v[n/2]+v[n/2 - 1])/2.0;
    }
};