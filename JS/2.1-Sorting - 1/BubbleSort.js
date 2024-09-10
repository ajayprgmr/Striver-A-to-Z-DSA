let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
let start = performance.now()
// Original Bubble Sort Algorithm
function BubbleSort1(arr) {
  const N = arr.length
  for (let i = 0; i < N; i++) {
    for (let j = 0; j < N - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j]
        arr[j] = arr[j + 1]
        arr[j + 1] = temp
      }
    }
  }
  return arr
}
console.log(BubbleSort1(arr))
console.log(performance.now() - start)
let mid = performance.now()
// BubbleSort with little modification
function BubbleSort2(arr) {
  const N = arr.length
  let isSwaped = false
  for (let i = 0; i < N; i++) {
    for (let j = 0; j < N - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j]
        arr[j] = arr[j + 1]
        arr[j + 1] = temp
        isSwaped = true
      }
    }
    if (!isSwaped) {
      return arr
    }
  }
  return arr
}

console.log(BubbleSort2(arr))

console.log(performance.now() - mid)
