/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function (nums) {
  let cnt = 0
  const n = nums.length

  for (let i = 1; i < n; i++) {
    if (nums[i - 1] > nums[i]) {
      cnt++
    }
  }

  // Check if the first and last elements create an inversion
  if (nums[n - 1] > nums[0]) {
    cnt++
  }

  return cnt <= 1
}

// Example usage
let array = [4, 5, 6, 7, 0, 1, 2]
console.log(check(array)) // Output: true
