let num = [1, 2, 4, 3, 10, 45, 39, 30, 99, 98, 56]
num.sort((a, b) => a - b)

let res = []
let j = 0

for (let i = 1; i <= 100; i++) {
  if (i !== num[j]) {
    res.push(i)
  } else {
    j++
  }
}

console.log(res)
