/**
 * @param {number[]} nums
 * @param {number} x
 * @return {number}
 */
var minOperations = function(nums, x) {
    const n = nums.length, totalSum = nums.reduce((acc, currSum) => acc + currSum);
    const targetSum = totalSum - x;
    if (targetSum === 0)
        return n;
    let i = 0, j = 0, currSum = 0, len = 0;
    while (j < n) {
        currSum += nums[j];
        while (i <= j && currSum > targetSum)
            currSum -= nums[i++];
        if (currSum === targetSum)
            len = Math.max(len, j - i + 1);
        j++;
    }
    return len ? n - len : -1;
};