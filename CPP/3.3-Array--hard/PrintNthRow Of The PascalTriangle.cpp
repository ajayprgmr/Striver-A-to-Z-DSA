// Problem Statement: Given 'n' you have to print nth row of the pascal triagle.

int bionomialCoefficient(int n, int r) {
    int res=1;
    for(int i=1; i<=r; i++) {
        res*=n-i+1;
        res/=i;
    }
    return res;
}

void PrintNthRowOfPascalTriangle(int n) {
    int temp=n-1;
    for(int i=0; i<n; i++) {
        cout<<bionomialCoefficient(temp,i)<<" ";
    }
}