/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function(arr) {
    let pipe=0;
    let max=arr[0];
    if(max==0)
    {
        pipe++;
    }

    for(let i=1;i<arr.length;i++)
        {
            if(arr[i]>max)
                max=arr[i];
            if(max===i)
                pipe++;
        }

        return pipe;
};