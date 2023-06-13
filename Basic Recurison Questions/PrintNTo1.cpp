#include<bits/stdc++.h>
using namespace std;
void PrintNTo1( int N) {
   if(N>0) {
    cout<<N<<" ";
    PrintNTo1(N-1);
   }
   else return; 
}