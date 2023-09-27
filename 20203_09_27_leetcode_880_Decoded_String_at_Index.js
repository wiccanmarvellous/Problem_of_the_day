/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var decodeAtIndex = function(s, k) {
    let totalLength = BigInt("0"), n = s.length;
    k = BigInt(k);
    for (const i of s) {
        if (i >= '0' && i <= '9')
            totalLength *= BigInt(i);
        else
            totalLength++;
    }
    for (let i = n - 1; i >= 0; i--) {
        k %= totalLength;
        if ((k == 0 || totalLength == k) && !(s[i] >= '0' && s[i] <= '9'))
            return s[i];
        if (s[i] >= '0' && s[i] <= '9')
            totalLength /= BigInt(s[i]);
        else
            totalLength--;
    }
    return "";
};