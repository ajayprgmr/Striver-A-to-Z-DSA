#include<bits/stdc++.h>
using namespace std;
// For loop method
int Factorial(int n) {
  int fac=1;
  for(int i=2; i<=n; i++){
    fac*=i;
  }
  return fac;
}
// Recursion Method.
int Factorial(int n) {
  if(n<=0)
  return 1;
  else 
  return n*Factorial(n-1);
}
