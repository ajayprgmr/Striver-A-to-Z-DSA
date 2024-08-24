//Decimal to Binary
let n = 10
let res = ''
while (n >= 1) {
  d = n % 2
  res += d
  n = Math.floor(n / 2)
}
console.log(Number(res.split('').reverse().join('')))
