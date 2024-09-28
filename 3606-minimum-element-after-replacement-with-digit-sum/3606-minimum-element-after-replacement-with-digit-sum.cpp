class Solution {
public:
    int minElement(vector<int>& nums) {
    int temp=0;
    int res=INT_MAX;
    int t;
    for(int i=0;i<nums.size();i++)
    {  t=nums[i];
        while(t!=0)
        {
            temp+=t%10;
            t=t/10;
        }

        res=min(res,temp);
        temp=0;
    }

    return res;
    }
};