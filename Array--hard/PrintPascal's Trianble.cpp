/*
Print Pascal Triagle: below one is the sum of its adjacent
above two elements.
 
*/
#include<bits/stdc++.h>
using namespace std;

// Bruteforce TC : O(N)
int binomialCoefficient (int n, int r) {
    if(r>n) return 0;
    if(r==0 || n==0) return 1;

    int nr=1;
    int dr=1;
//  Remember this when you're calculating nCr using shorthad choose
// min gap between n and r, as we know ncr = nc(n-r)
    for(int i=1; i<=r; i++) {
        nr*=(n-i+1);
        dr*=i;
    }

    return nr/dr;
}
void printpascaltriable(int n) {
    for(int i=0; i<n; i++) {

        for(int j=0; j<=i; j++) {
            cout<<binomialCoefficient(i,j)<<" ";
        }
        cout<<endl;
    }
}


// better solution
