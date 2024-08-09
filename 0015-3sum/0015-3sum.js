/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a,b)=>a-b)

    let output=[]
    let s=new Set()
    let target=0

    for(let i=0;i<nums.length;i++)
    {
        let j=i+1
        let k=nums.length-1

        while(j<k)
        {
            let sum=nums[i]+nums[j]+nums[k]
            if(sum===target)
            {
                s.add(JSON.stringify([nums[i],nums[j],nums[k]]))
                j++
                k--
            }

            else if(sum<target)
            {
                j++
            }

            else
            {
                k--
            }
        }

       
    }
     s.forEach(triplets=>output.push(JSON.parse(triplets)))
        return output
};