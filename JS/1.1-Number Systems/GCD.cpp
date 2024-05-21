/**
 * @param {number[]} nums
 * @return {number}
 */

function gcd(a, b) {
    if (b === 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

var findGCD = function(nums) {
    let minEle = Math.min(...nums);
    let maxEle = Math.max(...nums);
    return gcd(minEle, maxEle);
};
