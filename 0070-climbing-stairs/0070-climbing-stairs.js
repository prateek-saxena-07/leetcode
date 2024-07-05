/**
 * @param {number} n
 * @return {number}
 */
  function fib(n, dp) {
    if (n <= 1) return (dp[n] = 1);
    if (dp[n] !== -1) return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
  }
   function countWays(n) {
    const dp = new Array(n + 1).fill(-1);
    return fib(n, dp);
  }
var climbStairs = function(n) {
    return countWays(n)
};