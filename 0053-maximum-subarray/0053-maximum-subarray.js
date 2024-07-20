/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let sum=0
    let max= -Infinity

    for(let n of nums)
    {
        if(sum<0)
        {
            sum=0
        }
        sum+=n
        max=Math.max(sum,max)

    }
    return max;
};