/**
 * Finding GCD of min and max in an array
 */

function gcd(a, b) {
  if (a % b == 0) return b
  else return gcd(b, a % b)
}

function findGCD(arr) {
  let result = arr[0]
  arr.forEach((ele) => {
    result = gcd(result, ele)
  })
  return result
}

// Example usage
let array = [24, 36, 48, 60]
console.log(findGCD(array)) // Output will be 12

let anotherArray = [5, 10, 15]
console.log(findGCD(anotherArray)) // Output will be 5
