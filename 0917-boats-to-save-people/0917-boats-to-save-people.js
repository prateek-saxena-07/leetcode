/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function(a, limit) {
    a.sort((a,b)=>a-b);

    let i=0,j=a.length-1,trips=0;

    while(i<=j)
    {
        if(a[i]+a[j]<=limit)
        {
            i++;
        }
        j--;
        trips++;
    }
    return trips;
};