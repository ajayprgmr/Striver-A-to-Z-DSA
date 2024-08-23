/*
Input : n = 4
Output :
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

Input : n = 3
Output :
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3 

*/

function printConcentircPattern(n) {
  let size = 2 * n - 1
  let pattern = []

  for (let i = 0; i < size; i++) {
    let row = []
    for (let j = 0; j < size; j++) {
      let min = Math.min(i, j, size - i - 1, size - j - 1)
      row.push(n - min)
    }
    pattern.push(row)
  }

  for (let i = 0; i < size; i++) {
    console.log(pattern[i].join(' '))
  }
}
printConcentircPattern(4)
