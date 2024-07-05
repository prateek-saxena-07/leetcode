/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    let left_max=new Array(height.length);
    for(let i=0;i<height.length;i++)
    {
        if(i=0)
            left_max[i]=height[0];
        else
            left_max[i]=Math.max(height[i],left_max[i-1]);
    }

    let right_max=new Array(height.length);
    for(let i=height.length-1;i>=0;i--)
    {
        if(i==height.length-1)
                right_max[i]=height[height.length]
    }
};