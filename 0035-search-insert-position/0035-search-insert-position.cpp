class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=binary(nums,target,0,nums.size()-1);
        return ans;
        
    }
    
    int binary(vector<int>& nums,int target,int l,int r)
    {
    if(l>r )return l;
        int mid=l + (r-l)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>target)
            return binary(nums,target,l,mid-1);
        else
            return binary(nums,target,mid+1,r);
        
        
    }
};