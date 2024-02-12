/*
problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.
*/

#include<bits/stdc++.h>
using namespace std;


// Bruteforce solution    TC: O(N**2) SC: O(N**2)
void rotateby90(vector<vector<int> >& matrix, int n) {
    vector<vector<int>>ans;
    for(int i=0; i<n; i++ ) {
        for(int j=0; j<n; j++) {
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    matrix=ans;
}

// Optimal solution    TC: O(N**2) SC: O(1)
void rotateby90(vector<vector<int> >& matrix, int n) {
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}





