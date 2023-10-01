/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var decodeAtIndex = function(s, k) {
    let totalLength = BigInt("0"), n = s.length;
    k = BigInt(k);
    for (const i of s) {
        if (!isNaN(parseInt(i)))
            totalLength *= BigInt(i);
        else
            totalLength++;
    }
    for (let i = n - 1; i >= 0; i--) {
        k %= totalLength;
        if ((k == 0 || totalLength == k) && isNaN(parseInt(s[i])))
            return s[i];
        if (!isNaN(parseInt(s[i])))
            totalLength /= BigInt(s[i]);
        else
            totalLength--;
    }
    return "";
};