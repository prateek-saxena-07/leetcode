class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
         vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        suffix[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]+nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(prefix[i]==suffix[i])
                return i;
        }
        
        return -1;
    }
};