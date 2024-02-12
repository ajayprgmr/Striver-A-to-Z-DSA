#include<bits/stdc++.h>
using namespace std;
void Print1ToN( int N) {
    if(N==0 ) {
        return ;
    }
    else {
        Print1ToN(N-1);
        cout<<N<<" ";
    }
}