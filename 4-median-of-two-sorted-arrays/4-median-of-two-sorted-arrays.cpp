class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(auto &x:nums1) v.push_back(x);
        for(auto &x:nums2) v.push_back(x);
        sort(v.begin(),v.end());
        int n = v.size();
        if(n&1) return v[n/2];
        return (v[n/2]+v[n/2 - 1])/2.0;
    }
};