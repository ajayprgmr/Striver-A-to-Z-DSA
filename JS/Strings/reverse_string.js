// using built in methods
let str1 = 'ajaykushwaha'
console.log(str1.split('').reverse().join(''))

// Using user defined function
function reverse(str) {
  let arr = str.split('')
  let len = arr.length
  for (let i = 0; i < Math.floor(len / 2); i++) {
    let temp = arr[i]
    arr[i] = arr[len - i - 1]
    arr[len - i - 1] = temp
  }
  return arr.join('') // Convert array back to string
}

console.log(reverse('ajay')) // Output: "yaja"
