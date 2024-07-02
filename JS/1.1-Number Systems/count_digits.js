//Given a number N. Count the number of digits in N which evenly divides N.

//Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

function evenlyDivides(N) {
  let count = 0
  let originalN = N
  while (N > 0) {
    let d
    d = N % 10
    if (d !== 0 && originalN % d == 0) count++
    N /= 10
  }
  return count
}

console.log(evenlyDivides(20))
