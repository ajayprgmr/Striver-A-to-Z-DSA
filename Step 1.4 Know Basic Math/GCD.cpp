#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
      long long  int g=gcd(A,B);
      long long int l=(A*B)/g;
      return {l,g};
        
    
    }
    public:
     long long int gcd(int A, int B){
         if(B==0)
         return A;
         else
         return gcd(B,A%B);
     }
};