/**
 Do not return anything, modify nums in-place instead.
 */
 function swap(arr: number[],a: number,b: number)
 {
    let temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
 }
function sortColors(nums: number[]): void {
    let low=0,mid=0,high=nums.length-1;

    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums,low,mid);
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums,mid,high);
            high--;
        }
    }
};