/*
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and 
row to 0 and then return the matrix.
*/

#include<bits/stdc++.h>
using namespace std;


// Bruteforce Solution TC: O(n**3)  SC: O(1)
void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    // Set the row to zero
                    for (int k = 0; k < col; k++) {
                        if (matrix[i][k] != 0)
                            matrix[i][k] = -2323;
                    }

                    // Set the column to zero
                    for (int k = 0; k < row; k++) {
                        if (matrix[k][j] != 0)
                            matrix[k][j] = -2323;
                    }
                }
            }
        }

        // Convert -2323 values to zero
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == -2323)
                    matrix[i][j] = 0;
            }
        }
}




// Better Solution TC : O(n*m) SC: O(m+n)
 void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n, 0); // row vector
        vector<int> col(m, 0); // col vector

        // Traverse the matrix:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith index of row as 1:
                    row[i] = 1;

                    // mark jth index of col as 1:
                    col[j] = 1;
                }
            }
        }

        // Finally, mark all (i, j) as 0
        // if row[i] or col[j] is marked with 1.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

// Optimal Solution   TC: n*m SC : O(1)
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    int col0 = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // Mark ith row and 0th col with 0
                matrix[i][0] = 0;

                // Mark jth col with 0 if j != 0
                if (j != 0) {
                    matrix[0][j] = 0;
                }
                else {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if (matrix[0][0] == 0) {
        for (int j = 1; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}
