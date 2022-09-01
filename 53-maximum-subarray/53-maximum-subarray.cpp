class Solution {
public:
    
    //O(n^2) solution
    //     int maxSubArray(vector<int>& nums) {
//         vector<int> pq;
//         int curr=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i;j<nums.size();j++)
//             {
//                 curr+=nums[j];
//                 pq.push_back(curr);
//             }
//             curr=0;
//         }
        
//         sort(pq.begin(),pq.end());
        
        
//         return pq[pq.size()-1];
//     }
    
   
  int maxSubArray(vector<int>& nums)
    {
       int maxsub=nums[0];
      int currsum=0;
      
      
      for(int i=0;i<nums.size();i++)
      {
          if(currsum<0)
          {
              currsum=0;
          }
          currsum+=nums[i];
          maxsub=max(maxsub,currsum);
      }
      return maxsub;
    }       
    
};