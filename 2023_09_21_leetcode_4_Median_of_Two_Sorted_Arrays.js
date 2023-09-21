/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let arr = [...nums1, ...nums2];
    arr.sort((a, b) => a - b);
    let len = arr.length, ans = 0;
    let mid = Math.floor(len / 2);
    if  (len % 2 == 0)
        ans = (arr[mid - 1] + arr[mid] ) / 2;
    else
        ans = arr[mid];
    return ans;
};