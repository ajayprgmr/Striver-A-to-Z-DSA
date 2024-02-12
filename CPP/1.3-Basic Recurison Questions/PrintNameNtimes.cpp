#include<bits/stdc++.h>
using namespace std;
void PrintNameNtimes(string name,int N) {
    if(N==0) {
        return;
    }
    else{
        PrintNameNtimes(name, N-1);
        cout<<name<<" ";
    }
}
