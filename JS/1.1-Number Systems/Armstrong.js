/*Def : An Armstrong number, also known as a narcissistic number, is a number that is equal to the sum of its own digits raised to the power of the number of digits.
E.g.
abc...z = a^n + b^n + c^n + ... + z^n
GFG : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
*/
function armStrongNumber(n) {
  let temp = n
  let num_length = String(n).length // counting number of digits in the  n
  // let num_length = (Math.floor(Math.log10(num)) + 1)  // this will also work for calculatin number of digits in n

  let res = 0
  while (n > 0) {
    let d = n % 10
    res += Math.pow(d, num_length) // Using exponentiation operator
    n = Math.floor(n / 10) // Using integer division
  }
  return temp === res // Returning boolean result
}

console.log(armStrongNumber(153))
