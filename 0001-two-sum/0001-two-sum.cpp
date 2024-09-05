class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>ans;
     unordered_map<int,int>mpp;

     for(int i=0;i<nums.size();i++)
     {
         if(mpp.find(target-nums[i])!=mpp.end())
         {//if the difference is found in the map return the current index and index of difference as pair 
             ans.push_back(mpp[target-nums[i]]);
             ans.push_back(i);
             return ans;
         }
         mpp[nums[i]]=i; //otherwise store the difference as key value in map
     }   
     return ans;
    }
};