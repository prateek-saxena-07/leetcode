/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let freq={};
    let ans=[]
    for(let i=0;i<nums.length;i++)
    {
        if(!freq[nums[i]])
            {
                freq[nums[i]]=0;
            }
            freq[nums[i]]++;

        if(freq[nums[i]]!=1)
        {
            ans.push(nums[i]);
        }
    }
    return ans;
};