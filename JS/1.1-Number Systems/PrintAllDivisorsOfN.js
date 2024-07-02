/** Finding All the Divisors of number N
 * TC : O(sqrt(N))
 * SC : O(N)
 */
function allDivisorsOfN(N) {
  let result = []
  for (let i = 1; i <= Math.sqrt(N); i++) {
    if (N % i == 0) {
      result.push(i)
      if (i !== N / i) result.push(N / i)
    }
  }
  return result
}

console.log(allDivisorsOfN(8)) // Output: [1, 8, 2, 4]
console.log(allDivisorsOfN(28)) // Output: [1, 28, 2, 14, 4, 7]
console.log(allDivisorsOfN(1)) // Output: [1]
