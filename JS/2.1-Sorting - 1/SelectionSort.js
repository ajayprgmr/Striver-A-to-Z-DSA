let arr = [-100, 2, 3, 400, 5, 6, 7, 8, 9]

function InsertionSort(arr) {
  let N = arr.length
  // exactly N-1 passes required to sort
  for (let i = 0; i < N - 1; i++) {
    let mini = i
    for (let j = i + 1; j < N; j++) {
      if (arr[j] < arr[mini]) {
        mini = j
      }
    }
    // swaping logic
    if (i !== mini) {
      ;[arr[i], arr[mini]] = [arr[mini], arr[i]]
    }
  }
  return arr
}

console.log(InsertionSort(arr))
