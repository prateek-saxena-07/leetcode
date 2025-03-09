class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn=INT_MAX,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=n-1;

            while(j<k)
            { int sum=nums[i]+nums[j]+nums[k];
              int diff=abs(sum-target);
                if(sum==target)
                    return sum;
              if(diff<mn)
              {
                  mn=diff;
                  ans=sum;
              }
              if(sum<target)
                    j++;

                else
                k--;

            }
        }
        return ans;
    }
};