// Given the number of rows n. Print the first n rows of Pascal’s triangle.

#include<bits/stdc++.h>
using namespace std;
// Optimal Solution
int bionomialCoefficient(int n, int r) {
    int res=1;
    for(int i=1; i<=r; i++) {
        res*=n-i+1;
        res/=i;
    }
    return res;
}

void PrintN_Rows_PascalTriangle(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<bionomialCoefficient(i,j)<<" ";
        }
        cout<<'\n';
    }
}