/**
 * @param {number[]} hours
 * @return {number}
 */
var countCompleteDayPairs = function(hours) {
    let count = 0;
    let n = hours.length;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if ((hours[i] + hours[j]) % 24 === 0) {
                count++;
            }
        }
    }
    return count;
};