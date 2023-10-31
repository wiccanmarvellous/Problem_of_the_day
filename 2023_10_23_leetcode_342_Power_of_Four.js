/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    if (n <= 0) return false;
    while (n > 4) n /= 4;
    return n % 4 === 0 || n === 1 ? true : false;
};