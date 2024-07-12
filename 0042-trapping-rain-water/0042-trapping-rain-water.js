/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(arr) {
    

  
    let n=arr.length;
    
    let prefix=new Array(arr.length);
    for(let i=0;i<n;i++)
    {
        if(i==0)
            prefix[0]=arr[0];
        else
        {
            if(arr[i]>prefix[i-1])
                prefix[i]=arr[i];
            else
                prefix[i]=prefix[i-1];
        }
    }
   
    let suffix=new Array(n);
    for(let i=n-1;i>=0;i--)
    {
        if(i==n-1)
            suffix[i]=arr[i];
        else
        {
            if(arr[i]>suffix[i+1])
                suffix[i]=arr[i];
            else
                suffix[i]=suffix[i+1];
        }
    }
   
    let minimum=new Array(n);
    for(let i=0;i<n;i++)
    {
        if(suffix[i]<prefix[i])
            minimum[i]=suffix[i];
        else
            minimum[i]=prefix[i];
    }
  
    let water=new Array(n);
    for(let i=0;i<n;i++)
        water[i]=minimum[i]-arr[i];
    
    let sum=0;
    for(let i=0;i<n;i++)
        sum+=water[i];
    return sum;

};