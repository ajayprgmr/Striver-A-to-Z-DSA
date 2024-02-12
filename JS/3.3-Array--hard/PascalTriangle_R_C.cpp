/*Row no. and col number is given you have say the number at 
  rth row and cth column  */

// Bruteforce, it might not work for a very big ncr
int binomialCoefficient (int n, int r) {
    if(r>n) return 0;
    if(r==0 || n==0) return 1;

    int nr=1;
    int dr=1;
//  Remember this when you're calculating nCr using shorthad choose
//  min gap between n and r, as we know ncr = nc(n-r)
    for(int i=1; i<=r; i++) {
        nr*=(n-i+1);
        dr*=i;
    }

    return nr/dr;
}
int pascal_R_C(int n, int r) {
    int row=n-1;
    int col=r-1;
    return binomialCoefficient(row,col);
    
}



// Optimal Solution it will work for evern bigger number.
long long binomialCoefficient (long long n, long long r) {
    if(r>n) return 0;
    if(r==0 || n==0) return 1;

    long long res=1;
    for(int i=1; i<=r; i++) {
        res*=n-i+1;
        res/=i;
    }

    return res;
}
long long pascal_R_C(long long int n, long long int r) {
    int row=n-1;
    int col=r-1;
    return binomialCoefficient(row,col);  
}
