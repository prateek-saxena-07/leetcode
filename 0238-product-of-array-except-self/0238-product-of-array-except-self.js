/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let n = nums.length;
    let ans = new Array(n).fill(1);

    // Calculate prefix products
    for (let i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Calculate suffix products and update the answer array
    let suffixProduct = 1;
    for (let i = n - 2; i >= 0; i--) {
        suffixProduct *= nums[i + 1];
        ans[i] *= suffixProduct;
    }

    return ans;
};
