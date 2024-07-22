/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countKDifference = function(nums, k) {
const hash={};
let count =0;

for(let n of nums)
{
    if(hash[n])
    {
        count+=hash[n];
    }
    if(hash[n-k])
    {
        hash[n-k]++;

    }
    else
    {
        hash[n-k]=1

    }
    if(hash[n+k])
    {
        hash[n+k]++;

    }
    else
    {
        hash[n+k]=1;
    }

}

return count;
};
