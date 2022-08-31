class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          
        unordered_map<int,int> counter;
        bool pair=false;
        
        for(int &n :nums)
        {
            counter[n]++;
            
            if((counter[n]>1))return true;
        }
        
        return false;
    }
};