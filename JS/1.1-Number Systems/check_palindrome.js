// Mathematical approach , but it will work for <=10 digits max
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0) return false
  let nodig = Math.floor(Math.log10(Math.abs(x)) + 1)
  let temp = x
  let l = nodig - 1,
    r = 0
  while (l > r) {
    let leftd = Math.floor(temp / 10 ** r) % 10
    let rightd = Math.floor(temp / 10 ** l) % 10

    if (leftd == rightd) {
      l--, r++
    } else {
      return false
    }
  }
  return true
}

// using to_string function of STL C++
var isPalindrome = function (x) {
  if (x < 0) return false

  let numberString = x.toString()
  let n = numberString.length
  for (let i = 0; i < n; i++) {
    if (numberString[i] !== numberString[n - 1 - i]) return false
  }
  return true
}
