/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function(arr) {
    let pipe=0;
    let max= -Infinity;
    // if(arr[0]==0)
    // {
    //     pipe++;
    // }

    for(let i=0;i<arr.length;i++)
        {
            if(arr[i]>max)
                max=arr[i];
            if(max===i)
                pipe++;
        }

        return pipe;
};