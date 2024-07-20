/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var findIntersectionValues = function(nums1, nums2) {
    // let count1=0,count2=0;
    // for(let i=0;i<nums1.length;i++)
    // {
    //     if(nums2.includes(nums1[i]))
    //         count1++;
    // }

    // for(let i=0;i<nums2.length;i++)
    // {
    //     if(nums1.includes(nums2[i]))
    //         count2++;
    // }

    // return [count1,count2];
    let arr1=new Array(101).fill(0);
    let arr2=new Array(101).fill(0);

    nums1.forEach(function(num)  {
        arr1[num]=1;
    })
  
    nums2.forEach(function(num) {
        arr2[num]=1;

    })
   

    let count=[0,0]

    
    nums1.forEach(function(num) 
    { count[0]+=arr2[num];

    })
      
    nums2.forEach(function(num) {
        count[1]+=arr1[num];
    })
   

    return count;
};