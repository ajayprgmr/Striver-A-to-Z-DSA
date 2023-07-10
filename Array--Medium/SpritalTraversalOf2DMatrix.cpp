#include<bits/stdc++.h>
using namespace std;



 // one single soution exits TC: O(N**2) 
vector<int> spiralMatrix(vector<vector<int>>& MATRIX) {
    int top = 0, left = 0;
    int right = MATRIX[0].size() - 1, bottom = MATRIX.size() - 1;
    vector<int> ans;

    while (left <= right && top <= bottom) {
        // Traverse top row
        for (int i = left; i <= right; i++)
            ans.push_back(MATRIX[top][i]);
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++)
            ans.push_back(MATRIX[i][right]);
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                ans.push_back(MATRIX[bottom][i]);
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans.push_back(MATRIX[i][left]);
            left++;
        }
    }

    return ans;
}
