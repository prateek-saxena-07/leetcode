class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         map<int ,int> m;
//         int mx=0;
//         int res=-1;
//          for(int i=0;i<nums.size();i++){
//       m[nums[i]]++;
//    }
//          for(auto x:m){
//       if(x.second>mx){
//          res= x.first;
//          mx=x.second;
//       }
//    }
//    return res;

int res = 0;
    int count = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[res]) {
            count++;
        } else {
            count--;
        }
          
        if(count == 0) {
            res = i;
            count = 1;
        }
          
    }
      
    return nums[res];
}
    
    
    
        // /sort(nums.begin(), nums.end());
        // int mid=nums.size()/2;
        // return nums[mid];
    
// };
};

