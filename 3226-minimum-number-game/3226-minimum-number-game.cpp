class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans(nums.size());
        sort(nums.begin(),nums.end());
// sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans[i+1]=nums[i];
            }
            else
            {
                ans[i-1]=nums[i];
            }
        }
        return ans;
    //      for (size_t i = 0; i < arr.size(); i += 2) {
    //     // Use std::tie to unpack and swap adjacent elements
    //     std::tie(arr[i], arr[i + 1]) = std::make_tuple(arr[i + 1], arr[i]);
    // }
    // return arr;
    }
};