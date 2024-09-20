class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0,j,k,sum;
        vector<vector<int>>ans;//2d vector
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        // initializing and sorting

        for(int i=0;i<nums.size();i++)
        {
            j=i+1;
            k=nums.size()-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for(auto output:s)
        {
            ans.push_back(output);
        }
        return ans;
    }
};