/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
function swap(arr,i,j)
{
    let temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
var sortColors = function(nums) {
    
    let low=0;
    let mid=0;
    let high=nums.length-1;
while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums,low,mid)
                low++
                mid++    
                       }
            else if(nums[mid]==1)
            {
                mid++
            }

            else
            {swap(nums,mid,high)
               high--
            }
        }
};