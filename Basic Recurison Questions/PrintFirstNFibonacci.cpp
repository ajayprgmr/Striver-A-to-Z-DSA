#include<bits/stdc++.h>
using namespace std;
// Recursive way  TC : O(2^n)
int PrintFibN(int N) {
    if(N==1 or N==2 ){
        return 1;
    }
    else {
       
       return PrintFibN(N-1) + PrintFibN(N-2);
    }
}

// O(n) Loop Method
int PrintFibN(int N) {
    int a=0;
    int b=1;
    int c=a+b;
    for(int i=2; i<=N; i++) {
        c=a+b; // 1,2, 3
        a=b; // 1 , 1, 2
        b=c; // 1,2 , 3
    }
    return c;
}