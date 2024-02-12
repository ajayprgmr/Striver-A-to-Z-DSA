#include<bits/stdc++.h>
using namespace std;
// solution 1
long long sumOfDivisors(int N){
        long long sum=0;
        for(int i=1; i<=N; i++) {
            if(N%i==0) 
            sum+= i;
        }
        return sum;
 }
// Solution 2
long long sumOfDivisors(long long N) {
    long long sum=1;
    for(int i=2; i<=sqrt(N); ++i) {
        if(N%i==0) {
        int factorSum=1;
        int factorPower=0;

        while(N%i==0) {
            N/=i;
            factorPower++;
            factorSum+= pow(i,factorPower);
        }
        sum*=factorSum;

    }
 }
        if(N>1) {
            sum*=1+(1+N);
        } 
        return sum;
}