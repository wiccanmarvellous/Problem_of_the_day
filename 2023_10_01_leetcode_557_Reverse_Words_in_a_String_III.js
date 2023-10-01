/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return  s.split(' ').map(i => i.split('').reverse().join('')).join(' ')
};