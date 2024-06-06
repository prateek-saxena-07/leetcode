// for non-consecutive numbers my approach \U0001f910(i missed consecutive in the question\U0001f605)
// class Solution {
// public:
// bool arraySortedOrNot(int a[], int n)
// {
    
    
//     if (n == 1 || n == 0)
//     {
//         return true;
//     }
    
//     return a[n - 1] >= a[n - 2] &&
//      arraySortedOrNot(a, n - 1);
// }
//     bool isPossibleDivide(vector<int>& nums, int k) {
//         bool result;
//         sort(nums.begin(),nums.end());
//         if(nums.size()/k<2)
//             {
//                 return false;
//             }

//         for(int i=1;i<=(nums.size()/k)-1;i++)
//         {
//             swap(nums[(k*i)-1],nums[k*i]);
//         }

// for(int i=0;i<nums.size();i=i+k)
// {
//     int arr[k];
//     for(int j=i,l=0;j<i+k;j++,l++)
//         {
//             arr[l]=nums[j];
            
//         }
//     result=arraySortedOrNot(arr,k);
//     if(!result)
//     {
//         return false;
//     }
    
// }
//         // for(auto i:nums)
//         // {
//         //     cout<<i<<",";
//         // }

//         return true;
//     }
// };

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        
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