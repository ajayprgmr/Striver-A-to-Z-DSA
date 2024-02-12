/*Def : An Armstrong number, also known as a narcissistic number, is a number that is equal to the sum of its own digits raised to the power of the number of digits.
E.g.
abc...z = a^n + b^n + c^n + ... + z^n
*/
function armStrongNumber(n) {
  let temp = n
  let res = 0
  while (n > 0) {
    let d = n % 10
    res += d ** 3 // Using exponentiation operator
    n = Math.floor(n / 10) // Using integer division
  }
  return temp === res // Returning boolean result
}
