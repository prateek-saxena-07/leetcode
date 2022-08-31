class Solution {
public:
 int search(vector<int>& nums, int target) {
     int ans =binary(nums,target,0,nums.size()-1);
        return ans;
    }
    
    
    
    int binary(vector<int>& nums,int target,int low,int high)
    {
        if(low>high) return -1;
        int mid =low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target)return binary(nums,target,low,mid-1);
        return binary(nums,target,mid+1,high);
        
    }
    
};