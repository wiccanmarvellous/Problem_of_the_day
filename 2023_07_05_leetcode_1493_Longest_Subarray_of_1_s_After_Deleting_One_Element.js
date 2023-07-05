/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function(nums) {
    let i = 0, prev_len = 0, after_len = 0, count = 0, f = 1;
    while (i < nums.length) {
        if (nums[i] == 0) {
            f = 0;
            i++;
            break;
        }
        prev_len++;
        i++;
    }
    while (i < nums.length) {
        if (nums[i] == 0) {
            f = 0;
            if (count < prev_len + after_len)
                count = prev_len + after_len;
            prev_len = after_len;
            after_len = 0;
        }
        else
            after_len++;
        i++;
    }
    if (count < prev_len + after_len)
            count = prev_len + after_len;
    if (f)
        count -= 1;
    return count;
};