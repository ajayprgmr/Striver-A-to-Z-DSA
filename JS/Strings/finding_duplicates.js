// Finding duplicate characters from a string : BruteForce Method
let str = 'ajaykushwaha'
let duplicates = []
for (let i = 0; i < str.length; i++) {
  let count = 0
  for (let j = i; j < str.length; j++) {
    if (str[i] == str[j]) {
      count++
    }
  }
  if (count >= 2 && !duplicates.includes(str[i])) {
    duplicates.push(str[i])
  }
}
console.log(duplicates.toString().split(',').join(''))

// First Solution : optimal using map
let tempStr = new Map()
let duplicates1 = []
for (let i = 0; i < str.length; i++) {
  let count = tempStr.get(str[i]) || 0
  tempStr.set(str[i], count + 1)
}
for (let [key, value] of tempStr) {
  if (value >= 2) {
    duplicates1.push(key)
  }
}
console.log(duplicates1.join(''))
