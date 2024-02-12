#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
      long long  int g=gcd(A,B);
      long long int l=(A*B)/g;
      return {l,g};
        
    
    }
    public:
     long long int gcd(int A, int B){
         if(A%B==0)
         return B;
         else
         return gcd(B,A%B);
     }
};