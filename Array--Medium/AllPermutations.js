// Time Complexity: O(N!*N), Space Complexity: O(1)
const function recAllPermutations(index, nums, res) {
  // If index becomes equal to the size of nums, push the result and return.
  if (index === nums.length) {
    res.push([...nums])
    return
  } else {
    for (let i = index; i < nums.length; i++) {
      ;[nums[index], nums[i]] = [nums[i], nums[index]]
      // Call recursion for next
      recAllPermutations(index + 1, nums, res)
      // Again swap for next
      ;[nums[index], nums[i]] = [nums[i], nums[index]]
    }
  }
}

const result = []
const nums = [1, 2, 3]

recAllPermutations(0, nums, result)
console.log(result)


