let start = performance.now()
let arr = [-100, 2, 3, 400, 5, 6, 7, 8, 9]
/* When array is almost sorted then Insertion Sort in prefered*/
// Pure Insertion Sort
function InsertionSort(arr) {
  let N = arr.length
  for (let i = 0; i < N; i++) {
    let j = i
    // Swaping till inorder is found from each index i.
    while (j > 0 && arr[j - 1] > arr[j]) {
      ;[arr[j - 1], arr[j]] = [arr[j], arr[j - 1]] // swap j-1 and j
      j--
    }
  }
  return arr
}

console.log(InsertionSort(arr))
console.log(performance.now() - start)
