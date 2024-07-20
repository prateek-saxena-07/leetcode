/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let sum=0;
    let MaxSum=nums[0];

    for(let n of nums)
    {
        if(sum<0)
        {
            sum=0;
        }

        sum+=n;
        MaxSum=Math.max(sum,MaxSum)
    }

    return MaxSum;
};