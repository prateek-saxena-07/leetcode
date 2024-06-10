class Solution {
public:
    int heightChecker(vector<int>& nums) {
        int c=0;
    vector<int> copy;
    copy=nums;
    sort(copy.begin(),copy.end());

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=copy[i])
          c++;
    }
return c;
    
    }
};