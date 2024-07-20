/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    // const sortedCandies=candies.toSorted(function(a, b){return a-b});//function(a, b){return a-b} is used other wise it will sort the array in alphabetically as strings :(.
    // console.log(sortedCandies);
    // console.log(sortedCandies[sortedCandies.length-1])
    const Max=Math.max(...candies)
    // const ans=[];
    for(let i=0;i<candies.length;i++)
    {
        if((candies[i]+extraCandies)>=(Max))
            {candies[i]=true;}
            // console.log((candies[i]+extraCandies)>=(sortedCandies[sortedCandies.length-1]))}
        else
        {candies[i]=false;}
    }

    return candies;
};