/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const pairIdx={};   //dictionary

    for(let i=0; i<nums.length;i++)
    {
        const num=nums[i];
        if(target - num in pairIdx)
               { 
                return[pairIdx[target-num],i];
               }

                pairIdx[num]=i;
    }

   


};