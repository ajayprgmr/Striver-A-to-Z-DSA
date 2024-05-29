function printAllDivisorsOfN(N) {
  const divisors = []

  for (let i = 2; i <= Math.sqrt(N); i++) {
    if (N % i == 0) {
      divisors.push(i)
      if (i !== N / i) {
        divisors.push(N / i)
      }
    }
  }

  divisors.sort((a, b) => a - b) // Sort the divisors in ascending order
  divisors.forEach((divisor) => console.log(divisor))
}

printAllDivisorsOfN(100)
