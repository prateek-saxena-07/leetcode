class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
        if(nums.size()%k != 0) return false;


        sort(nums.begin(), nums.end());

        unordered_map<int, int> m;

        for(int i : nums){
            m[i]++;
        }


        for(int i = 0;i<nums.size();i++){

            if(m[nums[i]] == 0) continue;

            else{

                for(int j = 0;j<k;j++){
                    int grp = nums[i]+j;
                    if(m[grp] == 0) return false;
                    m[grp]--;
                }
                
            }
            
        }

        return true;
        
    }
};