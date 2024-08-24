//first method : Bruteforce for printing
let n1 = 100
let fibonacci = [0, 1] // set initial conditions
for (let i = 2; i < 10; ++i) {
  // add the two previous elements to get the current element
  fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1]
}

//Second Method :  for printing option solution
console.log(fibonacci)
let n = 100
let a = 0,
  b = 1

console.log(a) // Print the first Fibonacci number
console.log(b) // Print the second Fibonacci number

for (let i = 2; i < 10; ++i) {
  let next = a + b // Calculate the next Fibonacci number
  console.log(next) // Print the next Fibonacci number
  a = b // Update 'a' to be the last Fibonacci number
  b = next // Update 'b' to be the current Fibonacci number
}
