/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    let start = 0, end =0, sum = 0, min_len = Number.MAX_VALUE;
    let n = nums.length;
    while (end < n && sum < target)
        sum += nums[end++];
    if (end != n)
        min_len = end + 1;
    end -= 1;
    while (end < n) {
        if (sum >= target) {
            if (end - start + 1 < min_len)
                min_len = end - start + 1;
            sum -= nums[start];
            start++;
        }
        if (sum < target) {
            end++;
            sum += nums[end];
        }
    }
    if (min_len == Number.MAX_VALUE)
        return 0;
    return min_len;
};